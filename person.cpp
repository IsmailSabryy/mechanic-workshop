#include "person.h"
#include<iostream>
#include<string>
using namespace std;

person::person() {
	name = "";
	id = 0;
	age = 0;
}
person::person(string NAME, int ID, int AGE) {
	name = NAME;
	id = ID;
	age = AGE;
}
void person:: namesetter(string NAME) {
	name = NAME;
}
void person:: idsetter(int ID) {
	id = ID;
}
void person::agesetter(int AGE) {
	age = AGE;
}
string person:: namegetter() {
	return name;

}
int person:: idgetter() {
	return id;

}
int person::agegetter() {
	return age;

}
void  person::printinfo() {
	cout << "Name:" << name << endl << "ID:" << id << endl << "Age:" << age << endl;
}