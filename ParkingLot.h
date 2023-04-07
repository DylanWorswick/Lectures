#include"Vehicle.h"
#pragma once
class ParkingLot{

    private:
        int max_park;
        int currentPark;
        Vehicle** vehicles;
    public:
        ParkingLot(int n_max_park);
        int getCount();
        int getMaxPark();
        void parkVehicle(Vehicle* v_park);
        void unparkVehicle(int n_ID);
        int countOverstayingVehicles(int maxParkingDuration);

};