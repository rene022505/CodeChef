#define _CRT_SECURE_NO_WARNINGS

#include "./../Mothership.h"

#include <iostream>


void tsort() {
	int T, N, temp;
	scanf("%d", &T);
	temp = T;
	int* arr = new int[T];
	while (T--) {
		scanf("%d", &N);
		arr[T] = N;
	}
	for (int i = 0; i < temp; i++)
		printf("%d\n", arr[i]);
}