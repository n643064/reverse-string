#include <stdio.h>

void reverse(char* arr, int size)
{
	size = size - 1;
	for (int i = 0; i < size-i; i++)
	{
		arr[i] = arr[i] + arr[size-i];
		arr[size-i] = arr[i] - arr[size-i];
		arr[i] = arr[i] - arr[size-i];
	}
	arr[size+1] = '\0';
}


int main()
{

	char arr1[] = "abcdefghi";

	printf("%s\t", arr1);
	reverse(arr1, 9);
	printf("%s\n", arr1);

	char arr2[] = "Hello World!";
	
	printf("%s\t", arr2);
	reverse(arr2, 12);
	printf("%s\n", arr2);
	
}
