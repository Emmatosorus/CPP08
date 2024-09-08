#include "../includes/Span.h"
#include <iostream>
#include <list>
#include <algorithm>

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << std::endl << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(5);
		std::list<int>	lst;

		for (int i = 1; i <= 5; i++)
			lst.push_back(i * 10);

		sp.addRange<std::list<int> >(lst.begin(), lst.end());

		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(20000);
		std::list<int>	lst;

		for (int i = 0; i < 20000; i++)
			lst.push_back(i * 10);

		sp.addRange<std::list<int> >(lst.begin(), lst.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(20000);
		std::list<int>	lst;

		srand(time(0));
		for (int i = 0; i < 20000; i++)
			lst.push_back(i * rand());

		sp.addRange<std::list<int> >(lst.begin(), lst.end());

		// prints out huge set of random numbers
		// std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
