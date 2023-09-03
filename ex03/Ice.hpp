/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:45:42 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/03 18:42:01 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();//default constractor
		Ice(const Ice& other_Ice);//copy constractor
		Ice& operator=(const Ice& other_Ice);//copy assignement operator overloading
		~Ice();//destractor

		AMateria* clone() const;
};

#endif