#include <iostream>
#include <vector>
#include <string>

using namespace std;

int scores[] {100, 95, 89};
cout << scores << endl; // 0x61fec8
cout << *scores << endl; // 100

int *score_ptr {scores};
cout << score_ptr << endl; // 0x61fec8
cout << *score_ptr << endl; // 100


int scores[] {100, 95, 89};
int *score_ptr {scores};
cout << *score_ptr << endl; // 100
cout << *(score_ptr + 1) << endl; // 95
cout << *(score_ptr + 2) << endl; // 89


int array_name[] {1, 2, 3, 4, 5};
int *pointer_name {array_name};

array_name[index]   *(array_name + index)
pointer_name[index]  *(pointer_name + index)


int scores[] {100, 95, 89};
cout << "Value of scores: " << scores << endl; // 1000
int *score_ptr {scores};
cout << "Value of score_ptr: " << score_ptr << endl; // 1000

cout << "Array subscription notation ---------------" << endl;
cout << scores[0] << endl; // 100
cout << scores[1] << endl; // 95
cout << scores[2] << endl; // 89

cout << "Pointer subscription notation ---------------" << endl;
cout << score_ptr[0] << endl; // 100
cout << score_ptr[1] << endl; // 95
cout << score_ptr[2] << endl; // 89

cout << "Pointer offset notation ---------------" << endl;
cout << *score_ptr << endl; // 100
cout << *(score_ptr+1) << endl; // 95
cout << *(score_ptr + 2) << endl; // 89

cout << "Array offset notation ---------------" << endl;
cout << *scores << endl; // 100
cout << *(scores+1) << endl; // 95
cout << *(scores + 2) << endl; // 89


int scores[] {100, 95, 89, 68, -1};
int *score_ptr {scores};

while (*score_ptr != -1) {
  cout << *score_ptr << endl;
  score_ptr++;
}

string s1 {"Frank"};
string s2 {"Frank"};
string s3 {"James"};

string *p1 {&s1};
string *p2 {&s2};
string *p3 {&s1};

cout << boolalpha;
cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false --- random hex numbers
cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true

cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true
cout << *p1 << "==" << *p2 << ": " << (*p1 == *p3) << endl; // true

p3 == &s3; // point to James
cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false


int high_score {100};
int low_score {65};

const int *score_ptr {&high_score};

*score_ptr = 86; // ERROR
score_ptr = &low_score; // OK

const int const *score_ptr {&high_score};

*score_ptr = 86; // ERROR
score_ptr = &low_score; // ERROR


void display(vector<string> *v) {
  for (auto str: *v)
    cout << str << " ";
  cout << endl;
  (*v).at(0) = "Funny";
}

int main() {
  vector<string> stooges {"Larry", "Moe", "Curly"};
  display(&stooges);
}
////////////////////////////////////

void display(int *array, int sentinel) {
  while(*array != sentinel)
    cout << *array++ << " ";  // INCREMENTING POINTERS 100 -> 98 -> 97 NOT VALUES!!!
  cout << endl;
}

int main() {
  int scores[] {100, 98, 97, 89, 85, -1};
  display(scores, -1);

  cout << endl;
  return 0;
}

// RETURNING A POINTER FROM A FUNCTION

int *create_array(size_t size, int init_value = 0) {
  int *new_storage {nullptr};

  new_storage = new int[size];
  for (size_t i{0}; i < size; ++i) 
    *(new_storage + i) = init_value;
  return new_storage;
} 

int main() {
  int *my_array; // will be allocated by the function

  my_array = create_array(100, 20);
  // use it
  delete [] my_array; // be sure to free the storage
  return 0;
}
///////////////


int *create_array(size_t size, int init_value = 0) {
  int *new_storage {nullptr};

  new_storage = new int[size]; // 5000
  for (size_t i{0}; i < size; ++i) // 0 1 2 3 4 5 6 ... 9
    *(new_storage + i) = init_value;// 2 2 2 2 2 2 ... 2
  return new_storage; // 5000 and my_array is now 5000
} 

int main() {
  int *my_array {nullptr};
  size_t size;
  int init_value{};

  cout << "How many integers would you like ot allocate?: ";
  cin << size; // 10
  cout << "What value would you like them initialized to?: ";
  cin << init_value; // 2

  my_array = create_array(size, int_value); // This still points to 5000 which is the array of 2s

  delete [] my_array;
  return 0;
}


