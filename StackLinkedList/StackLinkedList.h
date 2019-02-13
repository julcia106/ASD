#pragma once
class Stack {
	struct Node {
		int key;
		Node* next;

		Node (int value) {
			key = value;
			next = nullptr;
		}
	};

public:
	Stack () { head = nullptr; }
	~Stack ();
	void add (int value);
	int remove ();
	void show () const;

private:
	Node* head;
};
