#include "pch.h"
#include "HeadLinkedList.h"
#include <iostream>

using namespace std;

int main () {
	List one;

	cout << endl;
	one.insert (1);
	one.insert (32);
	one.insert (44);
	one.insert (23);

	one.show ();

	one.insert_before (5, 32);
	one.show ();
	one.remove (5);
	one.show ();
	//two.insert_after(2,1);
	//two.show();
	//two.insert_after(21,2);
	//two.insert_after(3,21);
	//two.insert_after(44, 3);


	//one.locate(2);


	//one.show();

	//one.remove(3);

	//one.show();
	//
}