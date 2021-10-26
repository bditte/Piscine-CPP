/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:36:03 by bditte            #+#    #+#             */
/*   Updated: 2021/10/22 12:33:31 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

void	draw_tree(std::ofstream& outfile)
{
	outfile << " ___ " << "          "<< " ___ " << "    " << " ___ " << std::endl;
	outfile << "/   \\" << "          "<< "/   \\" << "    " << "/   \\"<< std::endl;
	outfile << "|   |" << "          "<< "|   |" << "    " << "|   |"<< std::endl;
	outfile << "\\___/" << "          "<< "\\___/" << "    " << "\\___/"<< std::endl;
	outfile << "  |  " << "          "<< "  |  " << "    " << "  |  "<< std::endl;
	outfile << "  |  " << "          "<< "  |  " << "    " << "  |  "<< std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream outfile;

	try
	{
		this->Form::canBeExecuted(executor);
		outfile.open((this->target + "_shrubbery").c_str());
		draw_tree(outfile);
		outfile.close();
	}
	catch (const Form::FormNotSignedException& e)
	{
		throw e;
	}
	catch (const Form::GradeTooLowException& e)
	{
		throw e;
	}
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	(void)rhs;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form(target, 145, 137),  target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("default", 145, 137), target("default")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): Form(src), 	target(src.target)
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}