/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:19:56 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 15:43:31 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : default constractor called " << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other_MateriaSource)
{
	std::cout << "MateriaSource: copy constractor called " << std::endl;
	*this = other_MateriaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other_MateriaSource)
{
	std::cout << "MateriaSource: copy assignement operator overloading called " << std::endl;
	if (this != &other_MateriaSource)
	{
		
	}
	return *this;
}

/*implement the pure virtual function*/

void	MateriaSource::learnMateria(AMateria*)
{
	
}

AMateria* createMateria(std::string const & type)
{
	(void)type;
	return NULL;
}
