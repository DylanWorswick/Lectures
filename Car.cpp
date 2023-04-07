#include "Car.h"

int Car::getParkingDuration() { 
    return(0.9*(std::time(0)-getTimeEntry()));
 }

 Car::Car(int i) {setID(i);
 }
 
