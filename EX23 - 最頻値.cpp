#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  
  map<int, int> S;
  for (int i = 0; i < N; i++) {
    int x = A.at(i);
    if (S.count(x)) {
      S.at(x)++;
    } else {
      S[x] = 1;
    }
  }
  
  int max = -1;
  int max_count = 0;
  for (int i = 0; i < N; i++) {
    int x = A.at(i);
    if (max_count < S.at(x)) {
      max_count = S.at(x);
      max = x;
    }
  }
  
  cout << max << " " << max_count << endl;
}
