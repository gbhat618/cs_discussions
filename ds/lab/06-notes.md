# Notes

## Heap

* min heap
    * parent less than child node
* max heap
    * parent greater than child node


## Implementation

* Heap is a binary tree
    Linked list
    ```
    struct Node {
        int data;
        struct Node* next;
    }
    ```
    Binary tree
    ```
    struct Node {
        int data;
        struct Node* left;
        struct Node* right;
    }
    ```
    Array
    ```
    Left child: 2 * i + 1
    Right child: 2 * i + 2
    Parent: (i - 1) / 2
    ```
    int a[10];

    root --> a[0]
    root.left --> 2 * 0 + 1 => 1 --> a[1]
    root.right --> 2 * 0 + 2 => 2 --> a[2]
    
    root.left.left --> 2 * 1 + 1 ==> a[3]
    root.left.right --> 2 * 1 + 2 ==>  a[4]

    root.right.left --> 2 * 2 + 1 => a[5]
    root.right.right --> 2 * 2 + 2 => 6 => a[6]


    13   9   8   3   7    2   1
    

    25, 23, 22, 20, 15, 14, 12, 11


             25
        23          22
    20      15    14    12
11





Exmaple

input: 2  3  7  9  1  5  4



output: 9  3  7  2  1  5  4

                9
        3               7
    2       1         5     4
