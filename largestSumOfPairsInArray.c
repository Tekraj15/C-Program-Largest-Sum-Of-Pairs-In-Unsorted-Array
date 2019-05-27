/*Given an unsorted array. 
To find the largest pair sum of array elements in C Program

Sample Input: 
size of array: 6
array elements =18 23 56 3 9 12

Sample Output: 
79
*/

#include<stdio.h>
int findLargestSum(int arr[], int n)
{
	int first, sec;
	if(arr[0] > arr[1])
	{
		first=arr[0];
		sec=arr[1];
		
	}
	else
	{
		first=arr[1];
		sec=arr[0];
	}
	
	for(int i=2; i<n; i++)
	{
		if(arr[i] > first)
		{
			first=arr[i];
		}
		
	}
	//to check back whether arr[0] (if arr[0] was assigned to first) or arr[1] ( if arr[1] was assigned to first) might be greater than sec or not.
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] > sec && arr[i] < first 
		)
		{
			sec=arr[i];
		}
		
	}
	
	return first+sec;
}

int main()
{
	int arr[100], n,i;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d", findLargestSum(arr, n));
	return 0;
}
