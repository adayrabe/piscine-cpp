#include "Logger.hpp"

Logger::Logger(std::string file): _fileName(file)
{
	std::cout << "A new logger has been created" << std::endl;
	return ;
}

Logger::~Logger()
{
	std::cout << "A logger has been destroyed" << std::endl;
	return ;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	size_t i;

	std::string func_names[] = {"logToConsole", "logToFile"};
	void (Logger::*function[])(std::string const str) = 
	{ &Logger::logToConsole, &Logger::logToFile };

	for (i = 0; i < sizeof(func_names) / sizeof(std::string); i++)
		if (!func_names[i].compare(dest))
			break ;
	if (i < sizeof(func_names) / sizeof(std::string))
		(this->*function[i])(this->makeLogEntry(message));
	else
		std::cout << "Wrong function name" << std::endl;
}

void Logger::logToConsole(std::string const str)
{
	std::cout << str;
	return ;
}

void Logger::logToFile(std::string const str)
{
	std::ofstream ofs;
	ofs.open((this->_fileName), std::ios_base::app);
	if (!ofs.good())
	{
		std::cerr << "Error: " << this->_fileName << ": "<< strerror(errno) << std::endl;
		return ;
	}
	ofs << str;
	return ;
}

std::string Logger::makeLogEntry(std::string const str)
{
	time_t		current_time = time(NULL);
	struct tm	*local_t = localtime(&current_time);
	char		time_str[32];
	std::string temp(str);

	strftime(time_str, sizeof(time_str), "[%Y/%m/%d %H:%M:%S] ", local_t);
	temp.insert(0, time_str);
	temp.append("\n");
	return (temp);
}
