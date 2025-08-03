#include<iostream>
using namespace std;

int N;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for(int i = 0; i < N ; i++){
    int j =0;
    for(;j<i;j++) cout << ' ';
    for(;j<N;j++) cout << '*';

    cout << '\n';
  }
  return 0;
}