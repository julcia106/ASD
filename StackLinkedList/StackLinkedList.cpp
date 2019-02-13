#include "pch.h"
#include "StackLinkedList.h"
#include <iostream>

Stack::~Stack () {
	using namespace std;

	cout << "Destruktor Stack" << endl;
	Node* temp;
	while ( head ) {
		temp = head;
		head = head->next;

		cout << "Usuwam " << temp->key << endl;
		delete temp;
	}
}

void Stack::add (int value) {
	Node* newNode = new Node (value);

	//TODO 
	/*if ( top == nullptr ) {
		top = temp;
	}*/

	newNode->next = head;
	head = newNode;

}

int Stack::remove () {
	Node* toDelete = head;
	int toDeleteKey = toDelete->key;
	//TODO 	if ( temp == nullptr )

	head = head->next;
	delete toDelete;

	return toDeleteKey;
}

void Stack::show () const {
	using namespace std;

	Node* temp = head;
	while ( temp ) {
		cout << temp->key << " ---> ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}