#include "../includes/Span.h"

Span::Span()
{
	// std::cout << "Span : Default constructor called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span : Destructor called" << std::endl;
}

Span::Span(unsigned int max_size) : max_size(max_size), stored(0)
{
	if (this->max_size == 0)
		throw std::length_error("Span : Can't create array of 0");
	std::cout << "Span : Constructor called with max size : " << max_size << std::endl;
}

Span::Span(const Span & s)
{
	// std::cout << "Span : Copy constructor called" << std::endl;
	this->array = s.array;
	this->max_size = s.get_size();
	this->stored = s.get_stored();
}

Span & Span::operator=(const Span &s)
{
	this->array = s.array;
	this->max_size = s.get_size();
	this->stored = s.get_stored();
	return *this;
}

unsigned int	Span::get_size() const
{
	return this->max_size;
}

unsigned int	Span::get_stored() const
{
	return this->stored;
}

void	Span::addNumber(int nb)
{
	if (this->stored == this->max_size)
		throw std::length_error("Span : Cannot add more numbers");
	this->stored++;
	this->array.insert(this->array.end(), nb);
}

unsigned int Span::shortestSpan()
{
	if (this->stored < 2)
		throw std::domain_error("Span : Not enough numbers in array");
	unsigned int span = std::numeric_limits<unsigned int>::max();

	unsigned int i = 0;
	unsigned int j;
	while (i < this->stored)
	{
		j = i + 1;
		while (j < this->stored)
		{
			if ((unsigned int)abs(this->array[i] - this->array[j]) < span)
				span = abs(this->array[i] - this->array[j]);
			j++;
		}
		i++;
	}
	return (span);
}

unsigned int Span::longestSpan()
{
	if (this->stored < 2)
		throw std::domain_error("Span : Not enough numbers in array");
	int max = std::numeric_limits<int>::min();
	int min = std::numeric_limits<int>::max();

	for (unsigned int i = 0; i < this->stored; i++)
	{
		if (this->array[i] < min)
			min = this->array[i];
		if (this->array[i] > max)
			max = this->array[i];
	}
	return (max - min);
}