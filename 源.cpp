#include <iostream>
int partition(int A[], int s, int t)
{
	int i = s, j = t;
	int tmp=A[i];
	while (i < j)
	{
		while (j > i && A[j] > tmp)
			j--;
		A[i] = A[j];
		while (i < j && A[i] <= tmp)
			i++;
		A[j] = A[i];
	}
	A[i] = tmp;
	return i;
}
void QuickSort(int A[], int s, int t)
{
	int i;
	if (s < t)
	{
		i = partition(A, s, t);
		QuickSort(A, s, i - 1);
		QuickSort(A, i + 1, t);
	}
}
int main()
{
	int A[] = { 5,4,3,6,1 };
	QuickSort(A, 0, 4);
	for (int i = 0; i < 5; i++)
		printf("%d ", A[i]);
}