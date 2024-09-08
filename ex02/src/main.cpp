#include "../includes/MutantStack.h"
#include <iostream>
#include <list>
#include <vector>

int main(void)
{
	std::cout << std::endl << "\x1b[1;36m############### TEST 1 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(6546845);
		mstack.push(7578);
		mstack.push(540);
		mstack.push(8);
		mstack.push(987);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1b[1;36m############### TEST 2 ###############\x1b[0m" << std::endl << std::endl;
	try
	{
		std::list<int>	lst;

		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl;
		lst.pop_back();
		std::cout << lst.size() << std::endl;

		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(6546845);
		lst.push_back(7578);
		lst.push_back(540);
		lst.push_back(8);
		lst.push_back(987);
		lst.push_back(0);

		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(lst);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
