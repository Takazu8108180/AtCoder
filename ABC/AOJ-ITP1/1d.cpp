#include<bits/stdc++.h>
using namespace std;

int main () {
  long long N;

  cin >> N;

  int h = N / 3600;
  int m = N % 3600 / 60;
  int s = N % 3600 % 60;

  cout << h << ":" << m << ":" << s << endl;
  return 0;
}