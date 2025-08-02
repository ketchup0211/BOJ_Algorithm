#include<iostream>
#include<algorithm>
using namespace std;

long long A, B;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> A >> B;
  
  if(A==B){
    cout << 0;
    return 0;
  }

  cout << abs(A-B)-1 << '\n';
  
  for(long long i = A < B ? A+1 : B+1 ; i < (A>B ? A : B);i++){
    cout << i << ' ';
  }
  return 0;
}