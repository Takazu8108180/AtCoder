#include<bits/stdc++.h>
using namespace std;

int main () {
  long long a, b;
  char op;

  while(1){
    cin >> a >> op >> b;

    if(op == '?') {
      break;
    } else if(op == '+') {
      cout << a+b << endl;
    } else if (op == '-') {
      cout << a-b << endl;
    } else if (op == '*') {
      cout << a*b << endl;
    } else if (op == '/') {
      cout << a/b << endl;
    }
  }

  return 0;
}