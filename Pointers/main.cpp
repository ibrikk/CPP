#include <string>
#include <iostream>
#include <vector>
#include <string>
using mamespace std;

int main() {

int *int_ptr {};
double* double_ptr {nullptr};
char * char_ptr {nullptr};
string *string_ptr {nullptr}

int num {10};
cout << "Value of num is: " << num << endl; //10
cout << "Size of num is: " << sizeof num << endl; // 4
cout << "Address of num is: " << &num << endl; // 0x61ff1c



int *p;
cout << "Value of p is " << p << endl; // 0x61ff60 - garbage
cout << "Address of p is " << &p << endl; // 0x61ff18
cout << "size of p is " << sizeof p << endl; // 4
p = nullptr; // set p to point nowhere
cout << "Value of p is: " << p << endl; // 0



int score {10};
double high_temp {100.7};
int *score_ptr {nullptr};
score_ptr = &score; // OK
score_ptr = &high_temp // Compiler Error


double high_temp {100.7};
double low_temp {37.2};

double *temp_ptr; // Pointers can be uninitialized but better to initialize as nullptr
temp_ptr = &high_temp; // points to high temp
temp_ptr = &low_temp; // now points to low temp // Pointer are variables so they can change
temp_ptr = nullptr; // Pointers can be null


double high_temp {100.7};
double low_temp {37.2};
double *temp_ptr {&high_temp};

cout << *temp_ptr << endl; // 100.7
temp_ptr = &low_temp; 
cout << *temp_ptr << endl; // 37.4


vector<string> stooges = {"Larry", "Moe", "Curly"};
vector<string> *vector_ptr = {nullptr};
vector_ptr = &stooges;
cout << "First stooge is: " << (*vector_ptr).at(0) << endl; // * has lower precedence that a dot . so need to put * in paranthesis. 
cout << "Stooges: " << for (auto stooge: *vector_ptr)
                        cout << stoogle << " " << endl;

// Dynamic Memory Allocation
int *int_ptr {nullptr};
int_ptr = new int; // allocate an integer on the heap
cout << int_ptr << endl; // 0x2747f28
cout << *int_ptr << endl; // 41188048 - garbage - because int hasn't been initialized
*int_ptr = 100;
cout << *int_ptr << endl; // 100

delete int_ptr; // frees the allocated memory


int *array_ptr = {nullptr};
int size = {};

cout << "How big do you want the array?";
cin >> size;
array_ptr = new int[size]; // allocate array on the heap

delete [] array_ptr; // frees allocated storage
return 0;
}
