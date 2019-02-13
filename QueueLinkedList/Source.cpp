#include "pch.h"
#include "QueueLinkedList.h"
#include <iostream>
using namespace std;

int main () {
	Queue one;
	one.pushLast (1);
	one.pushLast (3);

	if ( one.isEmpty () )
		cout << "kolejka jest pusta" << endl;
	else
		cout << "cos juz znajduje sie w kolejce" << endl;

	one.show ();

	one.popFirst ();
	one.show ();

	one.pushLast (2);
	one.pushLast (3);
	one.pushLast (55);
	one.pushLast (312);
	one.show ();
	one.firstElement ();


}