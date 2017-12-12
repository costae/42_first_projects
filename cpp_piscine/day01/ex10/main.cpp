#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <fstream>

bool exists(std::string name)
{
	std::ifstream f(name.c_str());
	return f.good();
}

int main(int argc, char **argv)
{
	std::string temp = "";
	if (argc == 1)
	{
		while (1)
		{
			std::cin >> temp ;
			std::cout << temp << std::endl;
		}
	}	
	else
	{
		for(int i = 1; i < argc; i++)
		{
			if(exists(argv[i]))
			{
				std::ifstream ifs (argv[i], std::ifstream::in);

				char c = ifs.get();

				while(ifs.good())
				{
					std::cout << c;
					c = ifs.get();
				}
				ifs.close();
			}
			else
			{
				std::cout << argv[i];
			}
		}
	
	}	
}
