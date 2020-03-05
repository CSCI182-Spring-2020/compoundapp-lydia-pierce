#include <iostream>
#include "Element.h"

using namespace std;

Element::Element(string name, string symbol, int atomicNumber)
{
	_name = name;
	_symbol = symbol;
	_atomicNumber = atomicNumber;
}

/// <summary>
/// Print the element info to the screen
/// </summary>
void Element::PrintElement()
{
	cout << _name << "\t" << _symbol << "\t" << _atomicNumber << endl;
}

Element::~Element()
{

}