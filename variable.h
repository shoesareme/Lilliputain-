#pragma once

#include <string>
#include <utility>

class Variable
{
	std::string name;
	int value;

public:
	Variable() = default;
	Variable(std::string id, int value) : name(std::move(id)), value(value) {}
	[[nodiscard]] std::string getName() const;
	[[nodiscard]] int getValue() const;
	void setValue(int val);
};

