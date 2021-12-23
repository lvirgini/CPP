#include <PresidentialPardonForm.hpp>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat const & target) : 
	Form("Presidential", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) :
	Form(copy), _target(copy._target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

/* -------------------------------------------------------------------------- */
/*                                Operator                                    */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & copy)
{
	(void)copy;
	return (*this);
}

bool	PresidentialPardonForm::executeReal(Bureaucrat const & executor)
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	(void) executor;
	return(true);
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


