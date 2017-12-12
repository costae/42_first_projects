#include "Logger.hpp"

Logger::Logger()
{
	this->filename = "output";
	return;
}

Logger::Logger(std::string const &filename)
{
	this->filename = filename;
}

Logger::~Logger()
{
	return;
}

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

std::string Logger::makeLogEntry(std::string const &str)
{
	std::string logging = "Log from : "+currentDateTime()+"\n"+
	"************\n"+str+"\n\n";
	return logging;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string arr[2] = {"console", "file"};
	void(Logger::*arrayPtrFctn[2])(std::string const & str) = {
		&Logger::logToConsole,
		&Logger::logToFile,
	};

	for (int i = 0; i < 2; i++)
	{
		if (arr[i].compare(dest) == 0)
			(this->*arrayPtrFctn[i])(makeLogEntry(message));
	}
}

void Logger::logToConsole(std::string const &str)
{
	std::cout << str;
}

void Logger::logToFile(std::string const &str)
{
	std::ofstream ofs;
	ofs.open (this->filename, std::ofstream::out | std::ofstream::app);

	ofs << str;
	ofs.close();
}