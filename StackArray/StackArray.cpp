#include "pch.h"
#include "StackArray.h"

using namespace std;

StackArray::StackArray () {
	top = 0;
}

int StackArray::topStack () {
	return top;
}
int StackArray::pop () {
	int temp;

	temp = arr [top--];

	return temp;
}

void StackArray::push (int n) {
	arr [top++] = n;
}

void StackArray::create () {
	top = 0;
}

bool StackArray::isEmpty () {

	if ( top == 0 )
		return true;
	else
		return false;
}

bool StackArray::isFull () {
	if ( top == MaxSize )
		return true;
	else
		return false;
}