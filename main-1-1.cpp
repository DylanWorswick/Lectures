#include<iostream>

//h
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
//DELETE
/*
#include"Vehicle.cpp"
#include"Car.cpp"
#include"Bus.cpp"
#include"Motorbike.cpp"
*/



int main(){
    int iCars;
    int iMotorbikes;
    int iBuses;
    std::cout<<"Enter number of cars: "<<std::endl;
    std::cin>>iCars;
    std::cout<<"Enter number of Buses: "<<std::endl;
    std::cin>>iBuses;
    std::cout<<"Enter number of Motorbikes: "<<std::endl;
    std::cin>>iMotorbikes;
    Vehicle** v1=new Vehicle*[iCars+iMotorbikes+iBuses];
    for(int i=0;i<iCars;i++){
        v1[i]=new Car(i);
        //v1[i]->setID(i);
    }
    for(int i=iCars;i<iBuses;i++){
        v1[i]=new Bus(i);
        //v1[i]->setID(i);
    }
    for(int i=iBuses;i<iMotorbikes;i++){
        v1[i]=new Motorbike(i);
     
    }
   
    std::cout<<v1[0]->getParkingDuration()<<std::endl;
    //fill w for loop

    return 0;
}