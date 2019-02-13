#include "pch.h"
#include "SortedLinkedList.h"
#include <iostream>

using namespace std;

List::List () {
	Node*head = new Node (-1);
	left = head;

	sentinel = nullptr;
	last = nullptr;
}
List::~List () {

	cout << "destruktor: " << endl;
	Node* temp = nullptr;

	while ( left ) {
		temp = left;
		left = left->next;

		cout << "usuwam: " << temp->data << endl;
		delete temp;
	}
}
void List::show () const {

	Node* temp = left;

	cout << "Glowa " << " <-- ";
	while ( temp != nullptr ) {
		cout << temp->data << " <-- ";
		temp = temp->next;
	}
	cout << " ogon." << endl;
	cout << endl;
}
void List::insert (int value) {

	Node* val = new Node (value);
	Node* temp = left;
	Node * prev = nullptr;

	while ( value > temp->data && temp->next != nullptr ) {
		prev = temp;
		temp = temp->next;
	}
	if ( prev == nullptr )
		left = val;
	else
		prev->next = val;
	val->next = temp;
}

List::Node* List::remove (int value) {

	Node* temp = left;
	Node* nodetoDelete = nullptr;

	while ( temp->next->data != value && temp->next != nullptr )
		temp = temp->next;
	nodetoDelete = temp->next;
	temp->next = temp->next->next;

	return nodetoDelete;

}

bool List::isEmpty () {

	return left->next == nullptr;
}