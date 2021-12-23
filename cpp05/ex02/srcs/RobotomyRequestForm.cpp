#include <RobotomyRequestForm.hpp>

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

/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */


