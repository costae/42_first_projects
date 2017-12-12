#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	static char list[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	Data *ret = new Data();
	for(int i=0; i<8; i++)
		ret->s1 += list[rand() % sizeof(list)];
	ret->n = rand() % 100;
	for(int i=0; i<8; i++)
		ret->s2 += list[rand() % sizeof(list)];
	return ret;
}

Data *deserialize(void *raw)
{
	Data *ret = reinterpret_cast<Data*>(raw);
	return ret;
}

int main()
{
	srand(time(NULL));

	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "String s1: " << data->s1 << std::endl;
	std::cout << "Int: " << data->n << std::endl;
	std::cout << "String s2: " << data->s2 << std::endl;

	delete data;
	return 0;
}