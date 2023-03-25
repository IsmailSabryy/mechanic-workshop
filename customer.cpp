#include "customer.h"
#include <iostream>
#include <string>
#include "person.h"
using namespace std;
customer::customer() {
	person::namesetter("");
	person::agesetter(0);
	person::idsetter(0);
	Appointments.hours = 0;
	Appointments.mins = 0;
	mechanicid = 0;
}


customer::customer(string namec,int agec,int idc,int hour,int min){
	person::namesetter(namec);
	person::agesetter(agec);
	idsetter(idc);
	mechanicid = 0;
	Appointments.hours = hour;
	Appointments.mins = min;
}
void customer::setmechanicid(int mechanicids) {
	mechanicid = mechanicids;
}
void customer::setappointment(int hour, int min) {
	Appointments.hours = hour;
	Appointments.mins = min;
}
int customer::getmechanicid() {
	return mechanicid;
}
Appointment customer::getappointment(){
	return Appointments;

}
bool customer::operator<(const customer& b) {
	if (Appointments.hours < b.Appointments.hours) {
		return true;
	}
	else if ((Appointments.hours == b.Appointments.hours) && (Appointments.mins < b.Appointments.mins)) {
		return true;
	}
	else return false;

}
bool customer::operator>(const customer& b) {
	if (Appointments.hours > b.Appointments.hours) {
		return true;
	}
	else if ((Appointments.hours == b.Appointments.hours) && (Appointments.mins > b.Appointments.mins)) {
		return true;
	}
	else return false;
}
		
bool customer:: operator==(const customer& b) {
	
	if ((Appointments.hours == b.Appointments.hours) && (Appointments.mins == b.Appointments.mins))
		return true;
	else return false;
}