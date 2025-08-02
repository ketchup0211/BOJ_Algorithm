#include<iostream>
#include<algorithm>
using namespace std;

int heights[10];
int noNanjaengIdx[3];
int sum = 0;
int key = 0;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for(int i = 0; i< 9; i++){
    cin >> heights[i];
    sum += heights[i];
  }
  
  sort(heights, heights+9);

  //두 난쟁이 키의 합
  key = sum - 100;
  for(int i = 0; i <9; i++){
    for(int j = 0; j<9;j++){
      if(i!=j && key == heights[i]+heights[j]){
        noNanjaengIdx[0] = i;
        noNanjaengIdx[1] = j;
      }
    }
  }

  for(int i =0;i<9;i++){
    if(i!=noNanjaengIdx[0] && i!= noNanjaengIdx[1]){
      cout << heights[i] << '\n';
    }
  }
  return 0;
}