#ifndef SEA_H
#define SEA_H

#include "Ocean.h"

class Sea : public Ocean {
private:
    double saltiness;

public:

    Sea();


    Sea(string name, string location, double size, double depth, double surfaceArea, double saltiness);


    friend istream &operator>>(istream &in, Sea &sea);


    friend ostream &operator<<(ostream &out, const Sea &sea);


    void displaySeaInfo();


    double getSaltiness();


    void setSaltiness(double saltiness);
};

#endif
