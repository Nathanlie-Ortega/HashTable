
/* 
File Name: HashTable.h

*/


#include <vector>
#include <list>
#include <iostream>

using namespace std;

class HashTable 
{
private:
    int table_size;                         //This is a variable for the size of the hash table.
    vector<int> linearProbingCollision;     //This is a vector for linear probing.
    vector<list<int>> chaining;             //This is a vector of linked lists for chaining.

    
    int hash(int pair);           //This is the define of a hash function.

    
    int linearProbing(int pair, int value, bool num = false);       //This is Linear Probing Collision Strategy function to use for each implementations.

public:

    HashTable(int size);                        //This is a Hash Table Constructor to initialize with size.

    //This is the Linear Probing Collision Strategy Implementations Functions.
    void insertLinearProbing(int pair);         //This is an insert function using linear probing.

    void searchLinearProbing(int pair);         //This is a search function using linear probing.

    void deleteLinearProbing(int pair);         //This is a delete function using linear probing.

    void outputLinearProbing();                 //This outputs hash table contents for linear probing.

    //This is the Chaining Functions
    void insertChaining(int pair);              //This is an insert function using chaining.

    void searchChaining(int pair);              //This is a search function using chaining.

    void deleteChaining(int pair);              //This is a delete function using chaining.

    void outputChaining();                      //This outputs hash table contents for chaining.
};
