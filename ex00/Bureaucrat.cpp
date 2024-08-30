#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150) {}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : name(name) {
	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException(); // エラー処理
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException(); // エラー処理
		this->grade = grade;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Error: Grade too high" << std::endl;
		this->grade = 1;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Error: Grade too low" << std::endl;
		this->grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		name = other.name;
		grade = other.grade;
	}
	return *this;
}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade() {
	try {
		if (grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		grade--;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Cannot increment grade: " << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {
	try {
		if (grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		grade++;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Cannot decrement grade: " << e.what() << std::endl;
	}
}
