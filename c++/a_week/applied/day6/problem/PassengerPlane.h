#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

class PassengerPlane : public Airplane {
    public:
        PassengerPlane();
        std::string getType();
        void fly();
        void carryPassengers();
};

#endif // _PASSENGERPLANE_H
