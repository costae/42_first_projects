static void rec(long n, int base, char *str, int *i)
{

	if (n == 0)
		return;
	rec(n/base, base, str, i);
	str[(*i)++]="0123456789ABCDEF"[n%base*(1- 2*(n < 0))];
}

char *ft_itoabase(unsigned long int v, int b)
{
	char *str = (char *)malloc(sizeof(char)*64);
	int i = 0;
	if (v == 0)
		str[i++]= '0';
	if (v  < 0 && b == 10)
		str[i++] = '-';
	rec(v, b, str, &i);
	str[i]= '\0';
	return (str);
