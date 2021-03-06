#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int linked_stack_elemtype;
typedef struct linked_stack_node_s{
	linked_stack_elemtype elem;
	struct linked_stack_node_s * next;
} *linked_stack;

/********************************
* aim:       create a new linked stack and initialize it.
* parameter: void.
* return:    the new linked stack.
********************************/
linked_stack LinkedStackInit(void);

/********************************
* aim:       judge a stack is empty or not.
* parameter: stack: the stack.
* return:    a bool value whether the stack is empty or not.
********************************/
bool LinkedStackEmpty(linked_stack stack);

/********************************
* aim:       push a element into the stack.
* parameter: stack: the address of stack.
*            elem:  the element.
* return:    void.
********************************/
void LinkedStackPush(linked_stack * stack, linked_stack_elemtype elem);

/********************************
* aim:       pop a element out of the stack.
* parameter: stack: the address of stack.
* return:    the value of the element which will be poped.
********************************/
linked_stack_elemtype LinkedStackPop(linked_stack * stack);

/********************************
* aim:       destroy a stack.
* parameter: stack: a pointer to the stack.
* return:    void.
********************************/
void LinkedStackDestroy(linked_stack * stack);

#endif