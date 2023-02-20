#ifndef TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_FIGURE_H
#define TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_FIGURE_H


class Figure {
private:
    float x1,x2,x3,x4;
    float y1,y2,y3,y4;
    float area;
    float perimeter;
public:
    Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
    void show();
    bool is_rectangle();
    bool is_square();
    bool is_rhombus();
    bool is_in_circle();
    bool is_out_circle();
};


#endif
