#ifndef __STACK_H_
#define __STACK_H_

struct stack{
	char element;
	struct stack * next;
};
extern struct stack * stack_buffer;
void push(char);
char pop(void);
void display_stack(void);
#endif
