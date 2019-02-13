#include "pch.h"
#include "SortedLinkedList.h"
#include <iostream>

using namespace std;

int main () {

	List one;

	one.insert (4);
	one.insert (23);
	one.insert (1);
	one.insert (54);
	one.insert (15);
	one.show ();

	List::Node* temp = one.remove (23);
	cout << "usuwam: " << temp->data << endl;
	delete temp;

	one.show ();

}