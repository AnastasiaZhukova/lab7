#include "queue.h"
bool isEmpty(node*&begin,node*&end)
{
	if (begin==NULL) return true;
	else return false;
}
void push(node*&end, int info)
{
	node *element = new node;
	element->next = NULL;
	element->info = info;
	end->next = element; //����� ��������� �� ����.�������
	end = element;
}
void pop(node*&begin)
{
	//int info = begin->info;
	node *del = begin; 
	begin = begin->next; //������ ����� ��������� �� ����. ������� 
	//cout << "POPED INFO:" << info << " ";
	delete del;
}
int peek(node*&next)
{
	int info = next->info;
	return info;
}
void queuelist(node*&node)
{
	int info;
	while (node != NULL)
	{
		info = peek(node); cout << info << " ";
		pop(node);
	}
	cout << endl;

}