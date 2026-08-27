#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  int i, B;
  string op;
  
  for (i = 0; i < N; i++) {
    cin >> op >> B;
    
    if (op == "+") {
      A += B;
      cout << i + 1 << ":" << A << endl;
      
    } else if (op == "-") {
      A -= B;
      cout << i + 1 << ":" << A << endl;
      
    } else if (op == "*") {
      A *= B;
      cout << i + 1 << ":" << A << endl;
      
    } else {
      
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      
      A /= B;
      cout << i + 1 << ":" << A << endl;
    }
  }
}
