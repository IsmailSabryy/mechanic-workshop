#pragma once
#include "person.h"
class mechanic:public person
{ private:
	int appcounter=0;
	Appointment *maxappointments;
	int maxsize;

public:
	mechanic();
	mechanic(int,string,int,int);
	void setcounter(int);
	int getcounter();
	void  setappoint(Appointment);
	Appointment getappoint(int);
	bool isAvailable(Appointment);

};

