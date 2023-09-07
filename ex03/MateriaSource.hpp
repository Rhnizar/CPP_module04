/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:47:41 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/07 00:04:46 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* materias[4];
	public:
	MateriaSource();// default constractor 
	MateriaSource(const MateriaSource& other_MateriaSource);// copy constractor 
	MateriaSource& operator=(const MateriaSource& other_MateriaSource); // copy assignement operator overloading 
	~MateriaSource();// destractor 

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif