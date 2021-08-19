//#ifndef
//#define __STACK_H_
//
//extern struct stack;
//extern struct stack * stack-buffer;
//void push(int);
//int pop(void);
//
//#endif

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack{
	int element;
	struct stack * next;
};

struct stack * stack-buffer = NULL;

void push(int value){
	struct stack * ptr = (struct stack * )malloc(sizeof(struct stack));
	ptr->element = value;
	ptr->next = stack-buffer;
	stack-buffer = ptr;
}

int pop(void){
	if(stack-buffer){
		struct stack * ptr = stack-buffer;
		int elem = ptr->element;
		stack-buffer = ptr->next;
		free(ptr);
		return elem;
	}
	return 0;
}
