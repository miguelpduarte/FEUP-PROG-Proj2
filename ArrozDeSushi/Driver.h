#pragma once

#include <string>
#include <vector>

#include "Shift.h"

using namespace std;

class Driver {
public:
	

	Driver(unsigned int ID, string name, unsigned int shiftsize, unsigned int weeklyhourlimit, unsigned int minresttime, vector<Shift> shifts);
	~Driver();

	//setters

	unsigned int setID(unsigned int ID);
	string setName(string name);
	unsigned int setShiftSize(unsigned int shiftsize);
	unsigned int setWeeklyHourLimit(unsigned int weeklyhourlimit);
	unsigned int setMinRestTime(unsigned int minresttime);
	vector<Shift> setShifts(vector<Shift> shifts);


	//getters

	unsigned int getID(); 
	string getName(); 
	unsigned int getShiftSize();
	unsigned int getWeeklyHourLimit();
	unsigned int getMinRestTime(); 
	vector<Shift> getShifts();

private:
	unsigned int ID; //the driver's unique ID
	string name; //the driver's name
	unsigned int shiftsize; //shift size - number of hours the driver can work per day
	unsigned int weeklyhourlimit; //number of hours the driver can work per week
	unsigned int minresttime; //minimum rest time between shifts (hours)
	vector<Shift> shifts; //list of shifts the driver was assigned to do
};

