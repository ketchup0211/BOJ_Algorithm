#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int cards[21];

void swap(int& a, int& b){
  int tmp = a;
  a = b;
  b = tmp;

  return;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 1 ; i < 21 ; i++){
    cards[i] = i;
  }

  for(int i = 0 ; i < 10 ; i++){
    int a, b;
    cin >> a >> b;
    // 범위 설정 주의
    for(int j = 0; j <= (b-a)/2; j++){
      swap(cards[a+j], cards[b-j]);
    }
  }

  for(int i = 1; i < 21 ; i++){
    cout << cards[i] << ' ';
  }
  return 0;
}