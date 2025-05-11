# HashTable

**Author**: Nathanlie Ortega


**Email**: NathanlieOrtega.Dev@gmail.com


## Brief Description


C++ console app by Nathanlie Ortega implementing a hash table with linear probing and chaining. Supports insert, search, delete, and display with a menu interface. Demonstrates collision handling, dynamic structures, and hashing concepts.


## Files and Structure
- `main.cpp`: Main logic and menu interface.
- `HashTable.h`, `HashTable.cpp`: HashTable class and operations for both strategies.


## Compilation and Execution

1. Navigate to the project folder:

   cd HashTable

2. Compile:

    g++ HashTable.cpp main.cpp

3. Run:

    ./a.exe


## Alternative Way to Compile and Execute:

1. Navigate to the project folder:

   cd HashTable

2. Compile:

    g++ HashTable.cpp main.cpp -o HashTable.exe

3. Run:

    ./HashTable.exe


## Expected Output:
``````````````````````````````````````````````````````

+-------------------------------------------------+
|      Hash Table with Collision Strategies       |
|      Author name: Nathanlie Ortega              |
|      NathanlieOrtega.Dev@gmail.com              |
+-------------------------------------------------+


Main Menu
1. Insert
2. Search
3. Delete
4. Output
5. Exit

Choose an Option: 1


Collision Strategies:

1 for Linear Probing
2 for Chaining

Choose a Collision Strategy option: 1

Enter Integer to insert: 42
42 has been inserted successfully!

Main Menu
1. Insert
2. Search
3. Delete
4. Output
5. Exit

Choose an Option: 4


Collision Strategies:

1 for Linear Probing
2 for Chaining

Choose a Collision Strategy option: 1

Index 0: [empty]
Index 1: [empty]
Index 2: 42
Index 3: [empty]
Index 4: [empty]
Index 5: [empty]
Index 6: [empty]
Index 7: [empty]
Index 8: [empty]
Index 9: [empty]


(Continuation)......

````````````````````````````````````````````````````````