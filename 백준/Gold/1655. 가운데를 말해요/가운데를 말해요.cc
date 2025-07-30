#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> leftHeap; // 최대 힙 (중간 이하)
priority_queue<int, vector<int>, greater<int>> rightHeap; // 최소 힙 (중간 초과)

int main() {
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		leftHeap.push(num);

		if (!rightHeap.empty() && leftHeap.top() > rightHeap.top()) {
			int leftTop = leftHeap.top(); leftHeap.pop();
			int rightTop = rightHeap.top(); rightHeap.pop();
			leftHeap.push(rightTop);
			rightHeap.push(leftTop);
		}

		if (leftHeap.size() > rightHeap.size() + 1) {
			rightHeap.push(leftHeap.top());
			leftHeap.pop();
		}

		cout << leftHeap.top() << '\n';
	}

	return 0;
}
