/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:40:40 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 13:55:26 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	mainSubjectMutant();
int	mainSubjectList();
int	mainCont();

int	main() {
	mainSubjectMutant();
	mainSubjectList();
	mainCont();
}

int mainSubjectMutant() {
	std::cout << "\nTEST MAIN SUBJECT WITH MUTANT (lol): " << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(42);

	std::cout << "Last number entered : " << mstack.top() << std::endl;
	mstack.pop(); // remove last one
	std::cout << "Size of Stack : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << " \nNumbers still on the stack + added : " << std::endl;

	while (it != ite) {
		std::cout << *it << std::endl;
	++it;
	}

	std::stack<int> s(mstack); //s pour stack

	return 0;
}

int mainSubjectList() {
	std::cout << "\nTEST MAIN SUBJECT WITH LIST : " << std::endl;
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);
	mstack.push_back(42);

	std::cout << "Top number of the list : " << mstack.front() << std::endl;//instead of .top
	std::cout << "Last number entered : " << mstack.back() << std::endl;//instead of .top
	mstack.pop_back(); // remove last one
	std::cout << "Size of Stack : " << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << " \nNumbers still on the stack + added : " << std::endl;

	while (it != ite) {
		std::cout << *it << std::endl;
	++it;
	}

	return 0;
}
