#include <stdio.h>


void reverse_sub(char* arr, int start, int end)
{
	for (int i = 0; i < end-start-i; i++)
	{
		arr[start+i] += arr[end-i];
		arr[end-i] = arr[start+i] - arr[end-i];
		arr[start+i] -= arr[end-i];
	}
}

void reverse(char* arr, int size)
{
	reverse_sub(arr, 0, size-1);
	arr[size] = '\0';
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

	char arr3[] = "This word is reversed";
	
	printf("%s\t", arr3);
	reverse_sub(arr3, 5, 8);
	printf("%s\n", arr3);

}
