#include "variable.h"

std::string Variable::getName() const
{
	return this->name;
}

int Variable::getValue() const
{
	return this->value;
}

void Variable::setValue(int val)
{
	this->value = val;
}