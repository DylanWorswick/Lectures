#include "Motorbike.h"

int Motorbike::getParkingDuration() { return(0.85*(std::time(0)-getTimeEntry())); }

Motorbike::Motorbike(int i) {
    setID(i);

}
