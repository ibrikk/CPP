#include <iostream>
using namespace std;

int main() {
  int counter = {13};
  int result = {0};

  counter += 1; // 14
  counter++; // 14
  ++counter; // 14

  int counter = {13};
  int result = {1};

  result = ++counter; // 14
  result = counter++; // 14

  result = ++counter + 10; // 24
  result = counter++ + 10; //  counter: 23 result: 24
}