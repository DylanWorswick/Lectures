#include "Vehicle.h"
#include"ParkingLot.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"

#include<string>
#include<iostream>
/*
#include "Vehicle.cpp"
#include"ParkingLot.cpp"
#include"Car.cpp"
#include"Bus.cpp"
#include"Motorbike.cpp"
*/

int main(){
    int num_vehicles=0;
    ParkingLot p1(num_vehicles);
    //bool flag=true;
    //int i=0;
    //while(){
    int iNumber_parked=2;
    /*
    for(int i=0;i<iNumber_parked;i++){
        std::string typeOfVehicle;
        std::cout<<"what type of vehicle to park: ";
        std::cin>>typeOfVehicle;
        
        if(typeOfVehicle=="car"||typeOfVehicle=="Car"){
            Vehicle* v=new Car(i);
            p1.parkVehicle(v);
        }else if(typeOfVehicle=="bus"||typeOfVehicle=="Bus"){
            Vehicle* v=new Bus(i);
            p1.parkVehicle(v);
             //std::cout<<"bus"<<std::endl;
        }else if(typeOfVehicle=="Motorbike"||typeOfVehicle=="MotorBike"||typeOfVehicle=="Motor bike"||typeOfVehicle=="Motor Bike"||typeOfVehicle=="motorbike"){
            Vehicle* v=new Motorbike(i);
            p1.parkVehicle(v);
            //std::cout<<"Bike"<<std::endl;
        }else{
            Vehicle* v=new Vehicle(i);
            p1.parkVehicle(v);
        }
        //
        
        
    }
    */
    //std::cout<<"state the ID of a car you would like to remove: ";
    Vehicle* v=new Bus(1);
    p1.parkVehicle(v);
    Vehicle* v2=new Car(2);
    p1.parkVehicle(v2);
    Vehicle* v3=new Bus(3);
    p1.parkVehicle(v3);
    //std::cout<<p1.getCount();
    int IDRemove=22;
    //std::cin>>IDRemove;
    p1.unparkVehicle(IDRemove);

    return 0;
}