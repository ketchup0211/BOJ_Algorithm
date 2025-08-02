#include<iostream>
using namespace std;


int N, X;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> N >> X;
  for(int i = 0; i<N; i++){
    int num;
    cin >> num;
    if(num < X) cout << num << " ";
    else continue;
  }
  return 0;
}