#include<bits/stdc++.h>
using namespace std;

int main () {
  long long a, b;
  long long area;
  long long perimeter;

  cin >> a >> b;

  area = a * b;
  perimeter = 2 * (a + b);
  cout << area << " " << perimeter << endl;
  return 0;
}