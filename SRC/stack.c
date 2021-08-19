
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


struct stack * stack_buffer = NULL;

void push(int value){
	struct stack * ptr = (struct stack * )malloc(sizeof(struct stack));
	ptr->element = value;
	ptr->next = stack_buffer;
	stack_buffer = ptr;
}

int pop(void){
	if(stack_buffer){
		struct stack * ptr = stack_buffer;
		int elem = ptr->element;
		stack_buffer = ptr->next;
		free(ptr);
		return elem;
	}
	return 0;
}

