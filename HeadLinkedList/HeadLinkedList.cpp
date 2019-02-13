#include "pch.h"
#include "HeadLinkedList.h"
#include <iostream>

List::List () {
	Node* head = new Node (-1);
	first = head;

	last = nullptr;
	sentinel = nullptr;
}

void List::isempty () {
	if ( first->next == nullptr )
		std::cout << "pusta" << std::endl;
}

List::~List () {
	std::cout << "destruktor: " << std::endl;
	Node* temp = nullptr;

	while ( first ) {
		temp = first;
		first = first->next;

		std::cout << "usuwam " << temp->data << std::endl;
		delete temp;
	}
}

void List::insert (int value) {
	Node* temp = new Node (value);
	Node* p = first;

	while ( p->next != nullptr )
		p = p->next;
	p->next = temp;
	last = temp;

}
void List::insert_before (int value, int place) {
	Node* temp = new Node (value);

	Node* p = first;
	while ( p->next != nullptr && p->next->data != place )
		p = p->next;

	temp->next = p->next;
	p->next = temp;
}

void List::remove (int place) {
	Node* temp;
	temp = first;

	while ( temp->next != nullptr && temp->next->data != place )
		temp = temp->next;
	temp->next = temp->next->next;

}

void List::show () const {
	Node* temp = first->next;

	std::cout << "head--> ";
	while ( temp != nullptr ) {
		std::cout << temp->data << " --> ";
		temp = temp->next;
	}
	std::cout << " NULL " << std::endl;

}









//lista  z glowa i zobacz jak siê zmieni dzieki temu metoda remove, powinna byc lepsza
//
// lista dwukierunkowa 
// reverse show i show czyli show które jedzie od koñca. 
//insert after(after np.5 i insert before
//
//dzieki glowie nie mam prev