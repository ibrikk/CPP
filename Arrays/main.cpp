// no bound checking

#include <iostream>
using namespace std;

int test_scores [5] = {100, 95, 99, 87, 88};

int main() {

cout << "First score at index 0: " << test_scores[0] << endl;

test_scores[0] = 90;

char vowels[] = {'a', 'e', 'i', 'o', 'u'};

cout << "The last vowel is: " << vowels[4] << endl;


int new_scores [3] = {};

cout << "\nFirst number is: " << new_scores[0]; // 0
cout << "\nSecond number is: " << new_scores[1]; // 0
cout << "\nThird number is: " << new_scores[2]; // 0
}
