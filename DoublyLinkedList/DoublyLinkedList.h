#pragma once
#include "pch.h"
#include <iostream>

class List {
public:
	struct Node {
		int data;
		Node* next;
		Node*prev;

		Node (int value) {
			data = value;
			next = nullptr;
			prev = nullptr;
		}
	};

	List ();
	~List ();
	bool isEmpty ();
	void insertFirst (int);
	void insertLast (int);
	Node* removeFirst ();
	Node* removeLast ();
	void showForward () const;
	void showBackward () const;

private:
	Node*left;
	Node*right;

};
