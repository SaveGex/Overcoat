#include "Overcoat.h"



Overcoat::Overcoat(int type, int cost) : type_of_clothing(type), cost(cost) {}


Overcoat::Overcoat() : Overcoat::Overcoat(0, 0){}


bool const Overcoat::operator==(const Overcoat& obj){
	if (this->type_of_clothing == obj.type_of_clothing && this->cost == obj.cost) {
		return true;
	}
	else {
		return false;
	}
}

Overcoat& Overcoat::operator=(const Overcoat& obj){
	if (this == &obj) {
		return *this;
	}

	this->type_of_clothing = obj.type_of_clothing;
	this->cost = obj.cost;

}

bool Overcoat::operator>(const Overcoat& obj){

	if (this->type_of_clothing != obj.type_of_clothing) {
		return false;
	}
	if (this->cost > obj.cost) {
		return true;
	}
	return false;
}

bool Overcoat::operator<(const Overcoat& obj) {

	if (this->type_of_clothing != obj.type_of_clothing) {
		return false;
	}
	if (this->cost < obj.cost) {
		return true;
	}
	return false;
}

int Overcoat::getter_cost(){
	return this->cost;
}

int Overcoat::getter_type(){
	return this->type_of_clothing;
}
