#include "library.h"
#include <stdlib.h>
#include <time.h>
void form_doublelist(node*&begin, node*&end, int n)
{
	srand((unsigned)(time(NULL)));
	int info;

	node *element = new node;
	element->previous = NULL;
	element->next = NULL;
	info = rand() % 101 - 50;
	element->info = info;
	//cout << info<<" ";

	begin = element; 
	end = element;

	for (int i = 1; i < n; i++)
	{
		info = rand() % 101 - 50;
		push(end, info);
		//cout << info << " ";
	}

}
void round(node*&begin, node*&end, int num)
{
	node *temp;
	for (int i = 0; i < num; i++)
	{
		temp = peekpop(begin); //достать первый элемент
		push(end,temp->info); //вставить его в конец
	}
}
void output(node*&begin)
{
	node *temp = begin;
	while (temp != 0)
	{
		cout << temp->info << " ";
		temp = temp->next;

	}
}