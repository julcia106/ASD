#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

int main () {

	List one;
	one.insertLast (1);
	one.insertLast (2);
	one.insertLast (3);
	one.insertFirst (76);
	one.insertLast (8);
	one.showForward ();
	//one.showBackward ();

	//List::Node* temp=	one.removeLast ();
	//cout << "usuwam w maine: " << temp->data << endl;
	//delete temp;

	//List::Node* temp1 = one.removeFirst ();
	//cout << "usuwam w maine: " << temp1->data << endl;
	//delete temp1;

	//List::Node* temp2 = one.removeFirst ();
	//cout << "usuwam w maine: " << temp2->data << endl;
	//delete temp2;



	//one.showForward ();


}