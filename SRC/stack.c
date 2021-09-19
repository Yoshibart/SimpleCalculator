
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


struct stack * stack_buffer = NULL;

void push(char value){
	struct stack * ptr = (struct stack * )malloc(sizeof(struct stack));
	ptr->element = value;
	ptr->next = stack_buffer;
	stack_buffer = ptr;
}

char pop(void){
	if(stack_buffer){
		struct stack * ptr = stack_buffer;
		char elem = ptr->element;
		stack_buffer = ptr->next;
		free(ptr);
		return elem;
	}
	return ' ';
}

