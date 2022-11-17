#include <iostream>
using namespace std;
#include <vector>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b,&c);

	vector<int> arr;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);

	for (int j = 0; j < 3 - 1; j++) {
		for (int i=0;i<3-1;i++)
		{
			if (arr[i] < arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

		printf("%d\n", arr[1]);
	
}