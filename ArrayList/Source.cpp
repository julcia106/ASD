#include "pch.h"
#include "ArrayList.h"
#include <iostream>

using namespace std;

int main () {
	int returnTop;

	List one;
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
	one.show ();
	returnTop = one.size ();
	cout << "zwracam wielkosc: " << returnTop << endl;


}