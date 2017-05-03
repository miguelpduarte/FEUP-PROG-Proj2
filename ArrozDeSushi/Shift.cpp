#include "Shift.h"



Shift::Shift(unsigned int busLineID, unsigned int driverID, unsigned int busID, unsigned int startTime, unsigned int endTime) 
	: busLineID(busLineID),driverID(driverID),busID(busID),startTime(startTime),endTime(endTime)
{}

Shift::~Shift()
{}

unsigned int Shift::getBusLineId() const {
	return busLineID;
}

unsigned int Shift::getDriverId() const {
	return driverID;
}

unsigned int Shift::getBusID() const {
	return busID;

}
unsigned int Shift::getStartTime() const {
	return startTime;
}
unsigned int Shift::getEndTime() const {
	return endTime;
}

void Shift::setBusLineId(unsigned int busLineID){
	this->busLineID = busLineID;
}
void Shift::setDriverId(unsigned int driverID){
	this->driverID = driverID;
}
void Shift::setBusID(unsigned int busID){
	this->busID = busID;
}
void Shift::setStartTime(unsigned int startTime){
	this->startTime = startTime;
}
void Shift::setEndTime(unsigned int endTime){
	this->endTime = endTime;
}