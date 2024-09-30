#include "../includes/easyfind.h"
#include <iostream>
#include <list>
#include <vector>
#include <deque>

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::list<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 42) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::vector<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 2) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 3 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::deque<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 5) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 4 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::deque<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 18) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 5 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::vector<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 1) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 6 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::vector<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 3) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 7 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		int nbs[] = {1, 2, 3, 42, 5};
		std::vector<int> lst(nbs, nbs + 5);
		std::cout << *easyfind(lst, 14) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
