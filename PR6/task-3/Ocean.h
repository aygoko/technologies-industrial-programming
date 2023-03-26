#include <iostream>
#include <string>

class Ocean {
public:
    Ocean();
    Ocean(const std::string &name, const std::string &location, float size, float depth, float surfaceArea);


    std::string getName() const;

    std::string getLocation() const;

    float getSize() const;

    float getDepth() const;

    float getSurfaceArea() const;


    void setName(const std::string &name);

    void setLocation(const std::string &location);

    void setSize(float size);

    void setDepth(float depth);

    void setSurfaceArea(float surfaceArea);


    friend std::ostream &operator<<(std::ostream &os, const Ocean &ocean);

    friend std::istream &operator>>(std::istream &is, Ocean &ocean);

private:
    std::string m_name;
    std::string m_location;
    float m_size;
    float m_depth;
    float m_surfaceArea;
};


