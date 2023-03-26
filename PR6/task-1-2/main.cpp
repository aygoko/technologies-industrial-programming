#include "Cone.h"
#include "TruncatedCone.h"
#include <iostream>

int main() {

    Cone cone1;
    std::cout << "Cone 1:\n";
    cone1.input();
    cone1.output();
    std::cout << "Surface area: " << cone1.surfaceArea() << "\n";
    std::cout << "Volume: " << cone1.volume() << "\n\n";


    Cone cone2(2, 3, 4);
    std::cout << "Cone 2:\n";
    cone2.output();
    std::cout << "Surface area: " << cone2.surfaceArea() << "\n";
    std::cout << "Volume: " << cone2.volume() << "\n\n";


    TruncatedCone truncatedCone(1, 2, 3, 4);
    std::cout << "Truncated cone:\n";
    truncatedCone.output();
    std::cout << "Surface area: " << truncatedCone.surfaceArea() << "\n";
    std::cout << "Volume: " << truncatedCone.volume() << "\n\n";

    Cone *baseCone = new Cone(1, 2);
    Cone *derivedCone = new TruncatedCone(2, 3, 4, 5);
    std::cout << "Derived cone:\n";
    derivedCone->output();
    std::cout << "Surface area: " << derivedCone->surfaceArea() << "\n";
    std::cout << "Volume: " << derivedCone->volume() << "\n\n";

    // compare cones
    if (cone1 > cone2) {
        std::cout << "Cone 1 is larger than Cone 2\n";
    } else {
        std::cout << "Cone 2 is larger than Cone 1\n";
    }

    // compare truncated cones
    if (truncatedCone > *baseCone) {
        std::cout << "Truncated cone is larger than base cone\n";
    } else {
        std::cout << "Base cone is larger than truncated cone\n";
    }


    delete baseCone;
    delete derivedCone;

    return 0;
}
