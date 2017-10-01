#include <iostream>
#include <cmath>
#include "Postscript.hh"

using namespace std;

int main() {
	Postscript p("test.ps");
	p.stroke(0x00FF00);
	p.line(0,0, 100,100);
	p.fill(0xFF0000); // set red
	p.rect(100,100, 200,200);
	p.grid(300,300, 600,600, 8,8); // draw an 8x8 grid from 300,300, to 600,600

	p.circle(500,500, 50);
	p.ellipse(200,500, 30, 80);
	p.image(0,300, "image.jpg");
	p.showpage();
	p.text(0,0, "testing");
	int x[] = {10, 20, 30, 40};
	int y[] = {50, 10, 40, 20};
	p.polyline(x, y, 4);
	p.setFont("Times", 24);
	Rect r = p.createRect(200,200, 400,400);
	r.scale(0, pi2, -1,+1);
	Range t(0,.01,pi2);
	r.plot(t, sin);
	r = p.createRect(400,200, 600,400);
	const string text[] = {
		"test1", "test2", "test3"
	};
	ParagraphStyle s("Times", 24, LEFT);
	r.para(s, text);
	 
}
