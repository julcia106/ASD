#pragma once
#include "pch.h"
#include <iostream>

class List {
private:
	static const int MaxSize = 5;
	int* arr = new int [MaxSize];
	int currentSize;
public:
	List ();
	void insert (int, const int&);
	void remove (int);
	void show () const;
	int size ();
	bool isEmpty ();
	bool isFull ();
};