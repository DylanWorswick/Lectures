#include<string>
#include<chrono>
#pragma once

class Vehicle{
    private:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle();
        Vehicle(int n_ID);
        virtual int getID();
        std::time_t getTimeEntry();
        virtual int getParkingDuration();
        virtual void setID(int n_ID);
        
};