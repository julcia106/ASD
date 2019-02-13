#include "pch.h"
#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

List::List () {

	left = nullptr;
	right = nullptr;
}
List::~List () {

	Node* temp = nullptr;

	cout << "Destruktor." << endl;
	while ( temp ) {
		temp = left;
		left = left->next;

		cout << "usuwam: " << temp->data << endl;
		delete temp;
	}
}
bool List::isEmpty () {

	return left == nullptr;
}

void List::insertFirst (int value) {

	Node* temp = new Node (value);

	if ( left == nullptr )
		right = temp;
	else
		left->prev = temp;
	temp->next = left;
	left = temp;
}

void List::insertLast (int value) {

	Node*temp = new Node (value);

	if ( left == nullptr )
		left = temp;
	else
		right->next = temp;
	temp->next = nullptr;
	right = temp;

	/*else
		right->next->prev = nullptr;
	right = right->next;
	return temp;--> z ksi¹zki ale czy mój jest Ÿle?*/
}

List::Node* List::removeFirst () {

	Node* temp = left;

	if ( left->next == nullptr )
		right = nullptr;
	else
		left->next->prev = nullptr;
	left = left->next;
	return temp;
}

List::Node* List::removeLast () {
	Node* temp = right;

	if ( left->next == nullptr )
		right = nullptr;
	else
		right->prev->next = nullptr;
	right = right->prev;
	return temp;
}

void List::showForward () const {

	Node* temp = left;

	cout << "Start: ";
	while ( temp != nullptr ) {
		cout << temp->data << " : ";
		temp = temp->next;
	}
	cout << " end.";
	cout << endl;
}

void List::showBackward () const {


	Node* temp = right;

	cout << "start: ";
	while ( temp != nullptr ) {
		cout << temp->data << " : ";
		temp = temp->prev;
	}
	cout << "end" << endl;
	cout << endl;


}