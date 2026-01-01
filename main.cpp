#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int choice;
    double area = 0, radius, length, width;

    cout << "===== Area Calculator =====" << endl;
    cout << "1 - Area of Circle" << endl;
    cout << "2 - Area of Rectangle" << endl;
    cout << "3 - Area of Square" << endl;
    cout << "0 - Exit" << endl;
    cout << "Enter your choice :: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the Circle :: ";
            cin >> radius;
            if (radius > 0)
                area = M_PI * pow(radius, 2);
            else {
                cout << "Invalid radius!" << endl;
                return 0;
            }
            break;

        case 2:
            cout << "Enter the length of the Rectangle :: ";
            cin >> length;
            cout << "Enter the width of the Rectangle :: ";
            cin >> width;
            if (length > 0 && width > 0)
                area = length * width;
            else {
                cout << "Invalid dimensions!" << endl;
                return 0;
            }
            break;

        case 3:
            cout << "Enter the side length of the Square :: ";
            cin >> length;
            if (length > 0)
                area = pow(length, 2);
            else {
                cout << "Invalid length!" << endl;
                return 0;
            }
            break;

        case 0:
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "\nArea :: " << area << endl;
    return 0;
}
