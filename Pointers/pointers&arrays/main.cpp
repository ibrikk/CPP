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


