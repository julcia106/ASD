#pragma once
#include "pch.h"
#include <iostream>

class List {

public:
	struct Node {
		int data;
		Node* next;

		Node (int value) {
			data = value;
			next = nullptr;
		}
	};

	List ();
	~List ();
	void show () const;
	void insert (int);
	Node* remove (int);
	bool isEmpty ();
private:
	Node*left;
	Node*last;
	Node*sentinel;
};