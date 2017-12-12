#include <stdio.h>
#include <stdlib.h>
int 	main()
{
	int *bilet;
	int *bilet2;
	int n;
	int i;
	int m;
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;

	a=0;
	n=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	g=0;
	h=0;
	i=0;
	m=0;
	n = 100000;
	bilet = (int *)malloc(sizeof(int)*1000000);
	bilet2 = bilet;
	while (n < 1000000)
	{
		*bilet = n;
		bilet++;
		n++;
	}
	while (*bilet != 0)
	{
		m = *bilet;
		a = m / 100000;
		m = m - (a * 100000);
		b = m / 10000;
		m = m - (b * 10000);
		c = m / 1000;
		m = m - (c * 1000);
		d = m / 100;
		m = m - (d * 100);
		e = m / 10;
		m = m - (e * 10);
		f = m;
		g = a + b + c;
		h = d + e + f;
		if (i == 1)
		{
			m = i;
			if (g == h) 
				i = 1;

			else
				i = 0;
			if (i == m)
			{
				printf("Exista");
			}
		}
		else 
		{
			if (g == h)
				i = 1;
			else
				i = 0;
		}
		bilet++;
	}
}
