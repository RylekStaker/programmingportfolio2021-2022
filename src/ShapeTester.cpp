#include <iostream>
#include <cmath>

using namespace std;

class Box {
public:
  double l;
  double b;
  double h;

  double getV(void);
  double getSA(void);
  void setL(double len);
  void setB(double bre);
  void setH(double hei);
};

double Box::getV(void) { return l * b * h; }
double Box::getSA(void) { return 2.0 * l * h + 2.0 * l * b + 2.0 * b * h; }
void Box::setL(double len) { l = len; }
void Box::setB(double bre) { b = bre; }
void Box::setH(double hei) { h = hei; }

class Pyramid {
public:
  double l;
  double b;
  double h;

  double getV(void);
  double getSA(void);
  void setL(double len);
  void setB(double bre);
  void setH(double hei);
};

double Pyramid::getV(void) { return l * b * h / 3.0; }
double Pyramid::getSA(void) { return (l * b) + (l * sqrt(pow((b / 2.0), 2.0) + pow(h, 2.0))) + (b * sqrt(pow((l / 2.0), 2.0) + pow(h, 2.0)));
}

void Pyramid::setL(double len) { l = len; }
void Pyramid::setB(double bre) { b = bre; }
void Pyramid::setH(double hei) { h = hei; }

class Sphere {
public:
  double r;

  double getV(void);
  double getSA(void);
  void setR(double rad);
};

double Sphere::getV(void) { return (4.0 / 3.0) * M_PI * pow(r , 3.0); }
double Sphere::getSA(void) { return 4.0 * M_PI * pow(r , 2.0); }
void Sphere::setR(double rad) { r = rad; }

int main() {
  Box b1;
  Pyramid p1;
  Sphere s1;
  double volume = 0.0;
  double SA = 0.0;
  int shape;

  cout << "Welcome to ShapeTester! Enter values to get volume and surface area "
          "for your shape!\n";
  cout << "Type '1' to test a box\n";
  cout << "Type '2' to test a Pyramid\n";
  cout << "Type '3' to test a Sphere\n";
  cin >> shape;
  if (shape == 1) {

    cout << "Enter Box length here:";
    cin >> b1.l;
    cout << "Enter Box breadth here:";
    cin >> b1.b;
    cout << "Enter Box height here:";
    cin >> b1.h;
    volume = b1.getV();
    cout << "Volume of Box: " << volume << endl;
    SA = b1.getSA();
    cout << "Surface area of Box: " << SA << endl;

  } else if (shape == 2) {

    cout << "Enter Pyramid length here:";
    cin >> p1.l;
    cout << "Enter Pyramid breadth here:";
    cin >> p1.b;
    cout << "Enter Pyramid height here:";
    cin >> p1.h;
    volume = p1.getV();
    cout << "Volume of Pyramid: " << volume << endl;
    SA = p1.getSA();
    cout << "Surface area of Pyramid: " << SA << endl;

  } else if (shape == 3) {

    cout << "Enter Radius length here:";
    cin >> s1.r;
    volume = s1.getV();
    cout << "Volume of Sphere: " << volume << endl;
    SA = s1.getSA();
    cout << "Surface area of Sphere: " << SA << endl;
  }
  return 0;
}