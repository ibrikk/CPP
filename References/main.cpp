#include <iostream>
#include <vector>
#include <string>

using namespace std;

// USE REFERENCES WHEN THE FUNCTION DOES MODIFY THE ACTUAL PARAMETER
// WHEN THE PARAMETER IS EXPENSIVE TO COPY
// THE PARAMETER WILL NEVER BE nullptr 

int main() {
  int num = {100};
  int &ref = {num};

  cout << num << endl; // 100
  cout << ref << endl; // 100

  num = 200;
  int &ref = {num};

  cout << num << endl; // 200
  cout << ref << endl; // 200

    ref = 300;
  int &ref = {num};

  cout << num << endl; // 300
  cout << ref << endl; // 300



  vector<string> stooges {"Larry", "Moe", "Curly"};
  for (auto str: stooges)
    str = "Funny"; // str is a copy of each vector element - doesn't change original structure

    for (auto &str: stooges) // str is a reference to each vector element -- Changes original structure
      str = "Funny" 
}