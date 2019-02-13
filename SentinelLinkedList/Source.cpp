#include "pch.h"
#include "SentinelLinkedList.h"
#include <iostream>
using namespace std;

int main () {

	List one;
	one.insert (12);
	one.insert (2);
	one.insert (3);
	one.show ();

	cout << endl;
	List::Node* temp = one.remove (3);
	cout << "usunieta wartosc: " << temp->data;
	delete temp;
	cout << endl;

	if ( one.isEmpty () )
		cout << "lista nie ma elementow" << endl;
	else
		cout << "lista ma elementy" << endl;

	one.show ();

}