#include "mechanic.h"
#include<iostream>
#include<string>
using namespace std;
mechanic::mechanic() {
	person::namesetter("");
	person::agesetter(0);
	person::idsetter(0);
	appcounter = 0;
	maxsize = 24;
	maxappointments = new Appointment[maxsize];
	

}
mechanic::mechanic(int max, string namem, int agem, int idm) {
	person::namesetter(namem);
	person::agesetter(agem);
	person::idsetter(idm);
	appcounter = 0;
	maxsize = max;
	maxappointments = new Appointment[max];
}
void mechanic::setcounter(int count) {
	appcounter = count;
}
int mechanic::getcounter() {
	return appcounter;
}
void mechanic::setappoint(Appointment app) {
	maxappointments[appcounter++] = app;
}
Appointment mechanic::getappoint(int index) {
	return maxappointments[index];
}
bool mechanic::isAvailable(Appointment app ){
	for (int i = 0;i < maxsize;i++) {
		
		if ((app.hours == maxappointments[i].hours) && (app.mins == maxappointments[i].mins)) {
			return false;

		}
    }
    return true;
}