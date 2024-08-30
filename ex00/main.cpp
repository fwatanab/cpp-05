#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat	bure[] = {Bureaucrat("taro", 1), Bureaucrat("jon", 149)};
	std::cout << bure[0] << std::endl;
	std::cout << bure[1] << std::endl;

	bure[0].incrementGrade();
	std::cout << bure[0] << std::endl;
	bure[0].decrementGrade();
	std::cout << bure[0] << std::endl;

	bure[1].decrementGrade();
	std::cout << bure[1] << std::endl;
	bure[1].decrementGrade();
	std::cout << bure[1] << std::endl;

	return 0;
}
