#include "library.h"
int main()
{
	node *begin;
	node *end;
	int n;
	cout << "Input num of nodes: "; cin >> n;
	form_doublelist(begin, end, n);
	cout << endl; output(begin); cout << endl;
	cout << "Input num of rounds: "; cin >> n;
	round(begin, end, n);
	cout << endl; output(begin); cout << endl;


	return 0;
}