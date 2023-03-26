#include <iostream>

class Cone {
public:
    Cone();

    Cone(float x, float y, float z, float r, float h);

    virtual ~Cone() = default;

    virtual void input();

    virtual void output() const;

    [[nodiscard]] virtual float surfaceArea() const;

    [[nodiscard]] virtual float volume() const;

protected:
    float x, y, z;
    float r;
    float h;
};

