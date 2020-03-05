#pragma once
#include <iostream>
#include "ElementAmount.h"

using namespace std;

class Compound
{
private:
	ElementAmount* _elementAmount = NULL;
	int index = 0;
	int maxElements = 0;

public:
	Compound(int nNumberElements);
	~Compound();

	void AddElement(string name, string symbol, int atomicWeight, int atomCount);
	void Print();

	// Copy constructor
	Compound(const Compound&);
	// Assignment operator
	Compound& operator=(const Compound&);
};

