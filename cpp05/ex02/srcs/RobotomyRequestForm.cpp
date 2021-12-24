#include <RobotomyRequestForm.hpp>
#include <cstdlib>
#include <ctime> 

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat const & target) : 
	Form("Robotomy", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy):
	Form(copy), _target(copy._target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & copy)
{
	(void)copy;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

bool	RobotomyRequestForm::executeReal(Bureaucrat const & executor)
{
	(void)executor;

	srand(time(0)); 
	if (std::rand() % 2 == 0)
		std::cout << this->_target.getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout  << "failed to robotomized "<< this->_target.getName() << std::endl;
	return (true);
}


/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */


