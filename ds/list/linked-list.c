#include<stdio.h>
#include<stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
} Node;


void addNode(int data, Node *)