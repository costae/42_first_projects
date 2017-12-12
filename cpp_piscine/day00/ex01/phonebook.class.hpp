#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include <iostream>

class phonebook {
	
	public:
		phonebook(void);
		~phonebook(void);
		void	push(std::string lol[]);
		void	search(void);
		void	exit(void);
		void	printfcic(std::string str);
		void	printContent(int num);
};
#endif