#include <iostream>
#include "ElementAmount.h"
#include "Element.h"

using namespace std;

// Constructor
ElementAmount::ElementAmount(string name, string symbol, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);
	
}

// Destructor
ElementAmount::~ElementAmount()
{
	if (_element != NULL)
		delete _element;
}

void ElementAmount::PrintElementAmount()
{
	_element->PrintElement();
	cout << "Atoms: " << _atomCount << endl;
}

/// <summary>
/// Add a new Element Amount
/// </summary>
/// <param name="name"></param>
/// <param name="symbol"></param>
/// <param name="atomicNumber"></param>
/// <param name="atomCount"></param>
void ElementAmount::AddElementAmount(string name, string symbol, int atomicNumber, int atomCount)
{
	_atomCount = atomCount;
	_element = new Element(name, symbol, atomicNumber);
}