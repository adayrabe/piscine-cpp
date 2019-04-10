//
// Created by Dayrabekov Artem on 2019-04-10.
//

#ifndef EX02_CENTRALBUREAUCRACY_HPP
#define EX02_CENTRALBUREAUCRACY_HPP


#include <iostream>
#include "OfficeBlock.hpp"
#define MAX_BLOCKS 20

class CentralBureaucracy
{
		typedef struct s_queue
		{
			std::string		target;
			struct s_queue	*next;
			int				first_box;
		}t_queue;
	private:
		OfficeBlock _bureaucracy[MAX_BLOCKS];
		t_queue		*_queue;
		CentralBureaucracy(CentralBureaucracy const &other);
		CentralBureaucracy &operator=(CentralBureaucracy const &other);

	public:
		CentralBureaucracy();

		virtual ~CentralBureaucracy();

		void feedSigner(Bureaucrat &bureaucrat);
		void feedExecutor(Bureaucrat &bureaucrat);
		void queueUp(std::string target);
		void doBureaucracy();
		void removeQueue();
};


#endif //EX02_CENTRALBUREAUCRACY_HPP
