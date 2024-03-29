#include "header.h"
#include "list.h"

/*********************************************************************
 * ** Function: init(struct list *n)
 * ** Description: the init function that initialize the head and tail
 * ** Parameters: struct list *n
 * ** Pre-Conditions: struct list pointer must be first created  along with tis head and tail pointer
 * ** Post-Conditions: set the head and tail pointers to NULL
 * ** Return:n/a
*********************************************************************/
void init(struct list *n){
	
	n->head = NULL;
	n->tail = NULL;

}



/*********************************************************************
 * ** Function: print()
 * ** Description: the print function that prints the value 
 * ** Parameters:struct list *n
 * ** Pre-Conditions: struct list pointer must be first created along with the creation of nodes and its values
 * ** Post-Conditions: prints out the value inside a node
 * ** Return:n/a
*********************************************************************/
void print(struct list n){
	struct node *t = n.head;

	while(t != NULL){
		printf("%d\n", t->val);
		t = t->next;
	}

	printf("\n");

}


/*********************************************************************
 * ** Function: push_back()
 * ** Description: pushing the pointer towards the back of the list with the creation of new nodes
 * ** Parameters:struct list *n, int num
 * ** Pre-Conditions: struct list pointer must be first created along with the creation of nodes and its values
 * ** Post-Conditions: pushing the pointer back to a new node 
 * ** Return:n/a
*********************************************************************/
void push_back(struct list *n, int num){

	struct node *new_node = malloc(sizeof(struct node));
	new_node->val = num;
	new_node->next = NULL;

	if(n->head == NULL){
		n->head = new_node;
		n->tail = new_node;
	}
	else{
		n->tail->next = new_node;
		n->tail = new_node;
	}

}


/*********************************************************************
 * ** Function: size()
 * ** Description: the size function that returns the size of the node
 * ** Parameters:struct list n
 * ** Pre-Conditions: struct list pointer must be first created along with the creation of nodes and create a counting varibale to count the number of nodes
 * ** Post-Conditions: counts how many "next" before next hits NULL
 * ** Return: counting
*********************************************************************/
int size(struct list n){
	int counting = 1;
	struct node *t = n.head;

	while(t->next != NULL){
		t->next;
		counting = counting + 1;

	}
	return counting;
}



/*********************************************************************
 * ** Function: push_front()
 * ** Description: pushing the pointer towards the front of the list with the creation of new node
 * ** Parameters:struct list *n, int num
 * ** Pre-Conditions: struct list pointer must be first created along with the creation of nodes and its values
 * ** Post-Conditions: pushing the pointer infront of the header to a new node 
 * ** Return:n/a
*********************************************************************/
void push_front(struct list *n, int num){

	struct node *front_node = malloc(sizeof(struct node));
	front_node->val = num;
	front_node->next = NULL;

	if(n->head == NULL){
		n->head = front_node;
		n->tail = front_node;
	}
	else{
		front_node->next = n->head;
		n->head = front_node;
	}

}



/*********************************************************************
 * ** Function: front(struct list n)
 * ** Description: prints out the head value
 * ** Parameters:struct list n
 * ** Pre-Conditions: head node must exist with its initalized value
 * ** Post-Conditions: prints the value of the first node
 * ** Return:n.head->val
*********************************************************************/
int front(struct list n){
	return n.head->val;
}


/*********************************************************************
 * ** Function: back(struct list b)
 * ** Description: prints out the tail value
 * ** Parameters:struct list b
 * ** Pre-Conditions: tail node must exist with its initalized value
 * ** Post-Conditions: prints the value of the last node
 * ** Return:b.tail->val
*********************************************************************/
int back(struct list b){
	return b.tail->val;
}


/*********************************************************************
 * ** Function: pop_back(struct list *p)
 * ** Description: remove the last node and set the tail to the node before that
 * ** Parameters:struct list *p
 * ** Pre-Conditions: head node and tail node must exist with its initalized value
 * ** Post-Conditions: set the tail node to NULL and move the tail pointer pointing to the node before the last one using a loop and prints out the value of the last node
 * ** Return:num
*********************************************************************/
int pop_back(struct list *p){
	struct node *h = p->head;

	int num = 0;

 	if(p->head == NULL){
		return num;
	}
	
	num = p->tail->val;

	if(p->head == p->tail){
		free(p->head);
		p->head = NULL;
		p->tail = NULL;
		return num;
	}

	while(h->next != p->tail){
		h = h->next;
	}
	free(p->tail);
	p->tail = h;
	p->tail->next = NULL;
	return num;
}


/*********************************************************************
 * ** Function: remove_front(struct list *front)
 * ** Description: remove the first node and set head to the next one
 * ** Parameters:struct list *front
 * ** Pre-Conditions: head node and tail node must exist with its initalized value
 * ** Post-Conditions: remove the first node and move the head to the next node and prints the value of the deleted node
 * ** Return:num
*********************************************************************/
int remove_front(struct list *front){
	struct node *h = front->head;
	int num = 0; 

	if(front->head == NULL){
		return num;
	}
	num = front->head->val;


	if(front->head == front->tail){
		free(front->head);
		front->head = NULL;
		front->tail = NULL;
		return num;
	}

	front->head = h->next;
	free(h);
	return num;

}


/*********************************************************************
 * ** Function: delete(struct list *s)
 * ** Description: delete all the nodes
 * ** Parameters:struct list *s
 * ** Pre-Conditions: head node and tail node must exist with its initalized value and the node's next must linked with other's address
 * ** Post-Conditions: deletes all the nodes that linked together
 * ** Return:n/a
*********************************************************************/
void delete(struct list *s){
	struct node *t = s->head;

	while(t->next){
		t = s->head->next;
		free(s->head);
		s->head = t;
	}
}


/*********************************************************************
 * ** Function: empty(struct list h)
 * ** Description: check if the nodes are empty
 * ** Parameters:struct list h
 * ** Pre-Conditions: head node and tail node must exist with its initalized value
 * ** Post-Conditions: Check if any nodes exist in the first place
 * ** Return:1 if it is empty and 0 if it's not
*********************************************************************/
int empty(struct list h){

	if(h.head == NULL && h.tail==NULL){
		return 1;
	}
	else{
		return 0;
	}
	
}



//                   
//                   
//          