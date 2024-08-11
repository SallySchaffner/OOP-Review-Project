// PointType Class.cpp : This file contains the code and a separate test program for the PointType class.

#include <iostream>
#include "PointType.h"

int main()
{
    cout << "Test PointType with integers" << endl;

    cout << "From default constructor: ";
    PointType<int> Ip1;
    cout << "(" << Ip1.getX() << ", " << Ip1.getY() << ")" << endl;

    cout << "From constructor with parameters: ";
    PointType<int> Ip2(3, 5);
    Ip2.print(); 
    cout << endl;

    cout << "Assigning values to Ip1 (making a horizontal line): ";
    Ip1.setPoint(-3, 5);
    Ip1.print();

    cout << "Distance between Ip1 and Ip2: ";
    double d = Ip1 - Ip2;
    cout << d << endl;

    cout << "Assigning values to Ip1(making a vertical line) : ";
    Ip1.setPoint(3, -5);
    Ip1.print();

    cout << "Distance between Ip1 and Ip2: ";
    d = Ip1 - Ip2;
    cout << d << endl;

    cout << "Assigning values to Ip1(making a line with a slope) : ";
    Ip1.setPoint(-2, -6);
    Ip1.print();

    cout << "Distance between Ip1 and Ip2: ";
    d = Ip1 - Ip2;
    cout << d << endl;

    cout << "Testing individual sets and combined get: ";
    Ip2.setX(-5);
    Ip2.setY(6);
    int x, y;
    Ip2.getPoint(x, y);
    cout << "New point: (" << x << ", " << y << ")" << endl;

    cout << endl << "Test PointType with real numbers: " << endl;

    cout << "From default constructor: ";
    PointType<double> Rp1;
    cout << "(" << Rp1.getX() << ", " << Rp1.getY() << ")" << endl;

    cout << "From constructor with parameters: ";
    PointType<double> Rp2(3.5, 5.8);
    Rp2.print();
    cout << endl;

    cout << "Assigning values to %p1(making a line with a slope) : ";
    Rp1.setPoint(-2.7, -6.2);
    Rp1.print();

    cout << "Distance between Ip1 and Ip2: ";
    d = Rp1 - Rp2;
    cout << d << endl;

    cout << "Testing individual sets and combined get: ";
    Rp2.setX(-5.1);
    Rp2.setY(6.7);
    double x1, y1;
    Rp2.getPoint(x1, y1);
    cout << "New point: (" << x1 << ", " << y1 << ")" << endl;

    return 0;

}