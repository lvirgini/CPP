#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

# define	HIGHEST_GRADE 	1
# define 	LOWEST_GRADE	150

class Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:

	// constructor
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & copy);

	// destructor
		~Bureaucrat(void);

	// operator
		Bureaucrat &	operator=(Bureaucrat const & copy);

	// get
		std::string		getName() const ;
		int				getGrade() const ;

	// functions
		void	upGrade(void) ;
		void	downGrade(void) ;
		void	signForm(Form & form) const ;
		void	executeForm(Form & form) const ;


	// exceptions class
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & b);

#endif
