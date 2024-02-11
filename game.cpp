#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int width = 20;
const int height = 10;

bool gameOver;
int snakeX, snakeY, foodX, foodY, score;
int tailX[100], tailY[100];
int tailLength;

enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    snakeX = width / 2;
    snakeY = height / 2;
    foodX = rand() % width;
    foodY = rand() % height;
    score = 0;
    tailLength = 0;
}

void Draw()
{
    system("cls");

    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
        cout << endl;
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
            {
                cout << "#";
            }
            if (i == snakeY && j == snakeX)
            {
                cout << "O";
            }
            else if (i == foodY && j == foodX)
            {
                cout << "F";
            }
            else
            {
                bool printTail = false;
                for (int k = 0; k < tailLength; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        printTail = true;
                    }
                }

                if (!printTail)
                {
                    cout << " ";
                }
            }

            if (j == width - 1)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
        cout << endl;
    }

    cout << "Score:" << score << endl;
}

void Input()
{
    if (cin.peek() != EOF) // Check if input is available
    {
        switch (cin.get())
        {
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
        case 'x':
            gameOver = true;
            break;
        }
    }
}


void Logic()
{
    // Move the tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = snakeX;
    tailY[0] = snakeY;

    for (int i = 1; i < tailLength; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // Move the head
    switch (dir)
    {
    case LEFT:
        snakeX--;
        break;
    case RIGHT:
        snakeX++;
        break;
    case UP:
        snakeY--;
        break;
    case DOWN:
        snakeY++;
        break;
    default:
        break;
    }

    // Check collision with the border
    if (snakeX >= width || snakeX < 0 || snakeY >= height || snakeY < 0)
        gameOver = true;

    // Check collision with the tail
    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == snakeX && tailY[i] == snakeY)
        {
            gameOver = true;
        }
    }

    // Check collision with food
    if (snakeX == foodX && snakeY == foodY)
    {
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
        tailLength++;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Setup();

    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }

    cout << "Game Over! Your Score: " << score << endl;

    return 0;
}
