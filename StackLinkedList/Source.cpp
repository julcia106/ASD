#include"pch.h"
#include"StackLinkedList.h"
#include<iostream>

using namespace std;

int main () {
	{
		Stack stack;

		stack.add (1);
		stack.add (2);
		stack.add (3);

		stack.show ();

		cout << stack.remove () << endl;

		stack.show ();

		stack.add (5);
		stack.show ();
	}


}