#include <iostream>
#include <cmath>   // for sin(), cos(), tan()
#define PI 3.14159265358979323846
using namespace std;

int main() {
    double angle;

    cout << "Angle (in radians): ";
    cin >> angle;
    double degrees = angle * 180 / PI;

    cout << "sin(" << degrees << "°) = " << sin(angle) << endl;
    cout << "cos(" << degrees << "°) = " << cos(angle) << endl;
    cout << "tan(" << degrees << "°) = " << tan(angle) << endl;

    return 0;
}
