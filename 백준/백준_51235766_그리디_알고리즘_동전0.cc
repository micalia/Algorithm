#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	/*
	int count, min;
	int inputArr[10];
	int smallestCoinCount;
	scanf("%d %d", &count, &min);
	smallestCoinCount = min;	// 가장 적은 갯수의 코인을 1원 * 입력값 개수로 초기화
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputArr[i]);
	}
	
	for (int i = 9; i > 0; i--)
	{
		//가장 큰 가치의 동전부터 계산
		if (inputArr[i] > min) continue;

		int rest = min;// 코인들을 사용하여 나머지가 0인지 체크
		int tempCoinCount = 0;	//이 변수값을 나중에 smallestCointCount에 넣어줄 예정
		for (int j = i; j > 0; j--)
		{
			if (rest < inputArr[j])continue;
			int newCoinCount = 0;
			while (true) {
				tempCoinCount++;
				newCoinCount++; 
				if (rest <= (newCoinCount +1) * inputArr[j]) {
					if ((newCoinCount + 1) * inputArr[j] == rest) {
						tempCoinCount++;
						newCoinCount++;
					}
					// inputArr배열 값 X 코인갯수 값이 최솟값보다 크다면
					// 한단계 작은 가치의 코인을 더해주기 위해 반복문을 빠져나온다.
					rest = rest - newCoinCount * inputArr[j];
					break;
				}		
			}
			if (rest == 0) {
				if (smallestCoinCount>tempCoinCount) {
					smallestCoinCount = tempCoinCount;
				}
				break; // 나머지가 0일 경우 다른코인들도 개수를 확인할 수 있게 반복문 빠져나옴.
			}
		}
	}
	printf("%d", smallestCoinCount);
	*/
	int N, K; scanf("%d %d",&N,&K); //N=동전종류N개
	int arr[10];
	for (int i = 0; i < N; i++)
	{//입력값 역순으로 입력받기
		scanf("%d", arr+N-1-i);
	}
	int cnt = 0;
	for (int i = 0;i < N;i++)
		while (K - arr[i] >= 0) { // 입력값에서 배열값을 뺏을때 양수가 나와야함.
			K -= arr[i];
			cnt++; 
		}
	printf("%d\n",cnt);
	return 0;
}
