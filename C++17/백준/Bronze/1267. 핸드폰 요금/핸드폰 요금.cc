#include<iostream>
#include<algorithm>
using namespace std;

int N;
int times[21];
string plan = "YM";

int yPlanPrice(int time){
  int price = 10;
  int resTime = 0;
 
  if(time >= 30){
    price = (time/30) * 10;
    resTime = time%30;
    price += yPlanPrice(resTime);
  }

  return price;
}

int mPlanPrice(int time){
  int price = 15;
  int resTime = 0;
 
  if(time >= 60){
    price = (time/60) * 15;
    resTime = time%60;
    price += mPlanPrice(resTime);
  }

  return price;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  int sumYPrice = 0;
  int sumMPrice = 0;

  for(int i = 0; i < N ; i++){
    cin >> times[i];
    sumYPrice += yPlanPrice(times[i]);
    sumMPrice += mPlanPrice(times[i]);
  }

  if(sumYPrice == sumMPrice){
    cout << plan[0] << ' ' << plan[1] << ' ' << sumYPrice;
  }else if(sumYPrice < sumMPrice){
    cout << plan[0] << ' ' << sumYPrice;
  }else{
    cout << plan[1] << ' ' << sumMPrice;
  }

  return 0;
}