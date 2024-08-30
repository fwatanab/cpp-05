#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class	Bureaucrat {
	private:
		std::string const name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat() {}

		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException() {}
				virtual ~GradeTooHighException() throw() {}
				virtual const char*	what() const throw() {
					return "Grade is too high";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException() {}
				virtual ~GradeTooLowException() throw() {}
				virtual const char*	what() const throw() {
					return "Grade is too low";
				}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
