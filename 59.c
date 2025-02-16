//C Program to Reverse a Stack using Recursion 
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->arr[stack->top];
}

void insertAtBottom(struct Stack* stack, int value) {
    if (isEmpty(stack)) {
        push(stack, value);
        return;
    }
    int top = pop(stack);
    insertAtBottom(stack, value);
    push(stack, top);
}

void reverseStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        return;
    }
    int value = pop(stack);
    reverseStack(stack);
    insertAtBottom(stack, value);
}

int main() {
    struct Stack stack;
    initStack(&stack);
    int n, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(&stack, value);
    }

    reverseStack(&stack);

    printf("Reversed stack is:\n");
    while (!isEmpty(&stack)) {
        printf("%d\n", pop(&stack));
    }

    return 0;
}
