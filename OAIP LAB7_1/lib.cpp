#include "lib.h"
#include <stdlib.h>
#include <time.h>
void test()
{
		node *begin, *end;
		node *element = new node;
		element->next = NULL;
		element->info = 0;
		begin = element;
		end = element;
		cout << "PUSH" << endl;
		for (int i = 1; i < 10; i++)
		{
			push(end, i);
		}
		cout << "IS EMPTY" << (isEmpty(begin, end) ? "yes" : "no") << endl;
		cout << "POP" << endl;
		for (int i = 0; i < 5; i++)
		{
			pop(begin);
		}
		cout << "IS EMPTY" << (isEmpty(begin, end) ? "yes" : "no") << endl;
		cout << "PEEK:" << endl;
		int info = peek(begin);
		cout << info << endl;
		cout << "IS EMPTY" << (isEmpty(begin, end) ? " yes" : " no") << endl;
		cout << "LIST:" << endl; queuelist(begin);
		cout << "IS EMPTY" << (isEmpty(begin, end) ? " yes" : " no") << endl;
		cout << endl;
}
void form_queue(node*&begin,node*&end,int n)
{
	srand((unsigned)(time(NULL)));
	int info; 

	node *element = new node;
	element->next = NULL;
	info = rand() % 101 - 50;
	element->info =info;

	begin = element;
	end = element;

	cout << info << " ";
	for (int i = 1; i < n; i++)
	{
		info = rand() % 101 - 50;
		push(end, info);
		cout << info << " ";
	}

}
void del_negative(node*&begin)
{
	while (begin->info < 0) //удалить все отрицательные элементы из начала
	{
		pop(begin);
		//begin = begin->next;
	}
	node *previous = begin; 
	node *current = begin->next;
	node *temp;
	while (current != NULL)
	{
		if (current->info < 0) //в предыдущем меняем адрес next на адрес next->next
		{
			temp = current;  
			previous->next = (current->next); 
			current = previous->next; //теперь текущим элементом стал next->next
			delete temp; //удаляем отрицательный элемент
		}
		else
		{
			temp = current; 
			previous = temp; //текущий становится предыдущим
			current = previous->next;
		
		}
	}

}