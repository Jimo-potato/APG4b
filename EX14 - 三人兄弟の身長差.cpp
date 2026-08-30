#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  vector<int> height = {A, B, C};
  sort(height.begin(), height.end());
  
  cout << height.at(2) - height.at(0) << endl;
}
