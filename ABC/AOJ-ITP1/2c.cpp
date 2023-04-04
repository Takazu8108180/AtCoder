#include<bits/stdc++.h>
using namespace std;

int main () {
  long long arry[3];
  long long tmp;

  cin >> arry[0] >> arry[1] >> arry[2];

  if(arry[0] > arry[1]){
    tmp = arry[0];
    arry[0] = arry[1];
    arry[1] = tmp;
  }

  if(arry[1] > arry[2]){
    tmp = arry[1];
    arry[1] = arry[2];
    arry[2] = tmp;
  }

  if(arry[0] > arry[1]){
    tmp = arry[0];
    arry[0] = arry[1];
    arry[1] = tmp;
  }
    
  cout << arry[0] << " " << arry[1] << " " << arry[2] << endl;
  return 0;
}