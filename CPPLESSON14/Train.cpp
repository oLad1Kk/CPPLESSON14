#include "Train.h"

Train::Train()
{
    this->number = "undefined";
    this->station = "undefined";
    this->departureTime = "undefined";
}

Train::Train(string number, string station, string departureTime)
{
    this->number = number;
    this -> station = station;
    this -> departureTime = departureTime;
}

void Train::setDepartureTime(string departureTime)
{
    this->departureTime = departureTime;
}

string Train::getNumber() const
{
    return number;
}

string Train::getStation() const
{
    return station;
}

string Train::getDepartureTime() const
{
    return departureTime;
}
