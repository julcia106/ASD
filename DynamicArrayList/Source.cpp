#include "pch.h"
#include "DynamicArrayList.h"
#include <iostream>

using namespace std;

int main () {
	int returnTop;

	List one = List ();
	one.insert (1, 55);
	one.insert (2, 2);
	one.insert (3, 123);
	one.insert (4, 65);
	one.insert (5, 66);
	one.show ();

	returnTop = one.size ();
	cout << "zwracam wielkosc: " << returnTop << endl;

	one.remove (1);
	returnTop = one.size ();
	cout << "zwracam wielkosc: " << returnTop << endl;

	one.remove (2);
	one.remove (3);
	one.show ();
	returnTop = one.size ();
	cout << "zwracam wielkosc: " << returnTop << endl;

	one.insert (3, 3);
	one.insert (4, 4);
	one.insert (5, 5);
	one.insert (6, 6);
	one.insert (7, 7);
	one.show ();
	returnTop = one.size ();
	cout << "zwracam wielkosc: " << returnTop << endl;

	if ( one.isEmpty () )
		cout << "tablica jest pusta" << endl;
	else
		cout << " tablica nie jest pusta" << endl;

	if ( one.isFull () )
		cout << "tablica jest pelna" << endl;
	else
		cout << "tablica nie jest pelna" << endl;

	return 0;
}