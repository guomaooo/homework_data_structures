#ifndef LINKED_LIST_NOHEAD_H
#define LINKED_LIST_NOHEAD_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "..\seq_list\seq_list.h"

typedef int elem_type;
typedef struct node {
	elem_type elem;
	struct node * next;
} linked_node, linked_list;

/********************************
* aim:       initialize a list.
* parameter: void.
* return:    NULL.
********************************/
linked_list * LinkedListNoHeadInit(void);

/********************************
* aim:       get how many a list's elements.
* parameter: list: a pointer to the list.
* return:    element numbers.
********************************/
int LinkedListNoHeadLength(linked_list * list);

/********************************
* aim:       get a element by the its index(from 1) in a list.
* parameter: list:  a pointer to the list.
*			 index: the element's index.
* return:    the element's value.
********************************/
elem_type LinkedListNoHeadGet(linked_list * list, int index);

/********************************
* aim:       get a element's location by the its value in a list.
* parameter: list: a pointer to the list.
*			 elem: the element's value.
* return:    a pointer to the element.
********************************/
linked_node * LinkedListNoHeadLocate(linked_list * list, elem_type elem);

/********************************
* aim:       get a location's former location in a list.
* parameter: list:  a pointer to the list.
*			 locat: a pointer to the location whose former will be get.
* return:    a pointer to the former element.
********************************/
linked_node * LinkedListNoHeadFormer(linked_list * list, linked_list * locat);

/********************************
* aim:       get a element's latter element by its value in a list.
* parameter: list: a pointer to the list.
*			 elem: the element's value.
* return:    a pointer to the latter element.
********************************/
linked_node * LinkedListNoHeadLatter(linked_list * list, elem_type elem);

/********************************
* aim:       insert a element at a known location's latter location in a list.
* parameter: list:  a pointer to the list.
*            locat: a pointer to the location.
*			 elem:  the element's value which will be inserted.
* return:    void.
********************************/
void LinkedListNoHeadInsert(linked_list * list, linked_node * locat, elem_type elem);

/********************************
* aim:       delete a element at a known index(from 1) in a list.
* parameter: list:  a pointer to the list.
*            locat: a pointer to the location.
* return:    void.
********************************/
void LinkedListNoHeadDelete(linked_list * list, linked_node * locat);

/********************************
* aim:       judge a list is empty or not.
* parameter: list: a pointer to the list.
* return:    bool value whether the list is empty or not.
********************************/
bool LinkedListNoHeadEmpty(linked_list * list);

/********************************
* aim:       destroy a list.
* parameter: list: a pointer to the list.
* return:    void.
********************************/
void LinkedListNoHeadDestroy(linked_list * list);

/********************************
* aim:       add a new element in a list by sort.
* parameter: list: a pointer to the address of list.
*            elem: the element's value which will be added.
* return:    void.
********************************/
void LinkedListNoHeadAdd(linked_list ** list, elem_type elem);

/********************************
* aim:       concatenate list2 to list1 without sort.
* parameter: list1: a pointer to one list.
*            list2: a pointer to another list.
* return:    void.
********************************/
void LinkedListNoHeadCat(linked_list * list1, linked_list * list2);

/********************************
* aim:       union list2 and list1 with sort. clear list3 and store the result in list3.
* parameter: list1: a pointer to one list.
*            list2: a pointer to another list.
*            list3: a pointer to the address of list which will be cleared and stored.
* return:    void
********************************/
void LinkedListNoHeadUnion(linked_list * list1, linked_list * list2, linked_list ** list3);

/********************************
* aim:       restore a sequential list to a linked list without head node.
* parameter: s_list: a pointer to the sequential list which will be changed.
*            l_list: a pointer to the address of linked list.
* return:    void
********************************/
void SeqToLinkedNoHead(seq_list * s_list, linked_list ** l_list);

#endif // !Linked_LIST_H