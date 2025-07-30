#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arr[100000];
int length = 100001;


int main()
{
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sum = 0;
	int l = 0, r = 0;
	int canFind = 0;

	while (true) {
		if (sum >= S) {
			canFind = 1;
			length = min(length, r - l);
			sum -= arr[l];
			l++;
		}
		else if (r == N) break;
		else {
			sum += arr[r++];
		}
	}

	if (canFind) cout << length;
	else cout << 0;

	return 0;
}