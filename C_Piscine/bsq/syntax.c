if (ac == 1)
	fd =  0;
else



int		check(char *g_a)
{
	if ((*g_a != obs) && (*g_a != vid) && (*g_a != '\0'))
	{
		return (0);
		write (1, "map error\n", 10);
	}
	else
	{
		return (1);
	}
}
