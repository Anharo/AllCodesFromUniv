#include<iostream>
using namespace std;

class Distance {
    public:
        double feet, inches;

        Distance():feet(0.0),inches(0.0){}

        Distance(double f, double i) {
            feet = f;
            inches = i;
        }

        Distance operator+(Distance& d2) {
            Distance d3;
            d3.feet = this->feet + d2.feet;
            d3.inches = this->inches + d2.inches;
            return d3;
        }
};

class DerivedDistance : public Distance {
    public:
        DerivedDistance() : Distance() {}

        DerivedDistance(double f, double i) : Distance(f, i) {}

        DerivedDistance operator*(DerivedDistance& d2) {
            DerivedDistance d3;
            d3.feet = this->feet * d2.feet;
            d3.inches = this->inches * d2.inches;
            return d3;
        }
};

int main() {
    DerivedDistance d1(10.5, 6.2);
    DerivedDistance d2(5.5, 3.2);

    DerivedDistance d3;
    d3= d1 + d2;
    cout << "Sum of distances = " << d3.feet << " feet " << d3.inches << " inches" << endl;

    DerivedDistance d4 = d1 * d2;
    cout << "Product of distances = " << d4.feet << " feet " << d4.inches << " inches" << endl;

    return 0;
}