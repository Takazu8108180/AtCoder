#include<bits/stdc++.h>
#include <iomanip>

using namespace std;

int main () {
  long long a, b;
  cin >> a >> b;

  cout << a/b << endl;
  cout << a%b << endl;
  cout << fixed << setprecision(5) << static_cast<double>(a)/static_cast<double>(b) << endl;

  return 0;
}