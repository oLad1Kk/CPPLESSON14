#pragma once
#include <string>
#include <iostream>
using namespace std;


class Train
{
	string number;
	string station;
	string departureTime;
public:
	Train();
	Train(string number, string station, string departureTime);
	void setDepartureTime(string departureTime);

	string getNumber()const;
	string getStation()const;
	string getDepartureTime()const;
};

