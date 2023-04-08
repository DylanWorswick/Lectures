#include"Vehicle.h"
#pragma once
class ParkingLot{

    private:
        int max_park;
        int currentPark;
        Vehicle** vehicles;
    public:
        ParkingLot(int n_max_park);
        virtual int getCount();
        virtual int getMaxPark();
        virtual void parkVehicle(Vehicle* v_park);
        virtual void unparkVehicle(int n_ID);
        virtual int countOverstayingVehicles(int maxParkingDuration);

};