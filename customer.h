#pragma once
#include "person.h"

class customer :public person
{private:
	int mechanicid;
	Appointment Appointments;
public:
	customer();
	customer(string,int,int,int,int);
	void setmechanicid(int);
	void setappointment(int,int);
	int getmechanicid();
	Appointment getappointment();
	bool operator<( const customer&);
	bool operator>(const customer&);
	bool operator==(const customer&);
};

