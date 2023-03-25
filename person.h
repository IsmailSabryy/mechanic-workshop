#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Appointment {
	int hours=0;
	int mins=0;
};
class person
{ private:
	string name;
	int id;
	int age;
public:
	person();
	person(string,int,int);
	void namesetter(string);
	void idsetter(int);
	void agesetter(int);
	string namegetter();
	int idgetter();
	int agegetter();
	void  printinfo();
	
	
};

