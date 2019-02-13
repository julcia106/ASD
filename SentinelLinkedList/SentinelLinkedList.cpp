#include "pch.h"
#include "SentinelLinkedList.h"
#include <iostream>

using namespace std;

List::List () {
	first = nullptr;
	last = nullptr;
};


List::~List () {

}
void List::insert (int value) {

	Node* temp = new Node (value);

	if ( first == nullptr )
		first = temp;

	else {
		last->next = temp;
	}
	last = temp;
}

List::Node* List::remove (int value) {

	Node* sentinel = new Node (value);
	last->next = sentinel;
	sentinel->next = nullptr;

	Node* temp = nullptr;
	Node* prev = nullptr;
	Node* curr = first;

	if ( first->data == value ) {
		temp = first;
		first = first->next;
	}
	else {

		while ( curr->data != value ) {
			prev = curr;
			curr = curr->next;
		}

		if ( curr == sentinel ) {
			cout << "wartownik";
		}
		else {
			cout << "Jestem w else" << endl;
			cout << " wartosc w else: " << curr->data << endl;
			temp = curr;
			prev->next = curr->next;
		}

		if ( curr == last ) {
			last = prev;
		}
	}
	last->next = nullptr;
	delete sentinel;
	return temp;

}

void List::show () {
	Node* temp = first;

	cout << "glowa ";
	while ( temp != nullptr ) {
		cout << temp->data << " <-- ";
		temp = temp->next;
	}
	cout << " ogon." << endl;

}

bool List::isEmpty () {
	return first == nullptr;
}
