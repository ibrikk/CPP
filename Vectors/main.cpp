// has bound checking
#include <iostream>
#include <vector>
using namespace std;

vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

vector <int> test_scores {100, 98, 89, 85, 93};

vector <double> hi_temperatures (365, 80.0); // 80.0 80.0 80.0 ...

int main() {
cout << "first score at index 0 is: " << test_scores[0] << endl;
cout << "first score at index 0 is: " << test_scores.at(0) << endl;
cout << "There are " << test_scores.size() << "scores in the vector" << endl;


vector <int> vec1 {};
vector <int> vec2 {};

vec1.push_back(10);
vec1.push_back(20);
vec2.push_back(100);
vec2.push_back(200);

vector <vector<int>> vector_2d;
vector_2d.push_back(vec1);
}


// .at() does bound checking and [] doesn't

