#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main() {
	int n;
	int arr[100000] = {};
	scanf("%d", &n);
	priority_queue<int> pq;

	for (int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0) {
			pq.push(arr[i]);
		}
		if (arr[i] == 0) {
			if (!pq.empty()) {
				int value = pq.top();
				pq.pop();
				printf("%d\n", value);
			}
			else {
				printf("0\n");
			}
		}	
	}

	return 0;
}