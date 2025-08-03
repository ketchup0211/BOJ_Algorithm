#include<iostream>
using namespace std;

int N;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for(int i = 1; i <= N ; i++){
    for(int j = 0 ; j < N-i ; j++){
      cout << ' ';
    }
    for(int k = 0; k < (i*2-1) ; k++){
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}