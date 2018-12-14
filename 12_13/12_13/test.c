#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr1[6] = { 1, 2, 3, 0, 0, 0 };
	int arr2[3] = { 1, 2, 3 };
	int i = 3;
	int j = 0;
	while (j<3)
	{
		arr1[i] = arr2[j];
		i++;
		j++;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	system("pause");
	return 0;
}