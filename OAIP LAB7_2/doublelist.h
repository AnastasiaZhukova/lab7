#ifndef doublelist
#define doublelist
#include <iostream>
using namespace std;
struct node {
	node *previous;
	node *next;
	int info;
};
void push(node*&,int); //�������� ������� � �����
node* peekpop(node*&); //������� ������ ������� � ��������� ���
#endif