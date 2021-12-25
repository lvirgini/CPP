#include <PresidentialPardonForm.hpp>

/* -------------------------------------------------------------------------- */
/*                     Constructor Destructor                                 */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
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
	this->_target = copy._target;
	return (*this);
}


/* -------------------------------------------------------------------------- */
/*                                 Get                                        */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                               Functions                                    */
/* -------------------------------------------------------------------------- */

bool	PresidentialPardonForm::executeReal(Bureaucrat const & executor)
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	(void) executor;
	return(true);
}

/* -------------------------------------------------------------------------- */
/*                               Exception                                    */
/* -------------------------------------------------------------------------- */
