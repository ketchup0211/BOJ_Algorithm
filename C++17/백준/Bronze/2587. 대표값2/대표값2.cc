#include<iostream>
#include<algorithm>
using namespace std;

int nums[6];
int sum = 0;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0; i< 5;i++){
    cin >> nums[i];
    sum += nums[i];
  }
  sort(nums, nums+5);
  cout << sum/5 << '\n' << nums[2];

  return 0;
}