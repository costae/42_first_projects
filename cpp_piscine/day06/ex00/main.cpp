/*
bool isChar(string);

bool isInt(string);

bool isDouble(string)

bool isFloat(string);

*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>

bool isChar(std::string str)
{
	if (str.length() != 1)
		return false;
	if (str[0] >= '0' && str[0] <= '9')
		return false;
	if (!isprint(str[0]))
		return false;
	return true;
}

bool isInt(std::string str)
{
	unsigned long i = 0;
	if(str[0] == '-')
		++i;
	for (; i<str.length(); i++)
		if(str[i] < '0' || str[i] > '9')
			return false;
	return true;
}

bool printDoubleSpecials(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return false;
}

bool isDouble(std::string str)
{
	unsigned long i = 0;
	char nrMinus = 0;
	std::string special[3] = {"-inf", "+inf", "nan"};
	for(int i=0; i<3; i++)
		if(str == special[i])
			return printDoubleSpecials(str);
	if(str[0] == '-')
		++i;
	for(; i<str.length(); i++)
	{
		if(str[i] == '.')
		{
			if(nrMinus)
				return false;
			else
				nrMinus++;
			continue ;
		}
		if(str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}

bool printFloatSpecials(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: ";
	for(unsigned long i=0; i< (str.length() - 1); i++)
		std::cout << str[i];
	std::cout << std::endl;
	return false;
}

bool isFloat(std::string str)
{
	unsigned long i = 0;
	char nrMinus = 0;
	std::string special[3] = {"-inff", "+inff", "nanf"};
	for(int i=0; i<3; i++)
		if(str == special[i])
			return printFloatSpecials(str);
	if(str[0] == '-')
		++i;
	for(; i<(str.length() - 1); i++)
	{
		if(str[i] == '.')
		{
			if(nrMinus)
				return false;
			else
				nrMinus++;
			continue ;
		}
		if(str[i] < '0' || str[i] > '9')
			return false;
	}
	if (str[i] != 'f')
		return false;
	return true;
}

void printChar(char a)
{
	std::cout << "char: ";
		if(isprint(static_cast<int>(a)))
			std::cout << static_cast<char>(a);
		else
			std::cout << "non-print";
	std::cout << std::endl;
	std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "float: " << static_cast<float>(a) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
}

void printInt(int a)
{
	std::cout << "char: ";
		if(isprint(static_cast<int>(a)))
			std::cout << static_cast<char>(a);
		else
			std::cout << "non-print";
	std::cout << std::endl;
	std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "float: " << static_cast<float>(a) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
}

void printDouble(double a)
{
	std::cout << "char: ";
		if(isprint(static_cast<int>(a)))
			std::cout << static_cast<char>(a);
		else
			std::cout << "non-print";
	std::cout << std::endl;
	std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(a) << std::endl;
}
void printFloat(float a)
{
	std::cout << "char: ";
		if(isprint(static_cast<int>(a)))
			std::cout << static_cast<char>(a);
		else
			std::cout << "non-print";
	std::cout << std::endl;
	std::cout << "int: " << static_cast<int>(a) << std::endl;
	std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(a) << std::endl;
}

int main(int argc, char **argv)
{
	std::string type = "";
	char a;
	int b;
	double c;
	float d;


	if (argc != 2)
		return 0;
	if (isChar(argv[1]))
		a = argv[1][0], type="char";
	else if(isInt(argv[1]))
		b = std::stoi(argv[1], NULL), type="int";
	else if(isDouble(argv[1]))
		c = std::stod(argv[1], NULL), type="double";
	else if(isFloat(argv[1]))
		d = std::stof(argv[1], NULL), type="float";
	else
		return 0;
	if(type == "char")
		printChar(a);
	else if(type == "int")
		printInt(b);
	else if(type == "double")
		printDouble(c);
	else
		printFloat(d);
}