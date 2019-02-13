#include "pch.h"
#include "DynamicArrayList.h"

using namespace std;

List::List () {
	currentSize = 0;
};

void List::remove (int n) {
	int tabIndex = n - 1;

	for ( int i = tabIndex; i <= currentSize - 1; i++ )
		arr [i] = arr [i + 1];
	currentSize--;
}

void List::insert (int n, const int& p) {
	int tabIndex = n - 1;

	for ( int i = currentSize; i >= tabIndex; i-- )
		arr [i] = arr [i - 1];
	arr [tabIndex] = p;
	currentSize++;
}

void List::show () const {
	for ( int i = 0; i < currentSize; i++ )
		cout << " wyswietlam tablice: " << arr [i] << endl;
}

int List::size () {
	return currentSize;
}

bool List::isEmpty () {

	if ( currentSize == 0 )
		return true;
	else
		return false;
}

bool List::isFull () {
	if ( currentSize == MaxSize )
		return true;
	else
		return false;
}