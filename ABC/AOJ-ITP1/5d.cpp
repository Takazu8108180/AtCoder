#include<bits/stdc++.h>
using namespace std;

int main () {
  long long N;
  int tmp;
  
  cin >> N;

  for(int i=1; i<N+1; i++) {
    if(i % 3 == 0) {
      cout << " " << i;
    }

    tmp = i;
    while(1) {
      if (i % 3 != 0 && tmp % 10 == 3) {
        cout << " " << i;
        break;
      } else if (tmp/10 <= 0) {
        break;
      } 
      
      tmp /= 10;
    }
  }

  cout << endl;
  return 0;
}
