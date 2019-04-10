
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
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 10);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 25);
//	OfficeBlock ob;
	std::string names[41] = {"Judson", "Priscilla", "Annamarie", "Stephane", "Margrett", "Donny", "Brianna",
						   "Catheryn", "Majorie", "Keva", "Ashli", "Mckinley", "Virgen", "Ivonne", "Ha", "Lyndsay",
						   "Kaycee", "Jeane", "Agnes", "Dion", "Ellsworth", "Lory", "Jenice", "Quincy", "Carline",
						   "Clifford", "Shauna", "Amos", "Vinita", "Adolph", "Rick", "Alissa", "Clotilde", "Cindi",
						   "Bernita", "Sylvia", "Renetta", "Temika", "Jeanette", "Janita", "Leandro"};

	std::cout << "Testing with incomplete bureaucracy" << std::endl;
	CentralBureaucracy cb;
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	for (int i = 0; i < sizeof(names) / sizeof(std::string); ++i)
	{
		cb.queueUp(names[i]);
	}
	cb.doBureaucracy();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "********************************************************************" << std::endl;

	std::cout << "====================================================================" << std::endl;
	std::cout << "********************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "Testing with complete bureaucracy" << std::endl;

	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);
	cb.feedExecutor(hermes);
	cb.feedSigner(bob);

	for (int i = 0; i < sizeof(names) / sizeof(std::string); ++i)
	{
		cb.queueUp(names[i]);
	}
	cb.doBureaucracy();
	return 0;
}