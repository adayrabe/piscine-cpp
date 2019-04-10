
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

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
//	OfficeBlock ob;
	std::string names[10] = {"Judson", "Priscilla", "Annamarie", "Stephane", "Margrett", "Donny", "Brianna",
						   "Catheryn", "Majorie", "Keva"};

	CentralBureaucracy cb;
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	for (int i = 0; i < sizeof(names) / sizeof(std::string); ++i)
	{
		cb.queueUp(names[i]);
	}
	cb.doBureaucracy();
	return 0;
}