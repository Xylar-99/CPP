

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : _gradeSign(147),
	_gradeExec(137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _gradeSign(147),
	_gradeExec(137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	_gradeExec = obj._gradeExec;
	_gradeSign = obj._gradeSign;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	write_tree(std::string target)
{
	std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str(), std::ios::out);
	if (!file)
		throw std::runtime_error("SOMTHING WRONG!!");
	file << "      *" << std::endl;
	file << "     ***" << std::endl;
	file << "    *****" << std::endl;
	file << "   *******" << std::endl;
	file << "  *********" << std::endl;
	file << " ***********" << std::endl;
	file << "    *****" << std::endl;
	file << "   *******" << std::endl;
	file << "  *********" << std::endl;
	file << " ***********" << std::endl;
	file << "   *******" << std::endl;
	file << "  *********" << std::endl;
	file << " ***********" << std::endl;
	file << "     |||" << std::endl;
	file << "     |||" << std::endl;
	file << "     |||" << std::endl;
	std::cout << "A tree has been drawn successfully." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() < this->_gradeSign && executor.getGrade() < this->_gradeExec)
			write_tree(target);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
