#include  <iostream>
#include  <string>
#include  <cmath>

using namespace std;

double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_circle();
void volume_cylinder();



const double pi = 3.14159265;

int main() {
  area_circle();
  volume_cylinder();
  return 0;
}

double calc_volume_cylinder(double radius, double height) {
  return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
  return pi * radius * radius;
}

void area_circle() {
  double radius = {0};
  cout << "\nEnter the radius of the circle: ";
  cin >> radius;
  cout << "The area of a cirlce with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
  double height = {0};
  double radius = {0};
  cout << "\nEnter the height of the cylinder: ";
  cin >> height;
  cout << "\nEnter the radius of the circle: ";
  cin >> radius;
  cout << "The area of a cylinder with height " << height << " and radius " << radius << " is " << calc_volume_cylinder(radius, height)  << endl;
}

void display(int n);
void display(double n);
void display(std:: string s);
void display(std::vector<int> v);



// Passing arrays into functions
void print_array(int numbers [], size_t size);
int main() {
  int my_numbers[] {1, 2, 3, 4, 5};
  print_array(my_numbers, 5); // 1 2 3 4 5
  return 0;
}

void print_array(int numbers [], size_t size) { // We are passing location of the array into the function
  for (size_t i{0}; i < size; ++i) 
    cout << numbers[i] << endl;
}

/////

void print_array(const int numbers [], size_t size) {
  for (size_t i{0}; i < size; ++i) 
    cout << numbers[i] << endl;
}
