//
// Created by Dayrabekov Artem on 2019-04-09.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <errno.h>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, "Shrubbery Creation")
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form (other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	Form::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(145, 137, "Shrubbery Creation", target)
{

}

void ShrubberyCreationForm::action() const
{
	std::string		file = getTarget() + "_shrubbery";
	std::ofstream	fs(file);
	if (!fs)
	{
		std::cerr << "Error - " << strerror(errno) << std::endl;
		return ;
	}
	std::cout << "Making a tree..." << std::endl;
	fs << "            _{\\ _{\\{\\/}/}/}__\n"
	"             {/{/\\}{/{/\\}(\\}{/\\} _\n"
	"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
	"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
	"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
	"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
	"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
	"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
	"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
	"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
	"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
	"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
	"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
	"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
	"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
	"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
	"             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
	"              {){/ {\\/}{\\/} \\}\\}\n"
	"              (_)  \\.-'.-/\n"
	"          __...--- |'-.-'| --...__\n"
	"   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
	" -\"    ' .  . '    |.'-._| '  . .  '   \n"
	" .  '-  '    .--'  | '-.'|    .  '  . '\n"
	"          ' ..     |'-_.-|\n"
	"  .  '  .       _.-|-._ -|-._  .  '  .\n"
	"              .'   |'- .-|   '.\n"
	"  ..-'   ' .  '.   `-._.-ґ   .'  '  - .\n"
	"   .-' '        '-._______.-'     '  .\n"
	"        .      ~,\n"
	"    .       .   |\\   .    ' '-.";
	fs.close();
}
