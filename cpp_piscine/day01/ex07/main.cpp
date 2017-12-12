#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <fstream>

void ft_error(int code)
{
	switch(code)
	{
		case 1:
			std::cout << "Bad arguments" << std::endl;
			break;
		case 2:
			std::cout << "String 1 is empty" << std::endl;
			break;
		case 3:
			std::cout << "String 2 is empty" << std::endl;
			break;
		case 4:
			std::cout << "Such file doesn't exist" << std::endl;
			break;
	}
	exit(0);
}

bool exists(std::string name)
{
	std::ifstream f(name.c_str());
	return f.good();
}

void replaceAll(std::string &s, const std::string &search, const std::string &replace)
{
	for(size_t pos=0; ; pos+=replace.length())
	{
		pos = s.find(search, pos);
		if(pos == std::string::npos)
			break;
		s.erase(pos, search.length());
		s.insert(pos, replace);
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		ft_error(1);
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string temp = "";
	if(s1.empty())
		ft_error(2);
	if(s2.empty())
		ft_error(3);
	if(!exists(filename))
		ft_error(4);

	std::ifstream ifs (filename, std::ifstream::in);

	char c = ifs.get();

	while(ifs.good())
	{
		// std::cout << c;
		temp+=c;
		c = ifs.get();
	}
	ifs.close();
	replaceAll(temp, s1, s2);

	std::ofstream ofs(filename+".replace", std::ofstream::out);

	ofs << temp;
	ofs.close();
}