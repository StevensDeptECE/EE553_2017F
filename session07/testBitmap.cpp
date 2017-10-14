//
// Created by dkruger on 10/13/2017.
//

int main() {
    const uint32_t RED = 0xFF0000;
    const uint32_t GREEN = 0x00FF00;
    const uint32_t BLUE = 0x0000FF;
    enum { BLUE = 0xFF0000 };

    // enums are old and not very good
    enum BoardPos{ BLACK, WHITE, EMPTY }; // int
    BoardPos pos = 44;

// #define is ancient and terrible
#define X  20
    cout << X;
    //#define is very, very confusing, not a good idea.  Example
#define SIZE 20%
    int x[SIZE];

    //other examples of #define
    Bitmap b(800, 800); // all pixels = 0,0,0,0
    b.horizLine(0, 300, 0, RED); // from x=0 to x=300 at y = 0
    b.vertLine(0, 200, 300, BLUE); // from y=0 to y=200 at x = 300
    b.line(0,0, 400,300, GREEN);  //https://en.wikipedia.org/wiki/Bresenham's_line_algorithm
    b.antialiasedLine(0,200, 400,300, 0xFFFF00); // OPTIONAL https://en.wikipedia.org/wiki/Xiaolin_Wu%27s_line_algorithm

    //   ax^2 + by^2 = r^2
    b.drawEllipse(500, 500, 200, 100, RED);    // create an ellipse centered (500,500)
    // 200 = diameter in the x, 100 = diameter in y
    b.fillEllipse(500, 500, 150, 70, GREEN);    // create an ellipse centered (500,500)

    b.drawRect(700, 600, 50, 50, RED); // draw outline rectangle
//TODO: Next week!!
//    b.fill(720,605, 0x0000FF);
}





