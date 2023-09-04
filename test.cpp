/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:01:39 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/04 12:21:18 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Base
{
	public :
		virtual void rr() = 0;
};

class Derive:public Base
{
	public:
		Derive(){}
	void rr();
};

void Derive::rr()
{
	std::cout << "rrrr\n";
}

int main()
{

	Base *b = new Derive;
	b->rr();
	std::cout << "test " << std::endl;
	return 0;
}