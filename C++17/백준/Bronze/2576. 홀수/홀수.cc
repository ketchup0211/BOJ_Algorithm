#include<iostream>
#include<algorithm>
using namespace std;

int nums[8];
int minVal=0;
int sum = 0;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0 ; i < 7 ; i ++){
    cin >> nums[i];
  }

  sort(nums, nums+7);
  for(int i = 0 ; i < 7 ; i ++){
    if(nums[i]%2!=0){
      sum += nums[i];
      if(minVal == 0) minVal = nums[i];
    }
  }

  if (sum != 0) {
    cout << sum << '\n';
    cout << minVal;
  }
  else cout << -1;

  return 0;
}