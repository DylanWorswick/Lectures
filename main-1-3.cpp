#include "Vehicle.h"
#include"ParkingLot.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"

#include<string>
#include<iostream>
/*
#include"Vehicle.cpp"
#include"ParkingLot.cpp"
#include"Car.cpp"
#include"Bus.cpp"
#include"Motorbike.cpp"
*/
int main(){
    ParkingLot p1(10);
    for(int i=0;i<10;i++){
        std::string typeOfVehicle;
        std::cout<<"what type of vehicle to park: ";
        std::cin>>typeOfVehicle;
        if(typeOfVehicle=="car"||typeOfVehicle=="Car"){
            Vehicle* v=new Car(i);
            p1.parkVehicle(v);
        }else if(typeOfVehicle=="bus"||typeOfVehicle=="Bus"){
            Vehicle* v=new Bus(i);
            p1.parkVehicle(v);
        }else if(typeOfVehicle=="motorbike"||typeOfVehicle=="MotorBike"){
            Vehicle* v=new Car(i);
            p1.parkVehicle(v);
        }
        
    }
    std::cout<<p1.countOverstayingVehicles(15)<<std::endl;
    return 0;
}