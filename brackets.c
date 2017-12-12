#include <unistd.h>

void 	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_count(char *str)
{
char g_b[1000];
int c;
int n;
while(*(str+n))
{
	if (str[n] == '('|| str[n] == '{' || str[n] == '[')
	{
	g_b[c] = str[n];
	c++;
	}
	if (*(str + n) == ')')
	{
	if (g_b[c-1]== '(')
		c--;
	else
		return 0;
	}
	if (*(str + n) == ']')
	{
	if (g_b[c-1]== '[')
		c--;
	else
		return 0;
	}
	if (*(str + n) == '}')
	{
	if (g_b[c-1]== '{')
		c--;
	else
		return 0;
	}
	n++;
}
if(c)
	return(0);
return(1);
}

int main(int argc, char **argv)
{
	int n = 0;
	if (argc < 2 )
	   ft_putstr("\n");
	while (*(argv + ++n))
		{
			if (ft_count(*(argv + n)))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
		}	
}
