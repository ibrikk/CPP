#include <iostream>

using namespace std;

class Shallow
{
private:
  int *data;

public:
  void set_data_value(int d)
  {
    *data = d;
  }
  int get_data_value()
  {
    return *data;
  }
  // COnstructor
  Shallow(int d);
  //Copy Construcrtor
  Shallow(const Shallow &source);
  //Destructor
  ~Shallow();
};

Shallow(int d)
{
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
  cout << "Copy constructor = shallow copy" << endl;
}

// Deep
Deep::Deep(const Deep &source) 
  : Deep {*source.data} {
    cout << "Copy constructor -- deep copy" << endl;
  }

Shallow : Shallow()
{
  delete *data;
  cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
  cout << s.get_data_value() << endl;
}

int main()
{
  Shallow obj1{100};
  display_shallow(obj1);

  Shallow obj2{obj1};
  obj2.set_value(100);
}