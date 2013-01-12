/*
 * Game Programming: Prerequisite Tests
 * Assignment 4, Test 1



 *
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 *
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
 * */

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Coordinates
{
    int x, y;
};

void DrawMap( Coordinates mapDimensions, Coordinates player, Coordinates stick );
void ClearScreen();
void GenerateCoordinates( Coordinates& stick, Coordinates mapDimensions );

int main()
{
    Coordinates player;
    player.x = 15;
    player.y = 8;
    int score = 0;

    Coordinates mapDimensions;
    mapDimensions.x = 30;
    mapDimensions.y = 15;

    srand( time( NULL ) );
    Coordinates stick;
    GenerateCoordinates( stick, mapDimensions );

    bool done = false;

    while ( !done )
    {
        ClearScreen();
        DrawMap( mapDimensions, player, stick );
        cout << "Score: " << score << endl;
        cout << endl << "(W) North, (S) South, (A) West, (D) East" << endl;
        char choice;
        cin >> choice;

        // Movement
        if ( choice == 'w' )
        {
            if ( player.y - 1 > 0 )
            {
                player.y -= 1;
            }
        }
        else if ( choice == 's' )
        {
            if ( player.y + 1 < mapDimensions.y - 1 )
            {
                player.y += 1;
            }
        }
        else if ( choice == 'a' )
        {
            if ( player.x - 1 > 0 )
            {
                player.x -= 1;
            }
        }
        else if ( choice == 'd' )
        {
            if ( player.x + 1 < mapDimensions.x )
            {
                player.x += 1;
            }
        }

        if ( player.x == stick.x && player.y == stick.y )
        {
            // Player collides with stick
            GenerateCoordinates( stick, mapDimensions );
            score++;
        }
    }

	return 0;
}

void DrawMap( Coordinates mapDimensions, Coordinates player, Coordinates stick )
{
    for ( int y = 0; y < mapDimensions.y; y++ )
    {
        cout << "#";
        for ( int x = 0; x < mapDimensions.x; x++ )
        {
            if ( x == player.x && y == player.y )
            {
                cout << "@";
            }
            else if ( x == stick.x && y == stick.y )
            {
                cout << "y";
            }
            else if ( y == 0 || y == mapDimensions.y - 1 )
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << "#\n";
    }
}

void ClearScreen()
{
    cout << string( 50, '\n' );
}

void GenerateCoordinates( Coordinates& stick, Coordinates mapDimensions )
{
    stick.x = rand() % mapDimensions.x + 1;
    stick.y = (rand() % (mapDimensions.y - 1)) + 1;
}
