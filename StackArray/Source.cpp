#pragma once
#include "pch.h"
#include "StackArray.h"
#include <iostream>

using namespace std;

int main () {
	int returnTop;

	StackArray one;
	one.create ();
	one.push (2);
	returnTop = one.topStack ();
	cout << "zwracam top: " << returnTop << endl;

	one.push (3);
	one.push (11);
	returnTop = one.topStack ();
	cout << "zwracam top: " << returnTop << endl;

	one.pop ();
	returnTop = one.topStack ();
	cout << "zwracam top: " << returnTop << endl;

	if ( one.isFull () )
		cout << "stos jest pelny!" << endl;
	else
		cout << "jeszcze jest miejsce " << endl;

	if ( one.isEmpty () )
		cout << "stos jest pusty" << endl;
	else
		cout << "cos jest w srodku" << endl;

	one.push (8);
	one.push (12);
	one.push (9);
	returnTop = one.topStack ();
	cout << "zwracam top: " << returnTop << endl;

	if ( one.isFull () )
		cout << "stos jest pelny!" << endl;
	else
		cout << "jeszcze jest miejsce " << endl;
}