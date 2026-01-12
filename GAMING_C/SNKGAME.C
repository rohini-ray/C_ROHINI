#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h> // For non-blocking input on Unix/Linux/macOS
#include <fcntl.h>   // For fcntl()

// Game state variables


// New, larger dimensions for the game board
int width = 50;
int height = 25;

// The rest of your code remains the same...


int gameOver;
int score;
int headX, headY, foodX, foodY;
int tailX[100], tailY[100];
int tailLength;

// Directions
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum Direction dir;

// A non-blocking input function (Unix/Linux/macOS)
// Note: On Windows, you would use a different approach with <conio.h>
int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}

// ----------------------------------------------------
// Core Game Functions
// ----------------------------------------------------

void Setup() {
    gameOver = 0;
    dir = STOP;
    headX = width / 2;
    headY = height / 2;
    score = 0;
    tailLength = 0;

    // Place food at a random location
    srand(time(NULL));
    foodX = rand() % width;
    foodY = rand() % height;
}

void Draw() {
    // Clear the screen
    system("clear"); // Use "cls" on Windows

    // Top wall
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    // Game grid
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                printf("#"); // Left wall

            if (i == headY && j == headX)
                printf("O"); // Snake head
            else if (i == foodY && j == foodX)
                printf("F"); // Food
            else {
                int isTail = 0;
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Snake body
                        isTail = 1;
                        break;
                    }
                }
                if (!isTail)
                    printf(" "); // Empty space
            }

            if (j == width - 1)
                printf("#"); // Right wall
        }
        printf("\n");
    }

    // Bottom wall
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void Input() {
    if (kbhit()) {
        switch (getchar()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
        }
    }
}

void Logic() {
    // Move the tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = headX;
    tailY[0] = headY;
    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // Move the head based on direction
    switch (dir) {
        case LEFT:
            headX--;
            break;
        case RIGHT:
            headX++;
            break;
        case UP:
            headY--;
            break;
        case DOWN:
            headY++;
            break;
        default:
            break;
    }

    // Check for collisions with walls
    if (headX >= width || headX < 0 || headY >= height || headY < 0)
        gameOver = 1;

    // Check for collision with the tail
    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == headX && tailY[i] == headY) {
            gameOver = 1;
        }
    }

    // Check if food is eaten
    if (headX == foodX && headY == foodY) {
        score += 10;
        tailLength++;
        foodX = rand() % width;
        foodY = rand() % height;
    }
}

// ----------------------------------------------------
// Main Game Loop
// ----------------------------------------------------

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        usleep(100000); // Game speed
    }

    // Game Over screen
    system("clear");
    printf("Game Over!\n");
    printf("Your final score is: %d\n", score);

    return 0;
}