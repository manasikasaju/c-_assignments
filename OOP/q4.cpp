#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isValidTriangle() {
        return (side1 + side2 > side3) &&
               (side1 + side3 > side2) &&
               (side2 + side3 > side1);
    }

    string getTriangleType() {
        if (!isValidTriangle()) {
            return "Not a valid triangle.";
        }
        if (side1 == side2 && side2 == side3) {
            return "Equilateral Triangle";
        }
        if (side1 == side2 || side1 == side3 || side2 == side3) {
            return "Isosceles Triangle";
        }
        return "Scalene Triangle";
    }
};

int main() {
    double s1, s2, s3;

    cout << "Enter the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle t(s1, s2, s3);

    cout << "Triangle Type: " << t.getTriangleType() << endl;

    return 0;
}
