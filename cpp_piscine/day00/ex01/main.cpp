#include <string>
#include <iostream>
#include "phonebook.class.hpp"

int		main(int argc, char** argv)
{
	phonebook phonebook;
	std::string add("ADD");
	std::string search("SEARCH");
	std::string exit("EXIT");
	std::string lol[11];
	if (argc>1)
	{
		std::string lel = argv[1];
		while (true)
		{
			if (!add.compare(lel))
			{
				// std::cout << "ADD"<< std::endl;
				std::cout << "First Name: "; 
				std::cin >> lol[0];
				std::cout << std::endl;
				std::cout << "Last Name: "; 
				std::cin >> lol[1];
				std::cout << std::endl;
				std::cout << "Nickname: "; 
				std::cin >> lol[2];
				std::cout << std::endl;
				std::cout << "Login: "; 
				std::cin >> lol[3];
				std::cout << std::endl;
				std::cout << "Post Address: "; 
				std::cin >> lol[4];
				std::cout << std::endl;
				std::cout << "Email Adress: "; 
				std::cin >> lol[5];
				std::cout << std::endl;
				std::cout << "Phone Number: "; 
				std::cin >> lol[6];
				std::cout << std::endl;
				std::cout << "Birthday: "; 
				std::cin >> lol[7];
				std::cout << std::endl;
				std::cout << "Favorite meal: "; 
				std::cin >> lol[8];
				std::cout << std::endl;
				std::cout << "Color of underwear: "; 
				std::cin >> lol[9];
				std::cout << std::endl;
				std::cout << "Darkest secret: "; 
				std::cin >> lol[10];
				std::cout << std::endl;
				phonebook.push(lol);
				// continue;
			}
			else if (!search.compare(lel))
			{
				// std::cout << "SEARCH"<< std::endl;
				phonebook.search();
				// continue;
			}
			else if ((lel[0] >= '1') && (lel[0] <= '8') && lel.length() == 1)
			{
				int s;

				s = (int)lel[0] - 48;
				phonebook.printContent(s-1);

			}
			else if (!exit.compare(lel))
			{
				// std::cout << "EXIT"<< std::endl;
				phonebook.exit();
				break;
			}
			else 
			{
				std::cout << "Your argument is invalid"<< std::endl;
			}
			std::cin >> lel;
		}
	}
	else
	{
		std::cout << "You forgot your argument"<< std::endl;
	}
}