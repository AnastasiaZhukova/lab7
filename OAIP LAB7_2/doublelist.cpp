#include "doublelist.h"
void push(node*&end,int info)
{
	node *new_element = new node;
	end->next = new_element;
	new_element->info = info;
	new_element->previous = end;
	new_element->next =NULL;
	end = new_element;
}
node* peekpop(node*&begin)
{
	node *temp = begin;
	//begin->next->previous = NULL;
	begin = begin->next;
	begin->previous = NULL;
	return temp;
}