#pragma once

#include <string>
#include <vector>

class STR
{
	std::string name;
	std::string value;

public:
	STR(std::string id, std::string val)
		: name(std::move(id)), value(std::move(val)) {}

	STR() = default;

	[[nodiscard]] std::string getName() const {
		return this->name;
	}

	[[nodiscard]] std::string getValue() const {
		return this->value;
	}

	void setValue(const std::vector<char>& char_list) {
		for (const char i : char_list)
			this->value += i;
	}
};