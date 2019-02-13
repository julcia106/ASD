#pragma once
#include "pch.h"
#include <iostream>

class Queue {
	struct Node {
		int data;
		Node* next;

		Node (int value) {
			data = value;
			next = nullptr;
		}
	};
public:
	Queue () { head = nullptr; tail = nullptr; };
	bool isEmpty ();
	void firstElement ();
	void pushLast (int value);
	void popFirst ();
	void show ();
private:
	Node* head;
	Node* tail;
};
