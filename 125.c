//C Program to Create a Copy of a Singly Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* copyList(Node *head) {
    if (!head) return NULL;
    return &(Node){ head->data, copyList(head->next) };
}

void printList(Node *head) {
    while (head) printf("%d -> ", head->data), head = head->next;
    printf("NULL\n");
}

int main() {
    Node n3 = {3, NULL}, n2 = {2, &n3}, n1 = {1, &n2};
    Node *copy = copyList(&n1);
    printList(copy);
    return 0;
}
