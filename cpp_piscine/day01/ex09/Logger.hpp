#ifndef LOGGER_H
# define LOGGER_H

#include <time.h>
#include <iostream>
#include <fstream>
class Logger
{
private:
	void logToConsole(std::string const &str);
	void logToFile(std::string const &str);
	std::string makeLogEntry(std::string const &str);
public:
	Logger();
	Logger(std::string const &filename);
	~Logger();
	void log(std::string const &dest, std::string const &message);
	std::string filename;
};

#endif