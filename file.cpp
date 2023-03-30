#include <cmath>
#include <iostream>

// enum meth { max = 0, min = 1, factorial = 2, addition = 3 };

class Math {

public:
  int max(int x, int y) { return (x > y) ? x : y; }

  int min(int x, int y) {

    if (x < y) {

      return x;

    } else if (x > y) {

      return y;
    }

    return 0;
  }

  int factorial(int x) {

    int fact = 1;

    for (int i = 1; i <= x; i++) {

      fact = fact * i;
    }

    return fact;
  }

  int addition(int x, int y) { return x + y; }

  int subtraction(int x, int y) { return x - y; }

  int multiply(int x, int y) { return x * y; }
  int division(int x, int y) { return x / y; }

  int squarerootmultiplier(int x) { return x * x; }

  int sqrtgetter(int x) { return pow(x, 0.5); }
  int volumeofacuboid(int length, int height, int width) {

    return length * width * height;
  }
  int volumeofcube(int edgelength) {

    return edgelength * edgelength * edgelength;
  }
  int areaofasquare(int sidelength) { return sidelength * sidelength; }
  int areaofarectangle(int width, int length) { return length * width; }
  int areaofarohmbus(int base, int height) { return base * height; }
  int areaofarohmbusbutwithdiagnols(int d1, int d2) { return d1 * d2; }
  int areaofacircle(int r) { return 3.14 * r * r; }
  int volumeofcylinder(int r, int height) { return 3.14 * r * height; }
  double volumeofsphere(double r) { return 4 / 3 * 3.14 * r * r * r; }
  double volumeofaprism(double b, double h) { return b * h; }

  double volumeofapyramid(double b, double h) { return (1 / 3) * b * h; }
  double rightsicularcone(double h) { return (1 / 3) * 3.14 * 3.14 * h; }
  double rectungalarpyrimid(double l, double h, double w) {

    return (1 / 3) * l * h * w;
  }
  double Ellipsoid(double a, double b, double c) {

    return (4 / 3) * 3.14 * a * b * c;
  }

  double Tetrahedron(double a) { return a * a * a / (6 * sqrt(2)); }
  double Pow(double x, double y) {

    double pew = 1;

    for (int i = 1; i <= y; i++) {

      pew = pew * x;
    }
    return pew;
  }
};

int main() {
  Math m;
  int y2;
  int x2;
  // meth met;

  std::string choice;

  std::cout << "enter the choices! \n";
  std::cout << "******************* \n";
  std::cout << "max: gets the max of 2 number you enter. \n";
  std::cout << "min: gets the smallest number between 2 numbers you enter \n";

  std::getline(std::cin, choice);

  if (choice == "max") {

    std::cout << "enter 2 numbers to get the max \n";
    std::cout << "enter x : \n";

    std::cin >> x2;

    std::cout << "enter y : \n";

    std::cin >> y2;

    std::cout << "the max number of thos is: " << m.max(x2, y2);

  }

  else if (choice == "min") {

    std::cout << "enter 2 numbers to get min";
    std::cout << "enter x: \n";

    std::cin >> x2;

    std::cout << "enter y: ";

    std::cin >> y2;

    std::cout << "the min of the number is" << m.min(x2, y2);

  } else if (choice == "factorial") {

    std::cout << "enter x to get factorial \n";

    std::cin >> x2;

    std::cout << "the factorial of the number you entered: " << m.factorial(x2)
              << '\n';
  } else if (choice == "addition") {

    std::cout << "enter x: \n";
    std::cin >> x2;

    std::cout << "enter y: \n";

    std::cin >> y2;

    std::cout << "the answer is " << m.addition(x2, y2);
  } else if (choice == "subtraction") {

    std::cout << "enter x: \n";

    std::cin >> x2;

    std::cout << "enter y: \n";

    std::cin >> y2;

    std::cout << "the subtraction of the number is: " << m.subtraction(x2, y2)
              << '\n';
  } else if (choice == "multiply") {

    std::cout << "enter x: \n";
    std::cin >> x2;

    std::cout << "enter y: \n";

    std::cin >> y2;

    std::cout << "the result of multiply is: " << m.multiply(x2, y2);
  } else if (choice == "division") {

    std::cout << "enter x: \n";

    std::cin >> x2;

    std::cout << "enter y: \n";

    std::cin >> y2;

    std::cout << "the result of the division is: " << m.division(x2, y2);
  }
}
