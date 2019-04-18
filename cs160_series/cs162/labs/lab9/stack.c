#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void inti(struct stack *);//initialize stack members
//void push(struct stack *, int);//grow contents to store int
//int pop(struct stack *); //shrink contents and return top int

struct node{

	int val; //integer node value
	struct node *next; //pointer to next node

};

struct stack {

	struct node *head; //pointer to first node in stack
	struct node *tail; //pointer to top of stack

};


void init(struct stack *s){

	s->head = NULL;
	s->tail = NULL;

}




void push(struct stack *s, int val){

	struct node *new_node = malloc(sizeof(struct node));
	new_node->val = val;
	new_node->next = NULL;

	if(s->head == NULL){
		s->head = new_node;
		s->tail = new_node;
	}
	else{
		s->tail->next = new_node;
		s->tail = new_node;
	}

}


int pop(struct stack *s){

	struct node *t = s->head;
	int val = s->tail->val;

	if (s->head == s->tail){

		free(s->head);
		s->head = s->tail = NULL;
		return val;

	}

	while(t->next != s->tail){
		t = t->next;
	}
	free(s->tail);
	s->tail = t;
	s->tail->next = NULL;

	return val;
}

void print(struct stack *s){
	struct node *t = s->head;

	while(t != NULL){
		printf("%d\n", t->val );
		t = t->next;
	}
	printf("\n");
}


int main(){

	struct stack s;
	init(&s);
/*
	push(&s, 7);
	push(&s, 1);
	push(&s, 10);
	print(&s);
	printf("popped :%d\n", pop(&s) );
	//push(&s, 9);
	//push(&s, 23);

	print(&s);
	printf("popped: %d\n", pop(&s));
	print(&s);
	pop(&s);
	//print(&s);

*/

	printf("popped :%d\n", pop(&s) );

}
