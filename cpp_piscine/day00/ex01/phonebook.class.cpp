#include <iostream>
#include <string>
#include "phonebook.class.hpp"



int i = 0;
std::string pbook[9][12];
int ind = 0;
int j = 0;

phonebook::phonebook(void){return;}
phonebook::~phonebook(void){return;}

void phonebook::printfcic(std::string str)
{
	int i = 0;
	int j = 0;
	if (str.length() < 10)
	{
		i = 10 -str.length();
		std::cout << str;
		while (j < i)
		{
			std::cout<< " ";
			j++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	return ;
}

void phonebook::printContent(int num)
{
	if ((num >= 0) && (num < i))
	{
		std::cout << "First Name: " << pbook[num][0] << std::endl; 
		std::cout << "Last Name: " << pbook[num][1] << std::endl;
		std::cout << "Nickname: " << pbook[num][2] << std::endl;  
		std::cout << "Login: " << pbook[num][3] << std::endl;
		std::cout << "Post Address: " << pbook[num][4] << std::endl;
		std::cout << "Email Address: " << pbook[num][5] << std::endl;
		std::cout << "Phone Number: " << pbook[num][6] << std::endl;
		std::cout << "Birthday: " << pbook[num][7] << std::endl;
		std::cout << "Favorite Meal: " << pbook[num][8] << std::endl; 
		std::cout << "Color of Underwear: " << pbook[num][9] << std::endl;
		std::cout << "Darkest Secret: " << pbook[num][10] << std::endl;
	}
	else
	{
		std::cout << "You entered a wrong number!" << std::endl;
	}
	return;       
}

void phonebook::push(std::string lol[])
{
	if (i < 8)
	{
		j = 0;
		while (j < 11)
		{
			pbook[i][j] = lol[j];
			j++;
		}
		i++;
		std::cout << "The contact was added successfully" << std::endl;
	}
	else
	{
		std::cout << "The Phonebook is full!" << std::endl;
	}
	return ;
}

void phonebook::search(void)
{
	ind = 0;

	while (ind < i)
	{
		std::cout << ind+1 << "         |";
		printfcic(pbook[ind][0]);
		std::cout << "|";
		printfcic(pbook[ind][1]);
		std::cout << "|";
		printfcic(pbook[ind][2]);
		std::cout << "|" << std::endl;
		ind++;
	}
	return ;
}

void phonebook::exit(void)
{
	while(ind <= i)
	{
		j = 0;
		while (j < 11)
		{
			pbook[ind][j] = "";
			j++;
		}
		ind++;
	}
	std::cout << "The Phonebook is Empty!" << std::endl;
	return;

}

