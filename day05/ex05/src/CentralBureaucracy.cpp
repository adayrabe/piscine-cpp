//
// Created by Dayrabekov Artem on 2019-04-10.
//

#include "CentralBureaucracy.hpp"
#include <fstream>

CentralBureaucracy::CentralBureaucracy() : _queue(NULL)
{
	for (int i = 0; i < MAX_BLOCKS; ++i)
	{
		Intern *whatever = new Intern();

		_bureaucracy[i].setIntern(*whatever);
	}
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &other)
{
	(void)other;
	return *this;
}

CentralBureaucracy::~CentralBureaucracy()
{
	removeQueue();
}

void CentralBureaucracy::feedSigner(Bureaucrat &bureaucrat)
{
	for (int i = 0; i < MAX_BLOCKS; ++i)
	{
		if (!_bureaucracy[i].getSigner())
		{
			_bureaucracy[i].setSigner(bureaucrat);
			return ;
		}
	}
	std::cout << "There is no more place for signers" << std::endl;
}

void CentralBureaucracy::feedExecutor(Bureaucrat &bureaucrat)
{
	for (int i = 0; i < MAX_BLOCKS; ++i)
	{
		if (!_bureaucracy[i].getExecutor())
		{
			_bureaucracy[i].setExecutor(bureaucrat);
			return ;
		}
	}
	std::cout << "There is no more place for executors" << std::endl;
}

void CentralBureaucracy::doBureaucracy()
{
	t_queue			*temp;
	int				i = 0;
	unsigned char	j;
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	while (_queue)
	{
	    std::cout << "---------------------------------------------------" << std::endl;
		std::ifstream ifs("/dev/random");
		ifs >> j;
		ifs.close();
		j %= 3;
		temp = _queue->next;

		try
		{
			_bureaucracy[i].doBureaucracy(forms[j], _queue->target);
			i = (i + 1) % MAX_BLOCKS;
			delete _queue;
			_queue = temp;
		}
		catch (OfficeBlock::ExecutorGradeTooLowException &e)
		{
		    std::cout << _queue->target << " failed to get " << forms[j] << " because " << e.what() << std::endl;
            delete _queue;
            _queue = temp;
        }
		catch (OfficeBlock::SignerGradeTooLowException &e)
		{
            std::cout << _queue->target << " failed to get " << forms[j] << " because " << e.what() << std::endl;
            delete _queue;
            _queue = temp;
        }
		catch (OfficeBlock::NoSignerException &e)
		{
            std::cout << _queue->target << " failed to get " << forms[j] << " because " << e.what() << std::endl;
            i = (i + 1) % MAX_BLOCKS;
            delete _queue;
            _queue = temp;
        }
		catch  (OfficeBlock::NoExecutorException &e)
		{
            std::cout << _queue->target << " failed to get " << forms[j] << " because " << e.what() << std::endl;
            i = (i + 1) % MAX_BLOCKS;
            delete _queue;
            _queue = temp;
		}
		catch (OfficeBlock::WrongFormNameException &e)
		{
            std::cout << _queue->target << " failed to get " << forms[j] << " because " << e.what() << std::endl;
            delete _queue;
            _queue = temp;
        }

	}
}

void CentralBureaucracy::queueUp(std::string target)
{
	if (!_queue)
	{
		_queue = new t_queue();
		_queue->target = target;
		_queue->next = NULL;
	}
	else
	{
		t_queue *temp = _queue;
		while (temp->next)
			temp = temp->next;
		temp->next = new t_queue();
		temp->next->target = target;
		temp->next->next = NULL;
	}

}

void CentralBureaucracy::removeQueue()
{
	t_queue *temp;
	while (_queue)
	{
		temp = _queue->next;
		delete _queue;
		_queue = temp;
	}
}


