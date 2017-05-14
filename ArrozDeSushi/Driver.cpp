#include "Driver.h"

Driver::Driver() {}

Driver::Driver(string rawline) : weeklyhoursdrivensofar(0) {

	//Splitting the information by ";" - which is the information splitter
	vector<string> info = Utilities::splitString(rawline, ";");

	//Trimming the info to remove excess spaces
	for (int i = 0; i < info.size(); i++) {
		Utilities::trimString(info[i]);
	}

	//vector organization
	// 0 - ID
	// 1 - Name
	// 2 - Shift size
	// 3 - Weekly hour limit
	// 4 - Minimum rest time between shifts

	int ID = stoi(info[0]);
	string name = info[1]; //the driver's name
	int shiftsize = stoi(info[2]); //shift size - number of hours the driver can work per day
	int weeklyhourlimit = stoi(info[3]); //number of hours the driver can work per week
	int minresttime = stoi(info[4]); //minimum rest time between shifts (hours)

	//Assigning values to Driver object
	this->ID = ID;
	this->name = name;
	this->shiftsize = shiftsize;
	this->weeklyhourlimit = weeklyhourlimit;
	this->minresttime = minresttime;
	//Data not gotten from string from text file
	this->shifts = vector<Shift>(); //Empty vector of shifts
}

Driver::Driver(unsigned int ID, string name, unsigned int shiftsize, unsigned int weeklyhourlimit, unsigned int minresttime, const vector<Shift> &shifts)
	: ID(ID), name(name), shiftsize(shiftsize), weeklyhourlimit(weeklyhourlimit), minresttime(minresttime), shifts(shifts), weeklyhoursdrivensofar(0)
{}

Driver::~Driver() {}

unsigned int Driver::getID() const {
	return ID;
}

string Driver::getName() const {
	return name;
}

unsigned int Driver::getShiftSize() const {
	return shiftsize;
}

unsigned int Driver::getWeeklyHourLimit() const {
	return weeklyhourlimit;
}

unsigned int Driver::getMinRestTime() const {
	return minresttime;
}

vector<Shift> Driver::getShifts() const {
	return shifts;
}

unsigned int Driver::getWeeklyHoursDrivenSoFar() const {
	return weeklyhoursdrivensofar;
}

void Driver::setID(unsigned int ID) {
	this->ID = ID;
}

void Driver::setName(string name) {
	this->name = name;
}

void Driver::setShiftSize(unsigned int shiftsize) {
	this->shiftsize = shiftsize;
}

void Driver::setWeeklyHourLimit(unsigned int weeklyhourlimit) {
	this->weeklyhourlimit;
}

void Driver::setMinRestTime(unsigned int minresttime) {
	this->minresttime;
}

void Driver::setShifts(const vector<Shift> &shifts) {
	this->shifts = shifts;
}

unsigned int Driver::addShift(const Shift &newShift) {

	//Verify if this can be added pl0x
	cout << "lol u forgot nub";

	//If possible push back, increment weeklyhoursdrivensofar and return 0
	shifts.push_back(newShift);
	weeklyhoursdrivensofar += newShiftSizeHours;
	return 0;
}

bool Driver::isAvailable() const {
	//If the driver hasn't hit the maximum number of weekly hours then he is available
	return weeklyhoursdrivensofar < weeklyhourlimit;
}
