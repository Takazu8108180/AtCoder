#include<bits/stdc++.h>
using namespace std;

int main () {
  long long x, y;

  while(1) {
    cin >> x >> y;

    if(x == 0 && y == 0) {
      break;
    } else if (x <= y) {
      cout << x << " " << y << endl;
    } else {
      cout << y << " " << x << endl;
    }
  }
  
  return 0;
}