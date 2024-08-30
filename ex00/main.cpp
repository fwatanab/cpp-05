#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat	bure[] = {Bureaucrat("taro", 1), Bureaucrat("jon", 149)};
	std::cout << bure[0].getName() << ": " << bure[0].getGrade() << std::endl;
	std::cout << bure[1].getName() << ": " << bure[1].getGrade() << std::endl;

	bure[0].incrementGrade();
	std::cout << bure[0].getName() << ": " << bure[0].getGrade() << std::endl;
	bure[0].decrementGrade();
	std::cout << bure[0].getName() << ": " << bure[0].getGrade() << std::endl;

	bure[1].decrementGrade();
	std::cout << bure[1].getName() << ": " << bure[1].getGrade() << std::endl;
	bure[1].decrementGrade();
	std::cout << bure[1].getName() << ": " << bure[1].getGrade() << std::endl;

	return 0;
}
