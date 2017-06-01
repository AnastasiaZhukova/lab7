#ifndef doublelist
#define doublelist
#include <iostream>
using namespace std;
struct node {
	node *previous;
	node *next;
	int info;
};
void push(node*&,int); //вставить элемент в конец
node* peekpop(node*&); //достать первый элемент и сохранить его
#endif