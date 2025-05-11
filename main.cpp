
/* 
File Name: main.cpp

*/

#include <iostream>
#include "HashTable.h"

using namespace std;

int main() 
{
	//A display of the title, my name, and e-mail address
	cout << endl;
    cout << "+-------------------------------------------------+" << endl;
    cout << "|      Hash Table with Collision Strategies	  |" << endl;
    cout << "|      Author name: Nathanlie Ortega              |" << endl;
    cout << "|      NathanlieOrtega.Dev@gmail.com              |" << endl;
    cout << "+-------------------------------------------------+\n" << endl;
	
    HashTable sizeTable(10); //Hash table that contains 10 sizes.
    int choice;
    int val;
    int strategyOption;

    while (true) 
    {
        //This will prompt user to choose what main menu to pick.
        cout << "\nMain Menu" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Search" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Output" << endl;
        cout << "5. Exit" << endl;
        cout << "\nChoose an Option: ";
        cin >> choice;

        cout << endl;


        //This will prompt user to choose what Collision Strategies to pick.
        if (choice >= 1 && choice <= 4) 
        {
            cout << "\nCollision Strategies: " << endl;
            cout << "\n1 for Linear Probing" << endl;
            cout << "2 for Chaining" << endl;
            cout << "\nChoose a Collision Strategy option: ";
            cin >> strategyOption;

            cout << endl;

            if (strategyOption != 1 && strategyOption != 2) 
            {
                cout << "The strategy option is incorrect. Please try again." << std::endl;
                continue;
            }
        }


        switch (choice) 
        {
            case 1:                 //This option will insert an element into the hash table.
                cout << "Enter Integer to insert: ";
                cin >> val;

                if (strategyOption == 1) 
                {
                    sizeTable.insertLinearProbing(val);
                } 
                
                else
                {
                    sizeTable.insertChaining(val);
                }

                break;

            case 2:                 //This option will search for an element in the hash table.
                cout << "Enter Integer to search: ";
                cin >> val;

                if (strategyOption == 1) 
                {
                    sizeTable.searchLinearProbing(val);
                } 
                
                else 
                {
                    sizeTable.searchChaining(val);
                }

                break;

            case 3:                 //This option will delete an element from the hash table.
                cout << "Enter Integer to delete: ";
                cin >> val;

                if (strategyOption == 1) 
                {
                    sizeTable.deleteLinearProbing(val);
                } 
                
                else
                {
                    sizeTable.deleteChaining(val);
                }

                break;

            case 4:                 //This option will display the contents of the hash table.
                if (strategyOption == 1) 
                {
                    sizeTable.outputLinearProbing();
                } 
                
                else 
                {
                    sizeTable.outputChaining();
                }

                break;


            case 5:                 //This option will exit the program.
            {
                cout << "Exiting Menu..." << endl;
                return 0;
            }
            


            default:                //If none of the option is chosen, an error is outputed to retry again.
                cout << "The choice option is incorrect. Please try again." << endl;
                break;

        }

    }

    return 0;

}