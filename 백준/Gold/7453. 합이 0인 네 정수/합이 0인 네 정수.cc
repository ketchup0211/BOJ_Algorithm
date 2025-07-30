#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// BOJ 7453 NlogN

int a[4000], b[4000], c[4000], d[4000];
int N;
long long ab[16000000], cd[16000000];

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	
	int idx = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ab[idx] = (long long)(a[i] + b[j]);
			cd[idx] = (long long)(c[i] + d[j]);
			idx++;
		}
	}

	sort(ab, ab + idx);
	sort(cd, cd + idx);

	long long cnt = 0;
	for (int i = 0; i < idx; i++) {
		long long num = ab[i];
		int lb = lower_bound(cd, cd + idx, -num) - cd;
		int ub = upper_bound(cd, cd + idx, -num) -cd;
		cnt += ub - lb;
	}

	cout << cnt;
	return 0;
}