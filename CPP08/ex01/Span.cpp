/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:05:37 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 10:04:14 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _n(N)
{}

Span::Span(Span const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
	}
	std::cout << "Copy constructor called" << std::endl;
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(int value)
{
	if (_nums.size() >= _n) // si la taille du vector est plus petite que le nb de case, on jette une exception
	{
		throw SpanException("Cannot add more numbers to Span.");
	}
	_nums.push_back(value); // sinon on rajoute le nombre valeur a la suite.
}

template <typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end) {
	if (_nums.size() + std::distance(begin, end) > _n) {
		throw SpanException("Cannot add more numbers to Span.");
		return ;
	}
	_nums.insert(_nums.end(), begin, end);
}

int Span::shortestSpan() {
	if (_nums.size() < 2)
	{
		throw SpanException("Cannot find shortest span of Span.");
	}
	std::vector<int> sorted = _nums;
	std::sort(sorted.begin(), sorted.end());
	int shortest = std::numeric_limits<int>::max();
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		int span = sorted[i + 1] - sorted[i];
		if (span < shortest)
					shortest = span;
	}
	return shortest;
}

int Span::longestSpan() {
	if (_nums.size() < 2) {
		throw SpanException("Cannot find longest span of Span.");
	}
	int max = *std::max_element(_nums.begin(), _nums.end());
	int min = *std::min_element(_nums.begin(), _nums.end());
	return max - min;
}
