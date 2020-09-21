#include <iostream>

using namespace std;

int square(int a) {
  return a*a;
}

double square(double a) {
    return a*a;
}

float square(float a) {
  return a*a;
}

bool square(bool a) {
    return bool(a*a);
}


int main() {
  int test_int = 8;
  double test_double = 8.5;
  float test_float = 8.2;
  bool test_bool = true;

  cout << "int " << square(test_int) << endl;
  cout << "double " << square(test_double) << endl;
  cout << "float " << square(test_float) << endl;
  cout << "bool " << square(test_bool) << endl;
}