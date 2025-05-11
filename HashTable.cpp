
/* 
File Name: HashTable.cpp

*/

#include <iostream>
#include "HashTable.h"

using namespace std;

HashTable::HashTable(int range) : table_size(range) 
{
    linearProbingCollision.resize(range, -1);   //This will initialize linear probing table when range is -1 size.

    chaining.resize(range);                     //This will Initialize chaining table when the range is considered an empty lists.

}

int HashTable::hash(int pair)
{
    return pair % table_size;       //This is the define of a hash function.
}


//This is a linear probing function to find an available index for insertion.
int HashTable::linearProbing(int key, int value, bool num) 
{
    int linearIndex = value;        //This will put linear index for reference.

    int probingCollisions = 0;         //This can track the number of probing collisions attempts.

    while (linearProbingCollision[value] != -1 && linearProbingCollision[value] != key) 
    {
        value = (value + 1) % table_size;
        probingCollisions++;

        if (probingCollisions >= table_size) 
        {
            return -1;              //This returns the table as too many collisions.
        }


        if (value == linearIndex)
        {
            return -1;              //This returns as too many collisions or full cycle.
        }
    }

    return value;
}


//This is an insertion function of an element using linear probing strategy.
void HashTable::insertLinearProbing(int pair) 
{
    int value = hash(pair);

    int insertIndex = linearProbing(pair, value, true);

    if (insertIndex == -1) 
    {
        cout << "The Insertion is rejected due to too many collisions." << endl;

    } 
    
    else if (linearProbingCollision[insertIndex] == -1)
    {
        linearProbingCollision[insertIndex] = pair;

        cout << pair << " has been inserted successfully!" << endl;

    } 
    
    
    else 
    {
        cout << "The insertion failed due to collision." << endl;

    }

}


//This is a search function of an element using linear probing strategy.
void HashTable::searchLinearProbing(int pair) 
{
    int value = hash(pair);

    int searchIndex = linearProbing(pair, value);

    if (searchIndex != -1 && linearProbingCollision[searchIndex] == pair) 
    {
        cout << "Element " << pair << " exists" << endl;

    } 
    
    else 
    {
        cout << "Element " << pair << " does not exist" << endl;
    }

}


//This is a delete function of an element using linear probing strategy.
void HashTable::deleteLinearProbing(int pair) 
{
    int index = hash(pair);

    int deleteIndex = linearProbing(pair, index);

    if (deleteIndex != -1 && linearProbingCollision[deleteIndex] == pair) 
    {
        linearProbingCollision[deleteIndex] = -1;
        cout << "Element " << pair << " exists and was removed" << endl;
    } 
    
    else 
    {
        cout << "Element " << pair << " does not exist" << endl;

    }

}



//This outputs the entire hash table of the linear probing strategy.
void HashTable::outputLinearProbing() 
{
    for (int i = 0; i < table_size; i++)
    {
        if (linearProbingCollision[i] != -1)
        {
            cout << "Index " << i << ": " << linearProbingCollision[i] << endl;

        } 
        
        else
        {
            cout << "Index " << i << ": [empty]" << endl;

        }

    }

}


//This is an insertion function of an element using chaining strategy.
void HashTable::insertChaining(int pair) 
{
    int insertIndex = hash(pair);
    chaining[insertIndex].push_back(pair);

    cout << pair << " has been inserted successfully!" << endl;
}



//This is a sesarch function of an element using chaining strategy.
void HashTable::searchChaining(int pair) 
{
    int searchIndex = hash(pair);

    for (int val : chaining[searchIndex]) 
    {
        
        if (val == pair) 
        {
            cout << "Element " << pair << " exists" << endl;
            return;

        }

    }

    cout << "Element " << pair << " does not exist" << endl;

}


//This is a delete function of an element using chaining strategy.
void HashTable::deleteChaining(int pair)
 {
    int deleteIndex = hash(pair);

    for (auto num = chaining[deleteIndex].begin(); num != chaining[deleteIndex].end(); ++num)
    {
        if (*num == pair) 
        {
            chaining[deleteIndex].erase(num);

            cout << "Element " << pair << " exists and was removed" << endl;

            return;

        }

    }

    cout << "Element " << pair << " does not exist" << endl;

}



//This outputs the entire hash table of the chaining strategy.
void HashTable::outputChaining() 
{

    for (int i = 0; i < table_size; i++) 
    {
        cout << "Index " << i << ": ";

        if (chaining[i].empty()) 
        {
            cout << "[empty]";
        }
        
        else 
        {

            for (int val : chaining[i]) 
            {
                cout << val << " -> ";
            }

            cout << "NULL";
        }

        cout << endl;
        
    }
}
