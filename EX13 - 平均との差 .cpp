#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> score(N);
  int sum = 0, average = 0, diff;
  
  for (int i = 0; i < N; i++) {
    cin >> score.at(i);
    sum += score.at(i);
  }
  average = sum / N;
  
  for (int i = 0; i < N; i++) {
    if (score.at(i) >= average) {
      diff = score.at(i) - average;
    } else {
      diff = average - score.at(i);
    }
    cout << diff << endl;
  }
}

