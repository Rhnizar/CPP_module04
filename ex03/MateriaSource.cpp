/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:19:56 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 01:30:41 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource : default constractor called " << std::endl;
	for(int i=0; i<4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other_MateriaSource)
{
	// std::cout << "MateriaSource: copy constractor called " << std::endl;
	*this = other_MateriaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other_MateriaSource)
{
	// std::cout << "MateriaSource: copy assignement operator overloading called " << std::endl;
	if (this != &other_MateriaSource)
	{
		for(int i=0; i<4; i++)
			this->materias[i] = other_MateriaSource.materias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource: destractor called " << std::endl;
	for(int i=0; i<4; i++)
	{
		if (materias[i])
			delete materias[i];
	}
}

/*implement the pure virtual function*/

void	MateriaSource::learnMateria(AMateria* m)
{
	int i;

	for (i=0; i<4; i++)
	{
		if (materias[i] == NULL)
		{
			materias[i] = m;
			break;
		}
	}
	if (i == 4)
	{
		std::cout << "array the materais is full " << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i=0; i<4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}
