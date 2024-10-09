#include <iostream>
#include <format>
#include "Overcoat.h"
using namespace std;

//conditional symbols
//nothing to affect
uint8_t HOUSEHOLD = 1;
uint8_t SPORTS = 2;
uint8_t INDUSTRIAL = 3;
uint8_t ENTERTAINMENT = 4;
uint8_t UNIFORMS = 5;
uint8_t COAT = 6;


const char* transform_bool_to_string(Overcoat& obj1, const Overcoat& obj2) {
	if (obj1 == obj2) {
		return "true";
	}
	return "false";
}


int main() {
	Overcoat obj1(1, 1200);
	Overcoat obj2(1, 1300);
	Overcoat obj3(3, 1100);
	Overcoat obj4(2, 1200);
	Overcoat obj5(1, 1200);
	cout << "if it objects isn't the same type will be always false" << endl;
	cout << format("obj1({}) < obj3({}): ", obj1.getter_cost(), obj3.getter_cost()) << ((obj1 < obj3) ? "true" : "false") << endl;
	cout << format("obj1({}) > obj3({}): ", obj1.getter_cost(), obj3.getter_cost()) << ((obj1 > obj3) ? "true" : "false") << endl;
	cout << "in opposite situation. When type of the same in two objects" << endl;
	cout << format("obj1({}) < obj2({}): ", obj1.getter_cost(), obj2.getter_cost()) << ((obj1 < obj2) ? "true" : "false") << endl;
	cout << format("obj1({}) > obj2({}): ", obj1.getter_cost(), obj2.getter_cost()) << ((obj1 > obj2) ? "true" : "false") << endl;
	cout << "\noperator== work when have each value is the same\n";
	cout << format("obj1 == obj4: {}\ncost obj1 == obj4: true\t{} == {} is true.\nBut type isn't the same:\n{} == {}: false\n So in result will be false",  transform_bool_to_string(obj1, obj4), obj1.getter_cost(), obj4.getter_cost(), obj1.getter_type(), obj4.getter_type());
	cout << format("\n\nobj1==obj5: {}\ncost obj1 == obj5: true\t {} == {} is true\ntype {} == {}: true", transform_bool_to_string(obj1, obj5), obj1.getter_cost(), obj5.getter_cost(), obj1.getter_type(), obj5.getter_type());
	return 0;
}