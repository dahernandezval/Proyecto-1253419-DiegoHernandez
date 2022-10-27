#include "nodo.h";
#pragma once
class lista
{
public:
	nodo* start;
	nodo* end;
	int count;

	lista();
	void InsertAtStart(int value);
	void InsertAtEnd(int value);
	void InsertAtPosition(int value, int position);
	nodo* ExtractAtStart();
	nodo* ExtractAtEnd();
	nodo* ExtractAtPosition(int position);
	nodo* GetNode(int value);
	int GetValue(int position);
	bool isEmpty();
	~lista() {};
};
