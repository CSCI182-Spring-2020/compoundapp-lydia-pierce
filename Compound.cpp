#include <iostream>
#include "Compound.h"
#include "ElementAmount.h"

using namespace std;

/// <summary>
/// Constructor
/// </summary>
/// <param name="numberElements"></param>
Compound::Compound(int nNumberElements)
{
	maxElements = nNumberElements;
	_elementAmount = new ElementAmount[nNumberElements];
}

/// <summary>
/// Destructor for Compound Class
/// </summary>
Compound::~Compound()
{
	if (_elementAmount != NULL)
		delete [] _elementAmount;
}

/// <summary>
/// Add a new element to the Compound
/// </summary>
/// <param name="name"></param>
/// <param name="symbol"></param>
/// <param name="atomicWeight"></param>
void Compound::AddElement(string name, string symbol, int atomicWeight, int atomCount)
{
	if (index < maxElements)
	{
		_elementAmount[index].AddElementAmount(name, symbol, atomicWeight, atomCount);
		index++;
	}
}

void Compound::Print()
{
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i].PrintElementAmount();
	}
}

// Copy constructor
Compound::Compound(const Compound& oldCompound)
{
	_elementAmount = new ElementAmount[maxElements];

	for (int j = 0; j < maxElements; j++)
		_elementAmount[j] = oldCompound._elementAmount[j];
}

// Assignment operator
Compound& Compound::operator=(const Compound& oldCompound)
{
	_elementAmount = new ElementAmount[maxElements];

	for (int j = 0; j < maxElements; j++)
		_elementAmount[j] = oldCompound._elementAmount[j];
	return *this;
}