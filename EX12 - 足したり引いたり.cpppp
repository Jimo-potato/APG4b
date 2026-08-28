#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int size, i, sum = 1;
  size = S.size();
  
  for (i = 0; 2 * i + 1 < size; i++) {
    if  (S.at(2 * i + 1) == '+') {
      sum += 1;
    } else {
      sum -= 1;
    }
  }
  
  cout << sum << endl;
}

/* correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 計算結果を保持する変数
  int answer = 1;

  for (int i = 0; i < S.size(); i++) {

    if (S.at(i) == '+') {
      answer++;
    }
    if (S.at(i) == '-') {
      answer--;
    }

  }

  cout << answer << endl;
}

*/
