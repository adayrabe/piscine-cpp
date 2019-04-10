
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

void tryCatch(OfficeBlock &ob, std::string formName, std::string targetName)
{
	try
	{
		ob.doBureaucracy(formName, targetName);
	}
	catch (OfficeBlock::WrongFormNameException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecutorGradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerGradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecutorException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main() {

	Intern      idiotOne;
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 25);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;


	std::cout << "Failed attempts:" << std::endl;
	std::cout << "==============================================" << std::endl;
	std::cout << "1) Somebody is not in place" << std::endl;
	tryCatch(ob, "Form", "Target");

	ob.setIntern(idiotOne);
	tryCatch(ob, "Form", "Target");

	ob.setSigner(bob);
	tryCatch(ob, "Form", "Target");

	ob.setExecutor(hermes);
	tryCatch(ob, "Form", "Target");

	std::cout << "==============================================" << std::endl;
	std::cout << "2) Grades that are too low" << std::endl;
	tryCatch(ob, "presidential pardon", "Target");
	ob.setSigner(hermes);
	tryCatch(ob, "presidential pardon", "Target");

	std::cout << "==============================================" << std::endl;
	std::cout << "2) Grades that are too low" << std::endl;
	tryCatch(ob, "presidential pardon", "Target");
	ob.setSigner(hermes);
	std::cout << "==============================================" << std::endl;
	std::cout << "Successfull tests:" << std::endl;
	tryCatch(ob, "robotomy request", "Target");
	std::cout << "----------------------------------------------" << std::endl;

	tryCatch(ob, "shruBBery Creation", "Target");
	return 0;
}