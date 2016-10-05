#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() 
{
	int x1, x2, x3, x0, y1, y2, y3, y0, pr12, pr23, pr31, a=1, minx, miny, maxx, maxy;
	scanf_s("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x0, &y0); 
	
	if (x1 == x2) 
	    {                                                      
		if(((x0 <= x1)&&(x3 > x1))||((x0 >= x1)&&(x3 < x1)))
		{
			res = 0;
		}
	}
	else 
	{
		if (x1 > x2)
		    {
			pr12 = (y2 - y1) / (x2 - x1);
			if ((((x1 + pr12 * (x3 - x1)) > y3)&&((x1 + pr12 * (x0 - x1)) <= y0))||(((x1 + pr12 * (x3 - x1)) < y3)&&((x1 + pr12 * (x0 - x1)) >= y0)))
			{
				res = 0;
			}
		}
		else 
		    {
			pr12 = (y1 - y2) / (x1 - x2);
			if (((x2 + pr12 * (x3 - x2) > y3)&&(x2 + pr12 * (x0 - x2) <= y0)) || ((x2 + pr12 * (x3 - x2) < y3)&&(x2 + pr12 * (x0 - x2) >= y0))){
				res = 0;
			}
		}
	}

    if (x1 == x3) 
        {                                                      
		if(((x0 <= x1)&&(x2 > x1))||((x0 >= x1)&&(x2 < x1)))
		{
			res = 0;
		}
	}
	else 
	    {
		if (x3 > x1)
		    {
			pr31 = (y3 - y1) / (x3 - x1);
			if (((x1 + pr31 * (x2 - x1) > y2)&&(x1 + pr31 * (x0 - x1) <= y0)) || ((x1 + pr31 * (x2 - x1) < y2)&&(x1 + pr31 * (x0 - x1) >= y0)))
			{
				res = 0;
			}
		}
		else 
		    {
			pr31 =(y1 - y3) /(x1 - x3);
			if (((x3 + pr31 * (x2 - x3) > y2)&&(x3 + pr31 * (x0 - x3) <= y0)) || ((x3 + pr31 * (x2 - x3) < y2)&&(x3 + pr31 * (x0 - x3) >= y0)))
			{
				res = 0;
			}
		}
	}

	if (x2 == x3) 
	    {                                                      
		if(((x0 <= x3)&&(x1 > x3))||((x0 >= x3)&&(x1 < x3)))
		{
			res = 0;
		}
	}
	else {
		if (x2 > x3)
		    {
			pr23 = (y3 - y2) / (x3 - x2);
			if (((x2 + pr23 * (x1 - x2) > y1)&&(x2 + pr23 * (x0 - x2) <= y0)) || ((x2 + pr23 * (x1 - x2) < y1)&&(x2 + pr23 * (x0 - x2) >= y0)))
			{
				res = 0;
			}
		}
		else 
		    {
			pr23 = (y2 - y3) / (x2 - x3);
			if (((x3 + pr23 * (x1 - x3) > y1)&&(x3 + pr23 * (x0 - x3) <= y0)) || ((x3 + pr23 * (x1 - x3) < y1)&&(x3 + pr23 * (x0 - x3) >= y0)))
			{
				res = 0;
			}
		}
	}

	if(a == 0) printf("NO");
	else printf("yES");
	return 0; 
}