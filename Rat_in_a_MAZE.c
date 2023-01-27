#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>


int colorPrint(char color[],char str[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    if(strcmp(color,"red")==0)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    }

    if(strcmp(color,"blue")==0)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    }

    if(strcmp(color,"green")==0)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    }


    printf("%s",str);
    SetConsoleTextAttribute(hConsole, saved_attributes);

    return 0;
}

int score = 0;

bool isSafe(int x, int y, int N, int maze[N][N])
{
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;

    return false;
}


bool ratInMaze(int N, int x, int y, int maze[N][N], int sol[N][N])
{

    if (isSafe(x, y, N, maze) == true)
    {

        if (x == N - 1 && y == N - 1)
        {
            sol[x][y] = 1;
            score++;
            return true;
        }

        sol[x][y] = 1;


        if (ratInMaze(N, x + 1, y, maze, sol) == true)
            return true;

        if (ratInMaze(N, x, y + 1, maze, sol) == true)
            return true;

        sol[x][y] = 0;
        return false;
    }

    return false;
}

void printSolution(int N, int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (sol[i][j] == 1)
            printf("\033[0;32m M\033[0m ");

            else
                printf(" %d ", sol[i][j]);
        }
        printf("\n");
    }
}



void printScore()
{
    printf("\n\n\n\n\n");
    printf("\t\t\t\t    Score: %d\n", score);
    printf("\t\t\t\t****************\n");
    printf("\n\n");

}

void introduction()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    printf("\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\t\t\t\t********** Rat in Maze **********\n");
    printf("\t\t\t\t*********************************\n");
    printf("\n\n\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("Welcome to the Rat in a Maze game!\n");
    printf("In this game, you will be given a randomly generated maze and you need to find a path for the rat to reach the destination.\n");
    printf("The rat can only move right, left, up, or down and it cannot move through dead ends (represented by 0s).\n");
    printf("Your score will be updated every time the rat reaches the destination.\n\n");



    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n Developer: 1)Nova Sultana\n\t 2)Israt Jahan\n\t");
    delay(4);
    printf("\n\n\n\n\n\n\n");
    system("cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
}

void delay(int seconds)
{
    unsigned long int count=333333333,i,j;
    for(i=0; i<seconds; i++)
        for(j=0; j<count; j++);
}

void loading()
{
    int i,j, a;
    printf("\n\n\n\n\n\n\t\t\t\t\t LOADING");
    for(i=0; i<=13; i++)
    {
        for(j=0 ; j<100000000 ; j++);
        a=j;
        printf(".");

    }
}

int main()
{

    srand (time(NULL));
    introduction();
    loading();
    system("cls");
    int N;
    int i, j;

    int choice;

    while(choice != 2)
    {


        printf("Enter square matrix value (N x N): ");
        scanf("%d", &N);

        int givenMaze[N][N];
        int solMaze[N][N];


        for(int i = 0; i<N; i++)
        {
            for(int j = 0; j<N; j++)
            {
                solMaze[i][j] = 0;
            }
        }


        for(int i = 0; i<N; i++)
        {
            for(int j = 0; j<N; j++)
            {
                givenMaze[i][j] = (rand() % 2) + 0;
            }
        }

        if(ratInMaze(N, 0, 0, givenMaze, solMaze) == false)
        {

            printf("\n\nGenarated Maze\n");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                    printf(" %d ", givenMaze[i][j]);
                printf("\n");
            }



            printf("\n\nSolution Doesn't Exists\n\n");


            printf("Do you want to try again?\n");
            printf("Yes(1)\nExit(2)\n\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if(choice == 1)
            {
                system("cls");
            }

        }
        else
        {

            printf("\n\nGenarated Maze\n");
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                    printf(" %d ", givenMaze[i][j]);
                printf("\n");
            }

            printf("\n\nThe rat found out its way\n");
            printSolution(N, solMaze);

            printScore();


            printf("\n\nDo you want to try again?\n");
            printf("Yes(1)\nExit(2)\n\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if(choice == 1)
            {
                system("cls");
            }

        }
    }
}

