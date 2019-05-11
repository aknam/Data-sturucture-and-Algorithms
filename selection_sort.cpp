#include<iostream>
using namespace std;
void SelectionSort(int A[], int n)
{
	// n-2 passes for whole array to get sorted
	for (int i = 0; i < n - 1; i++)
	{
		int iMin = i;
		//n-1 passes
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[iMin])
				iMin = j;
		}
		// swapping the index with smallest element that is iMin
		int temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}
int main()
{
	int A[] = { 2,7,4,1,5,3 };
	SelectionSort(A, 6);
	for (int i = 0; i < 6; i++)
		cout << A[i] << " ";
}