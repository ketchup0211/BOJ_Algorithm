#include<iostream>
#include<algorithm>
using namespace std;

int res[3];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for(int i = 0; i<3 ; i++){
    int sum = 0;
    for(int j = 0; j<4 ; j++){
      int a;
      cin >> a;
      sum+=a;
    }
    res[i] = sum;
  }

  for(int i = 0; i<3;i++){
    if(res[i] == 0) cout << 'D' << '\n';
    else if(res[i] == 1) cout << 'C' << '\n';
    else if(res[i] == 2) cout << 'B' << '\n';
    else if(res[i] == 3) cout << 'A' << '\n';
    else cout << 'E' << '\n';
  }
  
  return 0;
}