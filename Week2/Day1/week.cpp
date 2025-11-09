#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number between 1 and 7: ";
    if (!(cin >> a)) {
        cerr << "Invalid input\n";
        return 1;
    }
    switch (a)
    {
    case 1:
        cout << "It is Sunday\n";
        break;
    
    case 2:
        cout << "It is Monday\n";
        break;

    case 3:
        cout << "It is Tuesday\n";
        break;

    case 4:
        cout << "It is Wednesday\n";
        break;

    case 5:
        cout << "It is Thursday\n";
        break;

    case 6:
        cout << "It is Friday\n";
        break;

    case 7:
        cout << "It is Saturday\n";
        break;

    default:
        cout << "Invalid number: please enter a value from 1 to 7\n";
        break;
    }
    return 0;
}