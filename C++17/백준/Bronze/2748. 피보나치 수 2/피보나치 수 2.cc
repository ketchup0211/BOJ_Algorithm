#include<iostream>
using namespace std;
    
long long fibonacci(int num){
    if(num == 0 || num == 1) return num;
    
    long long prev = 0, curr = 1;
    for(int i = 2;i<=num;i++){
      long long next = prev+curr;
      prev = curr;
      curr = next;
    }
    return curr;
}

int main(){
    std::cin.tie();
    ios::sync_with_stdio(0);
    
    int num;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}