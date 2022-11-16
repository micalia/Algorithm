#include <iostream>
#include <vector>
using namespace std;

int main() {
	int val = 0;
	
	while (val < 1 || val >1000) {
		cin >> val;
		if (val >= 1 && val <= 1000) break;
	}

	//입력
	vector<int> arr;
	for (int i = 1;i <= val;i++) {
		int pushVal;
		cin >> pushVal;
		arr.push_back(pushVal);
	}

	//버블정렬
	for (int j = 0; j < val;j++)
	{
		for (int i = 0; i < val-1; i++)
		{
			if (arr[i] > arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	//출력
	for (int i = 0; i < val; i++)
	{
		cout<<arr[i]<<endl;
	}
}