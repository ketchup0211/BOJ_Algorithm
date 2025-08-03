#include<iostream>
using namespace std;

int N;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for(int i = 1; i <= N*2-1 ; i++){
    if(i<N){
      for(int j = N-i;j>0;j--){
        cout << ' ';
      }
      for(int k = 0; k<i*2-1;k++){
        cout << '*';
      }
      cout << '\n';
    }
    else
    {
      for(int j = N ; j < i ; j++){
      cout << ' ';
      }
      for(int k = (2*N-i)*2-1; k >0 ; k--){
        cout << '*';
      }
      cout << '\n';
    }
  }
  return 0;
}