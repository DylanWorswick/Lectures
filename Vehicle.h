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
         int getID();
        std::time_t getTimeEntry();
         int getParkingDuration();
        void setID(int n_ID);
        
};