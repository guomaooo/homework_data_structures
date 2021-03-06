#ifndef SEQ_LIST_H
#define SEQ_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int seq_list_elemtype;
typedef struct seq_list_s{
	seq_list_elemtype * elem;
	int num_elem;
	int len;
} *seq_list;

/********************************
* aim:       create a new sequential list and initialize it.
* parameter: num_elem: the number of the element.
* return:    the new sequential list.
********************************/
seq_list SeqListInit(int num_elem);

/********************************
* aim:       get how many a list's elements.
* parameter: a pointer to the list.
* return:    element numbers.
********************************/
int SeqListLength(seq_list list);

/********************************
* aim:       get a element by the its index in a list.
* parameter: list:  a pointer to the list.
*			 index: the element's index.
* return:    the element's value.
********************************/
seq_list_elemtype SeqListGet(seq_list list, int index);

/********************************
* aim:       get a element's index by the its value in a list.
* parameter: list: a pointer to the list.
*			 elem: the element's value.
* return:    the element's index.
********************************/
int SeqListLocate(seq_list list, seq_list_elemtype elem);

/********************************
* aim:       get a element's former element by its value in a list.
* parameter: list: a pointer to the list.
*			 elem: the element's value.
* return:    the former element.
********************************/
seq_list_elemtype SeqListFormer(seq_list list, seq_list_elemtype elem);

/********************************
* aim:       get a element's latter element by its value in a list.
* parameter: list: a pointer to the list.
*			 elem: the element's value.
* return:    the latter element.
********************************/
seq_list_elemtype SeqListLatter(seq_list list, seq_list_elemtype elem);

/********************************
* aim:       insert a element at a known index in a list.
* parameter: list:  a pointer to the list.
*            index: the known index which between 0 to the list's element numbers.
*			 elem:  the element's value which will be inserted.
* return:    bool value whether the function is success or not.
********************************/
bool SeqListInsert(seq_list list, int index, seq_list_elemtype elem);

/********************************
* aim:       delete a element at a known index in a list.
* parameter: list:  a pointer to the list.
*            index: the known index which between 0 to the list's element numbers.
* return:    void.
********************************/
void SeqListRemove(seq_list list, int index);

/********************************
* aim:       judge a list is empty or not.
* parameter: list: a pointer to the list.
* return:    bool value whether the list is empty or not.
********************************/
bool SeqListEmpty(seq_list list);

/********************************
* aim:       clear all the elements in a list.
* parameter: list: a pointer to the list.
* return:    void.
********************************/
void SeqListClear(seq_list list);

/********************************
* aim:       destroy a list.
* parameter: list: a pointer to the list.
* return:    void.
********************************/
void SeqListDestroy(seq_list list);

/********************************
* aim:       add a new element in a list's tail.
* parameter: list: a pointer to the list.
*            elem: the element's value which will be added.
* return:    void.
********************************/
void SeqListAdd(seq_list list, seq_list_elemtype elem);

/********************************
* aim:       delete a  element in a list's tail.
* parameter: list: a pointer to the list.
* return:    void.
********************************/
void SeqListDelete(seq_list list);

/********************************
* aim:       concatenate list2 to list1 without sort.
* parameter: list1: a pointer to one list.
*            list2: a pointer to another list.
* return:    void.
********************************/
void SeqListCat(seq_list list1, seq_list list2);

/********************************
* aim:       union list2 and list1 with sort, and return a new list which has two lists' elements.
* parameter: list1: a pointer to one list.
*            list2: a pointer to another list.
* return:    the new list after union.
********************************/
seq_list SeqListUnion(seq_list list1, seq_list list2);

#endif
