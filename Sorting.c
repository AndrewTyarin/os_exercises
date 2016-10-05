#include <stdio.h>
int main(){
	int a[1000], i, j, min, n, bufferfer, number;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d,",&a[i]);
	}
	min = a[n-1];
	number = n-1;
	for (i = 0; i < n-1; i++)
	    {
		for (j = i; j < n; j++)
		    {
			if (a[j] < min) 
			{
				min = a[j];
				number = j;
			}
		}
	buffer = a[i];
	a[i] = min;
	a[number] = buffer;
	min = a[n-1];
	number = n-1;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d, ",a[i]);
	}
	return(0);
}