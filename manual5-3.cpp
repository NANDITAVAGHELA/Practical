#include <iostream>
using namespace std;

class convert {
public:
    double cm;

    double cmtom() {
        return cm * 0.01;
    }

    double cmtokm() {
        return cm * 0.00001;
    }

    double cmtoft() {
        return cm * 0.0328;
    }

    double cmtoin() {
        return cm * 0.3937;
    }
};

int main() {
    convert c1;

    cout << "Enter a length in centimeters: ";
    cin >> c1.cm;

cout<<fixed;
    cout << "Centimeter to meter: " << c1.cmtom()   << endl;
    cout << "Centimeter to kilometer: " << c1.cmtokm()  << endl;
    cout << "Centimeter to feet: " << c1.cmtoft()  << endl;
    cout << "Centimeter to inch: " << c1.cmtoin()   << endl;

    return 0;
}
