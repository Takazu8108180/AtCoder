#include<bits/stdc++.h>
using namespace std;

int main () {
  long long a, b, c;
  int count = 0;

  cin >> a >> b >> c;

  for(int i=a; i<b+1; i++) {
    if(c % i == 0) count++;
  }

  cout << count << endl;
  return 0;
}