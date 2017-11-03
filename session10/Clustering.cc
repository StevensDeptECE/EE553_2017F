#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

class Point {
public:
  double x, y;
  Point(istream& s) {
    s >> x >> y;
  }
  Point(double x, double y) : x(x), y(y) {}
  double  dist(const Point& p) const {
  }
  
  friend double dist(const Point& a, const Point& b) {
  }
  static double  dist(const Point& a, const Point& b) {
  }
  
};

double distance(const Point& a, const Point& b) {
  double dx = a.x-b.x, dy = a.y-b.y;
  return sqrt(dx*dx + dy*dy);
}

inline double sq(double x) { return x*x; }

double  Point::dist(const Point& p) const {
  return sqrt(sq(a.x-b.x) + sq(a.y-b.y)); 
}


// find the sum of the distances to one point
double metric(const vector<Point>& points, const Point& center) {
  double sum = 0;
  for (auto p : points) {
    sum += distance(p, center);
  }
  return sum;
}


/*
find the distance between the points and the nearest center
===========================================================
. .                                              . .
                                                  .
     *                              *                .

.                .                            .          
                 .               

==========================================================
 */

// find the sum of the distance to the nearest point
double metric(const vector<Point>& points, const vector<Point>& centers) {
  double sum = 0;
  const double BIG = 1e100; //the original googol!
  for (auto p : points) {
    double min = distance(p, centers[0]);
    Point bestPoint = centers[0];
    for (int i = 1; i < centers.size(); ++i) {
      if (distance(p,centers[i]) < min) {
	min = distance(p,centers[i]);
	bestPoint = centers[i];
      }
    }
    sum += distance(p, bestPoint);    
  }
  return sum;
}

void populatePoints(vector<Point>& points, const char filename[]) {
  ifstream f(filename);
  while (!f.eof()) {
    points.push_back(Point(f));
  }
}


vector<Point> readPoints(const char filename[], int length = 10) {
  ifstream f(filename);
  vector<Point> points(length);
  while (!f.eof()) {
    points.push_back(Point(f));
  }
  return points;
}







// k-means clustering

using namespace std;

int main() {
  vector<Point> points = readPoints("points.dat");
  Point p1(1,2);
  Point p2(99,5);
  double d = p1.dist(p2);
  d = dist(p1,p2); // friend
  d = distance(p1,p2); // friend
  d = Point::dist(p1,p2);  
}
