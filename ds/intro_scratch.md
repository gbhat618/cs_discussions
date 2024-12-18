# What is DS?

## Data types

### Primitive data types: int, short, char, long
    * shopping
        * shirt --> int a = 500/-
        * pant --> int b = 1000/-

* Real world program
    * Bus ticket booking program
        * bus data store
            * bus:
                * number of seat --> 50 --> int
                * bus_no --> KA31M5600
                    --> list of characters (word) --> `char bus_num[20]` --> char* --> string
                * bus_type --> sitting / sleeping / hybrid
                    --> list of characters (word) --> `char bus_type[15]` --> char* --> string


num_seats | bus_number | bus_type
50  | AFFFMA | sitting
35  | HHSLLA | sleeping
55  | AFFFMA | sitting
60  | HHSLLA | sleeping


int bus1_seats = 50;
int bus2_seats = 35;

char bus_num = {"'....}
....
..

book_bus(int num_seats, char* bus_num, char* bus_type) {


}


### Compound/Custom Data types

struct Bus {
    int seats;
    char bus_num[20];
    char bus_type[20];
    char model_year[4],
}

book_bus(Bus b) {
    printf("", b->seats)
}

Bus a = Bus(50, "AHHAH", "sitting");
Bus b = Bus(35, "AHHAH", "sitting");
Bus c = Bus(55, "AHHAH", "sitting");
Bus d = Bus(60, "AHHAH", "sitting");

Bus all_buses[100];


## Data Structures

* Collections of items
* Stored such a way that it is efficient in "Specific Retrieval"
    * book arrangement
        * 1 --> efficient for selecting type of book for reading
        * 2 --> efficient for finding published year wise

Programming
* Collection of items
    * list of numbers
    * list of strings
    * list of characters
    * list of Custom Datatypes (buses, books)
* Stores ways
    * highest number quickly?
    * lowest number quickly?
    * sort representation
    * first come first serve?
    * first come last serve?
    * delete an item

### Arrangements
    * Array: continuous memory allocation [0, 1, 2, 3,....]; int array[100]
    * Node (/LinkedList): non-continuous memory allocation

#### Array based datastructure
    * array
    * stack
    * queue
    * hash table (dictionary)
    * heap

#### Node (/LinkedList)
    * LinkedList
        * SinglyLinkedList
        * DoublyLinkedList
        * Circular...
        * DoublyCircular...
    * Trees
        * Binary Tree
        * Binary Search Tree
        * B+ Tree

* Demo
    * dictionary using tree

### Most common operations
    * insert new item
    * delete existing item
    * find existing item (search)
    * find if an items exists?
    * full traversal (visit all items)
