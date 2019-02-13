#include "pch.h"
#include "QueueLinkedList.h"
#include <iostream>

using namespace std;


bool Queue::isEmpty () {
	return head == nullptr;
}
void Queue::firstElement () {
	cout << "pierwszy element:" << head->data;
}
void Queue::pushLast (int value) {
	Node* temp = new Node (value);

	if ( head == nullptr ) {
		head = temp;
	}
	else {
		tail->next = temp;
	}

	tail = temp;
}
void Queue::popFirst () {
	Node* temp = head;

	if ( head->next == nullptr )
		tail = nullptr;
	else
		head = head->next;
}
void Queue::show () {
	Node* temp = head;

	cout << "poczatek--> ";
	while ( temp != nullptr ) {
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << " koniec." << endl;

}