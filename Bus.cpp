#include"Bus.h"

int Bus::getParkingDuration() { 
    return(0.75*(std::time(0)-getTimeEntry()));
 }

 Bus::Bus(int i) {
    setID(i);
   
}
