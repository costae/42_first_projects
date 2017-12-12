#include <iostream>
#include <ctype.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			j = 0;
			while(argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}