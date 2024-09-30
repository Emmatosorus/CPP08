#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <limits>
#include <cstdlib>
#include <vector>


class Span
{
	public:
		Span(unsigned int size);
		Span( const Span & s );
		~Span();

		Span & operator=( const Span & s);

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

		std::vector<int> array;
		unsigned int max_size;
		unsigned int stored;
};

#endif
