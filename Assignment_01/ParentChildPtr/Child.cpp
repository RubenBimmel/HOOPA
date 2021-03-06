#include "Child.h"

Child::Child(string name) {
	this->name = name;
}

Child::Child(const Child& other) {
	this->name = other.name;
}

Child::~Child() {
	cout << "Destroyed child: " << this->name << endl;
}

string Child::getName() {
	return name;
}

ostream& operator<<(ostream& os, const Child& child) {
	os << "name: " << child.name;
	return os;
}