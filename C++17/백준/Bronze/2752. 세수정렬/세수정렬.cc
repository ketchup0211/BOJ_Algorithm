#include<iostream>
#include<algorithm>
using namespace std;

int nums[4];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for(int i = 0; i < 3; i++) cin >> nums[i];
  sort(nums, nums+3);

  for(int i = 0; i < 3; i++) cout << nums[i] << " ";
  
  return 0;
}