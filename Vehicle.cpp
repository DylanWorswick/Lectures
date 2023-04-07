#include"Vehicle.h"

Vehicle::Vehicle(int n_ID) {
    ID=n_ID;
    timeOfEntry=std::time(0);
}

Vehicle::Vehicle() {
    ID=0;
    timeOfEntry=std::time(0);
}

int Vehicle::getID() { return ID; }


std::time_t Vehicle::getTimeEntry() {
     return timeOfEntry;
}

int Vehicle::getParkingDuration() { 
    return(std::time(0)-getTimeEntry());
 }

void Vehicle::setID(int n_ID) {
    ID=n_ID;
}
