#ifndef queue
#define queue
#include <iostream>
using namespace std;
struct node {
	node *next;
	int info;
};
bool isEmpty(node*&,node*&);
void push(node*&, int);
void pop(node*&);
int peek(node*&);
void queuelist(node*&);
#endif