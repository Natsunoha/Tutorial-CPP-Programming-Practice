/*
 * Game Programming: Prerequisite Tests
 * Assignment 4, Test 2

Create a weapon shop.
Give the player 500 money.
Create two arrays that correspond with each other*
The arrays are: Item Name and Item Price.
The array is a fixed size: 10. This is the most the user can carry. At the beginning, it's empty, the player has nothing.

First, create a loop that keeps running until the player chooses "quit" from the menu.

Display a menu:

    Buy
    Sell
    Quit

Get the user's input. If the user's input is not 1, 2, or 3, then loop through the list infinitely until they finally enter something valid.

If they choose buy, display a list of items for sale.
When they choose an item, check to make sure they have enough money.
If they have enough money, subtract it from their purse and add the item name and item price to their inventory arrays.
If they don't have enough money, tell them they don't and go back to the main menu.

If they choose sell, then display the list of their items and item prices.
If they select an item, add the amount of money to their purse. Remove the item from the Name and Price arrays. This might require re-ordering your array.

 *
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 *
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
 * */

#include <iostream>
#include <string>
using namespace std;

void SetupShop( int storeItemPrice[], string storeItemName[] );
void BuyMenu( int storeItemPrice[], string storeItemName[],
             int playerItemPrice[], string playerItemName[],
             int& gold );
void SellMenu( int storeItemPrice[], string storeItemName[],
             int playerItemPrice[], string playerItemName[],
             int& gold );
int FindEmptyInventorySlot( int playerItemPrice[] );
void ShowInventory( int playerItemPrice[], string playerItemName[], int gold );

int main()
{
    int playerMoney = 500;

    // These should go in classes, but that's a later assignment!
    int storeItemPrice[10];
    string storeItemName[10];
    SetupShop( storeItemPrice, storeItemName );

    int playerItemPrice[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
    string playerItemName[10];

    bool done = false;

    while ( !done )
    {
        cout << endl << "FUTUR WEPUN SHAWP" << endl;
        cout << "1. Buy" << endl;
        cout << "2. Sell" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cin >> choice;

        switch( choice )
        {
            case 1:
                BuyMenu( storeItemPrice, storeItemName, playerItemPrice, playerItemName, playerMoney );
                break;

            case 2:
                SellMenu( storeItemPrice, storeItemName, playerItemPrice, playerItemName, playerMoney );
                break;

            case 3:
                done = true;
            break;
        }
    }

    cout << endl << "THANK YOU FOR SHOPPING WITH US!" << endl;
    ShowInventory( playerItemPrice, playerItemName, playerMoney );

    return 0;
}

void SetupShop( int storeItemPrice[], string storeItemName[] )
{
    storeItemPrice[0]   = 100;
    storeItemName[0]    = "Beam Cannon";

    storeItemPrice[1]   = 50;
    storeItemName[1]    = "Laser Pistol";

    storeItemPrice[2]   = 25;
    storeItemName[2]    = "Pea Shooter";

    storeItemPrice[3]   = 75;
    storeItemName[3]    = "Nanobots";

    storeItemPrice[4]   = 25;
    storeItemName[4]    = "Hors d'oeuvres";

    storeItemPrice[5]   = 60;
    storeItemName[5]    = "Cyber Armor";

    storeItemPrice[6]   = 10;
    storeItemName[6]    = "Corn Dog";

    storeItemPrice[7]   = 120;
    storeItemName[7]    = "Nova Gun";

    storeItemPrice[8]   = 100;
    storeItemName[8]    = "Shiny Pelican";

    storeItemPrice[9]   = 200;
    storeItemName[9]    = "Kitten";
}

void BuyMenu( int storeItemPrice[], string storeItemName[],
             int playerItemPrice[], string playerItemName[],
             int& gold )
{
    int i = 0, choice;

    while ( choice != 10 ) // 10 is the quit choice
    {
        cout << endl << "ITEMS FOR SALE:" << endl;
        for ( i = 0; i < 10; i++ )
        {
            cout << i << ". " << storeItemName[i] << "\t$" << storeItemPrice[i] << endl;
        }
        cout << i << ". Go back" << endl;

        cout << endl << "Current Balance: $" << gold << endl << endl;

        cout << "Choice: ";
        cin >> choice;

        if ( choice >= 0 && choice < 10 )
        {
            int emptySlot = FindEmptyInventorySlot( playerItemPrice );
            if ( gold >= storeItemPrice[choice] && emptySlot != -1 )
            {
                // You have enough money, you can buy this.
                // Also have to have room in your inventory
                playerItemPrice[emptySlot] = storeItemPrice[choice] / 2;
                playerItemName[emptySlot] = storeItemName[choice];
                gold -= storeItemPrice[choice];
            }
            else if ( emptySlot == -1 )
            {
                cout << "YOUR INVENTORY IS FULL!" << endl;
            }
            else
            {
                cout << "YOU DON'T HAVE ENOUGH MONEY!" << endl;
            }
            cout << endl;
        }
    }
}

void SellMenu( int storeItemPrice[], string storeItemName[],
             int playerItemPrice[], string playerItemName[],
             int& gold )
{
    int i = 0, choice = 0;

    while ( choice != 10 ) // 10 is the quit choice
    {
        cout << endl << "ITEMS YOU CAN SELL:" << endl;
        for ( i = 0; i < 10; i++ )
        {
            if ( playerItemPrice[i] != -1 )
            {
                cout << i << ". " << playerItemName[i] << "\t$" << playerItemPrice[i] << endl;
            }
        }
        cout << i << ". Go back" << endl;

        cout << endl << "Current Balance: $" << gold << endl << endl;

        cout << "Choice: ";
        cin >> choice;

        if ( choice >= 0 && choice < 10 )
        {
            gold += playerItemPrice[choice];
            playerItemPrice[choice] = -1; // Set this item to "blank".
            cout << endl;
        }
    }
}

int FindEmptyInventorySlot( int playerItemPrice[] )
{
    int emptySlotIndex = -1;
    for ( int invIndex = 0; invIndex < 10; invIndex++ )
    {
        if ( playerItemPrice[invIndex] == -1 )
        {
            emptySlotIndex = invIndex;
            break;
        }
    }
    return emptySlotIndex;
}

void ShowInventory( int playerItemPrice[], string playerItemName[], int gold )
{
    cout << endl << "YOUR INVENTORY:" << endl;
    for ( int i = 0; i < 10; i++ )
    {
        if ( playerItemPrice[i] != -1 )
        {
            cout << playerItemName[i] << endl;
        }
    }

    cout << "Your balance is $" << gold << endl;
}
