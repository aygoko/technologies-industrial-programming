#include <iostream>

class Cone {
public:
    Cone();

    Cone(float x, float y, float z, float r, float h);

    virtual ~Cone() {}

    virtual void input();

    virtual void output() const;

    virtual float surfaceArea() const;

    virtual float volume() const;

protected:
    float x, y, z;
    float r;
    float h;
};

