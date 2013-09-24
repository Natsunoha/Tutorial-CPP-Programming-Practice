/*
 * C++ Programming Practice
 * Repo: https://github.com/Moosader/Tutorial-CPP-Programming-Practice
 * Webpage: http://www.moosader.com/
 * Rachel J. Morris
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
