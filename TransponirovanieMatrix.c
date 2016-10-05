
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
int a[100][100];
int  i, j, b, s, t, max;
scanf("%d %d", &s, &t);

for ( i = 0; i < 100; i ++ ) 
{
	for ( j = 0; j < 100; j ++ ) 
	{
		a[i][j] = 0;
	}
}

for ( i = 0; i < t; i ++ ) 
{
	for ( j = 0; j < s; j ++ ) 
	{
		scanf ("%d", & a[i][j]);
	}
}

for ( i = 0; i < t; i ++ ) 
{
	for ( j = 0; j < s; j ++ )
	{
		printf("%d ", a[i][j]);
	}
	printf("\n");
}

if (t<s) 
{
	max = s;
}
else 
{
	max = t;
}	

for(i = 0; i < max; i++)
{
    for(j = i; j < max; j++)
    {
		b = a[j][i];
		a[j][i] = a[i][j];
		a[i][j] = b;
	}
}

for ( i = 0; i < s; i ++ ) 
{
	for ( j = 0; j < t; j ++ )
	{
		printf ( "%d ", a[i][j] );
	}
	printf("\n");
}

return 0;
}