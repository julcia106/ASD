#pragma once
#include "pch.h"
#include <iostream>

class StackArray {
private:
	static const int MaxSize = 5;
	int arr [MaxSize];
	int top;
public:
	StackArray ();

	int topStack ();
	int pop ();
	void push (int);
	void create ();
	bool isEmpty ();
	bool isFull ();
};