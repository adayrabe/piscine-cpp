#include <iostream>
#include <fstream>

std::string replace(std::string str, std::string s1, std::string s2, int &pos)
{	

	pos = str.find(s1);
	if (pos == -1 )
		return (str);
	str.replace(pos, s1.length(), s2);
	return (str);
}

void parce(std::string file, std::string s1, std::string s2)
{
	std::ifstream ifs(file);
	std::string str;
	std::string temp;

	temp = file;
	for (size_t i = 0; i < temp.length(); i++)
		temp[i] = toupper(temp[i]);

	int pos;

	if (!ifs.good())
	{
		std::cerr << "Error: " << file << ": "<< strerror(errno) << std::endl;
		return ;
	}	
	std::ofstream ofs (temp + ".replace");
	while (getline(ifs, temp))
		str = str + temp + '\n';
	ifs.close();
	pos = 0;
	while (pos != -1)
		str = replace(str, s1, s2, pos);
	ofs << str;
	ofs.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error - wrong amount of arguments" << std::endl << "\
Usage: ./sed filename to_be_replaced to_replace_with" << std::endl;
		return (1);
	}
	if (!av[2][0])
	{
		std::cerr << "Error - wrong string to_be_replaced, should \
have at least one symbol" << std::endl;
		return (2);
	}
	if (!av[3][0])
	{
		std::cerr << "Error - wrong string to_replace_with, should \
have at least one symbol" << std::endl;
		return (3);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (!s1.compare(s2))
	{
		std::cerr << "Error - to_be_replaced and to_replace_with are identical" << std::endl;
		return (4);
	}
	parce(av[1], s1, s2);
	return (0);
}