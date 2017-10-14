/*
 Created by dkruger on 10/13/2017.
*/
#pragma once


#if 0
//TODO: make color object to encapsulate details
class Color {


};
#endif


class Bitmap {
private:

public:
    typedef uint32_t Color;
    Bitmap(uint32_t width, uint32_t height);
    ~Bitmap();
    Bitmap(const Bitmap& orig);
    Bitmap& operator =(const Bitmap& orig);
    Bitmap(Bitmap&& orig); // move constructor
    void horizLine(uint32_t x1, uint32_t x2, uint32_t y, Color c);
    void vertLine(uint32_t y1, uint32_t y2, uint32_t x, Color c);

    // draw a line at any angle
    void line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color);  //https://en.wikipedia.org/wiki/Bresenham's_line_algorithm

    // draw a line making adjacent dots different colors to blur "jaggies"
    void antialiasedLine(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color); // OPTIONAL https://en.wikipedia.org/wiki/Xiaolin_Wu%27s_line_algorithm

    //   ax^2 + by^2 = r^2
    void drawEllipse(uint32_t xCenter, uint32_t yCenter, uint32_t width, uint32_t height,
                     Color);
    void fillEllipse(uint32_t xCenter, uint32_t yCenter, uint32_t width, uint32_t height,
                     Color);
    // draw a rect with top-left corner (x,y)
    void drawRect(uint32_t x, uint32_t y, uint32_t width, uint32_t height, Color);

    // recursive floodfill starting at location (x,y)
    b.fill(uint32_t x, uint32_t y, Color c);
};

