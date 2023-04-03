#include <iostream>
using namespace std;

int main()
{
  int j;
  int i;
  string dummy;

  i = 0;
  while (1) {
    cin >> j;
    if (!cin.fail()) {
      i++;
      cout << "Integer " << i << ": " << j << endl;
    } else if (cin.eof()) {
      return 0;
    } else {
      cin.clear();
      cin >> dummy;
    }
  }
}
