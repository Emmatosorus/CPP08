#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <limits>
#include <cstdlib>


class Span
{
	public:
		Span(unsigned int size);
		Span( const Span & s );
		~Span();

		Span & operator=( const Span & s);
		int operator[]( unsigned int index);
		int operator[]( unsigned int index) const;

		unsigned int	get_size() const;
		unsigned int	get_stored() const;

		void	addNumber(int nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template < typename T >
		void	addRange(typename T::iterator begin, typename T::iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		}

	private:
		Span();

		int *array;
		unsigned int size;
		unsigned int stored;
};

std::ostream & operator<<(std::ostream & o, Span & s);

#endif