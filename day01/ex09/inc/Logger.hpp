#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#include <string>
#include <fstream>

class Logger
{
	public:

		Logger(std::string file);
		~Logger();
		void log(std::string const &dest, std::string const &message);

	private:

		void logToConsole(std::string const str);
		void logToFile(std::string const str);
		std::string _fileName;
		std::string makeLogEntry(std::string const str);
};

#endif
