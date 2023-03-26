#include <iostream>
#include <string>
#include "sea.h"

class Bay : public Sea {
public:
    Bay();

    Bay(const std::string &name, const std::string &location, float size, float depth, float surfaceArea,
        const std::string &oceanName);

    virtual ~Bay();

    void setName(const std::string &name);

    std::string getName() const;

    void setOceanName(const std::string &oceanName);

    std::string getOceanName() const;

    friend std::ostream &operator<<(std::ostream &os, const Bay &bay);

    friend std::istream &operator>>(std::istream &is, Bay &bay);

private:
    std::string name;
    std::string oceanName;
};


