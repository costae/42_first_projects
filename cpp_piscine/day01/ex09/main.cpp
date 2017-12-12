#include "Logger.hpp"

int main(int argc, char **argv)
{
	if(argc > 2)
	{
		std::cout << "Too many arguments (Only one for filename)" << std::endl;
		return 0;
	}
	Logger *logger;
	if(argc == 1)
		logger = new Logger();
	else
		logger = new Logger(argv[1]);
	logger->log("console", "Hello");
	logger->log("file", "Bye!");
	delete logger;
}