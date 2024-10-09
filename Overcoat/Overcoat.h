#pragma once
#include <cstdint>



class Overcoat{
	uint8_t type_of_clothing;
	int cost;
public:
	Overcoat(int type, int cost);
	Overcoat();
	bool const operator==(const Overcoat& obj);

	Overcoat& operator=(const Overcoat& obj);
	bool operator>(const Overcoat& obj);
	bool operator<(const Overcoat& obj);
	int getter_cost();
	int getter_type();
};

