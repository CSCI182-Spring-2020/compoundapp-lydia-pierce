#pragma once
#include <iostream>
#include "Element.h"

using namespace std;

class ElementAmount
{
private:
	Element* _element;
	int _atomCount = 0;
public:
	ElementAmount() {};
	ElementAmount(string name, string symbol, int atomicNumber, int atomCount);
	~ElementAmount();
	void PrintElementAmount();

	void AddElementAmount(string name, string symbol, int atomicNumber, int atomCount);
};

