#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

priority_queue<int> maxHeapBackpack;

vector<pair<int, int>> jemInfo; //2차원 배열 -> pair로 수정
int bagInfo[300001];
long long possibleMaxPrice = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	jemInfo.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> jemInfo[i].first >> jemInfo[i].second;
	}

	for (int i = 0; i < K; i++) {
		cin >> bagInfo[i];
	}

	sort(jemInfo.begin(), jemInfo.end()); //주의
	sort(bagInfo, bagInfo + K);

	int idx = 0;
	for (int i = 0; i < K; i++) {
		while (idx < N && jemInfo[idx].first <= bagInfo[i]) {
			maxHeapBackpack.push(jemInfo[idx].second); 
			idx++;
		}
		if (!maxHeapBackpack.empty()) { //주의
			possibleMaxPrice += maxHeapBackpack.top();
			maxHeapBackpack.pop();
		}
	}

	cout << possibleMaxPrice << '\n';
	return 0;
}
