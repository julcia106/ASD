#pragma once
#include "pch.h"
#include <iostream>

class List {
	struct Node {
		int data;
		Node* next;

		Node (int value) {
			data = value;
			next = nullptr;
		}
	};

public:
	List ();
	~List ();
	void show () const;
	void insert (int value);
	void insert_before (int value, int place);
	void remove (int place);
	void head ();
	void isempty ();
	List locate (int value);

private:
	Node* first;
	Node* last;
	Node* sentinel;
};