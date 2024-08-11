// CircleType Class.cpp : This file contains the code and a separate test program for the CircleType class.

#include <iostream>
#include "CylinderType.h"

int main()
{
    cout << "Test CylinderType with integers" << endl;

    cout << "Default constructor (cylinder1): ";
    CylinderType<int> cylinder1;
    cout << "   Center Point: ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder1.printCircumPoint();
    cout << "   Height: " << cylinder1.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylinder2): ";
    CylinderType<int> cylinder2(5, 3, -4, 0, 8);
    cout << "   Center Point: ";
    cylinder2.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder2.printCircumPoint();
    cout << "    Height: " << cylinder2.getHeight();
    cout << endl << endl;

    cout << "Constructor with points (cylinder3): ";
    PointType<int> centerPoint(2, 0);
    PointType<int> circumPoint(0, -2);
    int height = 6;
    CylinderType<int> cylinder3(centerPoint, circumPoint, height);
    cout << "   Center Point: ";
    cylinder3.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder3.printCircumPoint();
    cout << "   Height: " << cylinder3.getHeight();
    cout << endl << endl;

    cout << "Test setCenterPoint, setCircumPoint, and setHeight with cylinder1: ";
    cylinder1.setCenterPoint(5, 3);
    cylinder1.setCircumPoint(0, 3);
    cylinder1.setHeight(4);

    cout << "   Center Point: ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder2.printCircumPoint();
    cout << "   Height: " << cylinder2.getHeight();
    cout << endl << endl;

    cout << "Test getCenterPoint, getCircumPoint, and getHeight with cylinder1: ";
    centerPoint = cylinder1.getCenterPoint();
    circumPoint = cylinder1.getCircumPoint();
    height = 9;
    cout << "   Center Point: ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder1.printCircumPoint();
    cout << "   Height: " << cylinder1.getHeight();
    cout << endl << endl;
    cout << "Radius from cylinder1: " << cylinder1.calcRadius() << endl;
    cout << "Area from cylinder1 " << cylinder1.calcArea() << endl;
    cout << "Circumference from cylinder1: " << cylinder1.calcCircumference() << endl;
    cout << "Surface Area from cylinder1: " << cylinder1.calcSurfaceArea() << endl;
    cout << "Volume from cylinder1: " << cylinder1.calcVolume() << endl;
    cout << endl;

    cout << "Testing the print function for cylinder2: " << endl;
    cylinder2.print();
    cout << endl << endl;


    cout << endl << "Test CircleType with real numbers: " << endl;

    cout << "Default constructor (cylinder4): ";
    CylinderType<double> cylinder4;
    cout << "   Center Point: ";
    cylinder4.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder4.printCircumPoint();
    cout << "   Height: " << cylinder4.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylinder5): ";
    CylinderType<double> cylinder5(5.1, 3.3, -4.6, 0, 3.7);
    cout << "   Center Point: ";
    cylinder5.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder5.printCircumPoint();
    cout << "   Height: " << cylinder5.getHeight();
    cout << endl << endl;

    cout << "Constructor with points (cylinder6): ";
    PointType<double> centerPoint2(2, 0);
    PointType<double> circumPoint2(0, -2);
    double h2 = 5.2;
    CylinderType<double> cylinder6(centerPoint2, circumPoint2, h2);
    cout << "   Center Point: ";
    cylinder6.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder6.printCircumPoint();
    cout << "   Height: " << h2;
    cout << endl << endl;

    cout << "Test setCenterPoint, setCircumPoint and setHeight with cylinder4: ";
    cylinder4.setCenterPoint(5, 3);
    cylinder4.setCircumPoint(0, 3);
    cylinder4.setHeight(6);
    cout << "   Center Point: ";
    cylinder4.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder4.printCircumPoint();
    cout << "   Height: " << cylinder4.getHeight();
    cout << endl << endl;

    cout << "Test getCenterPoint, getCircumPoint, and getHeight with cylinder4: ";
    centerPoint2 = cylinder4.getCenterPoint();
    circumPoint2 = cylinder4.getCircumPoint();
    h2 = cylinder4.getHeight();
    cout << "   Center Point: ";
    cylinder4.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder4.printCircumPoint();
    cout << "   Height: " << h2;
    cout << endl << endl;

    cout << "Radius from cylinder4: " << cylinder4.calcRadius() << endl;
    cout << "Area from cylinder4 " << cylinder4.calcArea() << endl;
    cout << "Circumference from cylinder4: " << cylinder4.calcCircumference() << endl;
    cout << "Surface Area from cylinder4: " << cylinder4.calcSurfaceArea() << endl;
    cout << "Volume from cylinder4: " << cylinder4.calcVolume() << endl;
    cout << endl;

    cout << "Testing the print function for cylinder5: " << endl;
    cylinder5.print();
    cout << endl << endl;



    return 0;

}