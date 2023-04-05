#include<bits/stdc++.h>
using namespace std;

int main () {
  long long n, tmp, min, max;
  long long sum = 0;
  
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> tmp;
    
    if(i == 0) {
      min = max = tmp;
    }

    if(min > tmp) {
      min = tmp;
    }

    if(max < tmp) {
      max = tmp;
    }

    sum += tmp;
  }

  cout << min << " " << max << " " << sum << endl;
  return 0;
}