#pragma once
#include "pch.h"
#include <iostream>

using namespace std;

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
	void insert (int value);
	Node* remove (int value);
	void show ();
	bool isEmpty ();

private:
	Node* first;
	Node* last;
};