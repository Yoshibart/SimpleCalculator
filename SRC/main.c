#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
	int i, p[] = {1,2,3,4,5,6,7,8,9};
	for(i = 0; i < (sizeof(p)/sizeof(p[0])); i++) push(*(p+i));
	struct stack * ptr = NULL;
	
	for(ptr = stack_buffer; ptr; ptr=ptr->next){
		printf("%d ", ptr->element);
	}puts("");
	
	i = pop();	
	
	for(ptr = stack_buffer; ptr; ptr=ptr->next){
		printf("%d ", ptr->element);
	}puts("");
}
