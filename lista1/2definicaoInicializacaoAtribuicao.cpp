#include <iostream>
using namespace std;

int main() {
  cout << "Digite o valor 3.14: " << endl;

  double outputDepois;
  cin >> outputDepois;
  cout << outputDepois << endl; // 3.14

  double outputAntesEDepois;
  cout << outputAntesEDepois << endl; // Unexpected behavior (6.95255e-310)
  cout << "Digite o valor 3.14 novamente: " << endl;

  cin >> outputAntesEDepois;
  cout << outputAntesEDepois << endl; // 3.14

  return 0;
}

/*
https://timsong-cpp.github.io/cppwp/n4140/dcl.init

"12.
If no initializer is specified for an object, the object is default-initialized.
When storage for an object with automatic or dynamic storage duration is
obtained, the object has an indeterminate value, and if no initialization is
performed for the object, that object retains an indeterminate value until that
value is replaced ([expr.ass]). [ Note: Objects with static or thread storage
duration are zero-initialized, see [basic.start.init].  — end note ] If an
indeterminate value is produced by an evaluation, the behavior is undefined
except in the following cases: (...)"
*/