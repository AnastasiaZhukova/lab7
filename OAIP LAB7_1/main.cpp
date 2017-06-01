#include "queue.h"
#include "lib.h"
int main()
{
	//test();
	node *begin, *end; 
	int n = 5;
	cout << "Input n: "; cin >> n;
	form_queue(begin, end, n);
	del_negative(begin);
	cout << endl;
	queuelist(begin);


	return 0;
}