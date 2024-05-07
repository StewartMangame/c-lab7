#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "Options:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            shapes::Square square(side);
            cout << "Area of the square: " << Area::calculateSquareArea(square) << std::endl;
            break;
        }
        case '2':
        {
            double base, height;
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            Triangle triangle(base, height);
            cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << std::endl;
            break;
        }
        case '3':
        {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            shapes::Circle circle(radius);
            cout << "Area of the circle: " << Area::calculateCircleArea(circle) << std::endl;
            break;
        }
        case '4':
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}