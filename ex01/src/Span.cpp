#include "../includes/Span.h"

Span::Span()
{
	std::cout << "Span : Default constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span : Destructor called" << std::endl;
	delete [] this->array;
}

Span::Span(unsigned int size) : size(size), stored(0)
{
	if (this->size == 0)
		throw std::length_error("Span : Can't create array of 0");
	std::cout << "Span : Constructor called with size : " << size << std::endl;
	this->array = new int[size];
}

Span::Span(const Span & s)
{
	std::cout << "Span : Copy constructor called" << std::endl;
	this->size = s.get_size();
	this->array = new int[this->size];
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = s[i];
	this->stored = s.get_stored();
}

Span & Span::operator=(const Span &s)
{
	delete [] this->array;
	this->size = s.get_size();
	this->array = new int[this->size];
	for (unsigned int i = 0; i < this->size; i++)
		this->array[i] = s[i];
	this->stored = s.get_stored();
	return *this;
}

int	Span::operator[](unsigned int index)
{
	if (index >= this->size)
		throw std::out_of_range("Span : Index out of bounds");
	return this->array[index];
}

int	Span::operator[](unsigned int index) const
{
	if (index >= this->size)
		throw std::out_of_range("Span : Index out of bounds");
	return this->array[index];
}

std::ostream & operator<<(std::ostream & o, Span & s)
{
	for (size_t i = 0; i < s.get_size(); i++)
		std::cout << s[i] << " ";
	return o;
}

unsigned int	Span::get_size() const
{
	return this->size;
}

unsigned int	Span::get_stored() const
{
	return this->stored;
}

void	Span::addNumber(int nb)
{
	if (this->stored == this->size)
		throw std::length_error("Span : Cannot add more numbers");
	this->stored++;
	this->array[this->stored - 1] = nb;
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