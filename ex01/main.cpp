#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(20);
		std::cout << "Span added successfully" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Span sp1(20000);
	Span sp2(sp1);
	Span sp3;

	sp3 = sp1;
	std::vector<int> v(10000);
	for (int i = 0; i < 10000; ++i) v[i] = i;
	sp1.addNumbers(v.begin(), v.end());
	std::cout << "sp1 short: " << sp1.shortestSpan() << std::endl;
	std::cout << "sp1 long: " << sp1.shortestSpan() << std::endl;
	sp2.addNumber(2);
	sp2.addNumber(5);
	std::cout << "sp2 short: " << sp2.shortestSpan() << std::endl;
	std::cout << "sp2 long: " << sp2.shortestSpan() << std::endl;
	try {
		int sspan = sp3.shortestSpan();
		std::cout << "sp3 short: " << sspan << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
