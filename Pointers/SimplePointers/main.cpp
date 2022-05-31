#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
int num = {10};
cout << "Value of num is: " << num << endl;
cout << "Size of num is: " << sizeof num << endl;
cout << "Address of num is: " << &num << endl; // 0x7ff7b21ef918

int *p;
cout << "\nValue of p is: " << p << endl; // garbage
cout << "Address of p is: " << &p << endl; // 0x7ff7b21ef910
cout << "Size of p is: " << sizeof p << endl; // 8

p = nullptr;
cout << "\nValue of p is: " << p << endl; // 0


int *p1 = {nullptr};
double *p2 = {nullptr};
unsigned long long *p3 = {nullptr};
vector<string> *p4 = {nullptr};
string *p5 = {nullptr}; // sizeof all these pointers are 4 bytes (depending on a machine you're running on)

int score = {10};
double high_temp = {100.7};

int *score_ptr = {nullptr};

score_ptr = &score;
cout << "Value of score is: " << score << endl; // 10
cout << "Address of score is: " << &score << endl; // 0x7ff7b21ef8b4
cout << "Value of score_ptr is: " << score_ptr << endl; // 0x7ff7b21ef8b4



  return 0;
}