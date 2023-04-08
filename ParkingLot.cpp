#include "ParkingLot.h"
#include<iostream>

ParkingLot::ParkingLot(int n_max_park) {
    max_park=n_max_park;
    currentPark=0;
    vehicles=new Vehicle*[n_max_park];

}
ParkingLot::ParkingLot() {
    max_park=0;
    currentPark=0;
    vehicles=new Vehicle*[0];
}

int ParkingLot::getCount() { 
    return (currentPark);
     }

void ParkingLot::parkVehicle(Vehicle* v_park) {
    if(currentPark<max_park){
        //for(int i=0;i<max_park;i++){
        vehicles[currentPark]=v_park;
        currentPark++;
        //return true;
       // }
    }else{
        std::cout<<"The lot is full"<<std::endl;
        //return false;
    }

}

void ParkingLot::unparkVehicle(int n_ID) {
    int count =0;
    for(int i=0;i<currentPark;i++){
        if(vehicles[i]->getID()==n_ID){
            //vehicles[i]=nullptr;
            //std::cout<<"TEST";
            currentPark--;
            count++;
            
        }
        //std::cout<<vehicles[i]->getID();
    }
    if(count==0){
    std::cout<<"Vehicle not in the lot"<<std::endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
        int iOverstayed=0;
        for(int i=0;i<getCount();i++){
            if(vehicles[i]->getParkingDuration()>=maxParkingDuration){
                iOverstayed++;

            }
        }
        return iOverstayed;
      }

      int ParkingLot::getMaxPark() { return max_park; }
