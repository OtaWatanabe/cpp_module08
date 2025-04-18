#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int	main() {
	std::vector<int>	vec;

	vec.push_back(0);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(0);
	std::vector<int>::const_iterator	it = easyfind(vec, 2);
	std::cout << "find 2 in vector" << std::endl;
	std::cout << "Found value: " << *it << std::endl;
	std::cout << "Position of th value: " << it - vec.begin() << std::endl;

	std::vector<int>::const_iterator	it1 = easyfind(vec, 3);
	if (it1 == vec.end()) std::cout << "3 is not in the vector" << std::endl;
	
	std::list<int> li;
	li.push_back(0);
	li.push_back(4);
	li.push_back(2);
	li.push_back(3);
	li.push_back(1);
	li.push_back(3);
	li.push_back(4);
	std::list<int>::const_iterator	it2 = easyfind(li, 3);
	std::cout << "find 3 in list" << std::endl;
	std::cout << "Found value: " << *it2 << std::endl;
	std::list<int>::const_iterator begin = li.begin();
	std::cout << "Position of th value: " << std::distance(begin, it2) << std::endl;
	std::list<int>::const_iterator	it3 = easyfind(li, 5);
	if (it3 == li.end()) std::cout << "5 is not in the list" << std::endl;
}
