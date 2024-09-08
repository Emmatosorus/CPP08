#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T> & m) : std::stack<T>(m) {}
		~MutantStack() {}

		MutantStack & operator=( MutantStack<T> & m ) { std::stack<T>::operator=(m); }

		typedef typename container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		iterator rbegin()
		{
			return this->c.rbegin();
		}

		iterator rend()
		{
			return this->c.rend();
		}

		iterator cbegin()
		{
			return this->c.cbegin();
		}

		iterator cend()
		{
			return this->c.cend();
		}

		iterator crbegin()
		{
			return this->c.crbegin();
		}

		iterator crend()
		{
			return this->c.crend();
		}
};

#endif
