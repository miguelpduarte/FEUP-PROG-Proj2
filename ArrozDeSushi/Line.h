#pragma once

#include <vector>
#include <string>

#include "Utilities.h"

using namespace std;

class Line {
public:
	//Constructors
	
	Line::Line(string rawline);
	Line(unsigned int ID, unsigned int frequency, vector<string> stops, vector<unsigned int> travelTimesBetweenStops);
	~Line();

	//setters

	void setID(unsigned int ID);
	void setFrequency(unsigned int frequency);
	void setStops(vector<string> stops);
	void setTravelTimesBetweenStops(const vector<unsigned int> &travelTimesBetweenStops);


	//getters

	unsigned int getID() const;
	unsigned int getFrequency() const;
	vector<string> getStops() const;
	vector<unsigned int> getTravelTimesBetweenStops() const;

	//other methods
	bool hasStop(string stopname) const;
private:
	//Missing frequency and travel times between stops???
	//do not understand what they want the int vector (times here, timesList there) to be...
	unsigned int ID;
	unsigned int frequency;
	vector<string> stops;
	vector<unsigned int> travelTimesBetweenStops;
};

