#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class T>
class PointType
{
public:
  // Default constructor
  PointType() 
  {
    x = 0;
    y = 0;
  }
  // Constructor with parameters
  PointType(T pX, T pY) : x(pX), y(pY) { }

  // Postcondition: Value provided as input is assigned to the instance variable.
  void setX(T xP)
  {
    x = xP;
  }

  // Postcondition: Value provided as input is assigned to the instance variable.
  void setY(T yP)
  {
    y = yP;
  }

  // Postcondition: Assign values to both coordinates of the ordered pair.
  void setPoint(T xP, T yP)
  {
    x = xP;
    y = yP;
  }

  // Returns the value of x coordinate.
  T getX() { return x; }

  // Returns the value of y coordinate.
  T getY() { return y; }

  // Returns the coordinates as an ordered pair.
  void getPoint(T &xP, T &yP)
  {
    xP = x;
    yP = y;
  }

  double operator -(const PointType p2) const
  {
    double distance = sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));
    return distance;
  }

  // Postcondition, sends the values of the ordered pair to the display
  void print()
  {
    cout << fixed << setprecision(2) << showpoint;
    cout << "(" << x << ", " << y << ")" << endl;
  }

private:
  T x, y;

};
