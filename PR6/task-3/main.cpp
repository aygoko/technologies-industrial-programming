#include <iostream>
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

int main() {

    Ocean atlantic("Atlantic Ocean", "Atlantic", 106460000, 3796000);
    Ocean pacific("Pacific Ocean", "Pacific", 165250000, 10943000);


    std::cout << "Oceans:" << std::endl;
    std::cout << atlantic << std::endl;
    std::cout << pacific << std::endl;


    Sea baltic("Baltic Sea", "Atlantic Ocean", 377000, 55);
    Sea mediterranean("Mediterranean Sea", "Atlantic Ocean", 2500000, 1500);


    std::cout << "Seas:" << std::endl;
    std::cout << baltic << std::endl;
    std::cout << mediterranean << std::endl;


    Bay gulfOfMexico("Gulf of Mexico", "Atlantic Ocean", 1380000, 2500);
    Bay hudsonBay("Hudson Bay", "Arctic Ocean", 1163000, 281);


    std::cout << "Bays:" << std::endl;
    std::cout << gulfOfMexico << std::endl;
    std::cout << hudsonBay << std::endl;


    Ocean *ptrOcean = &atlantic;
    ptrOcean->printLocation();

    Sea *ptrSea = &mediterranean;
    ptrSea->printSize();

    Bay *ptrBay = &gulfOfMexico;
    ptrBay->printDepth();

    return 0;
}
