#include "Span.hpp"

Span::Span(unsigned int n) : _max(n) {
	std::cout << "Span: default or initialization constructor called" << std::endl;
}

Span::Span(const Span& span) : _set(span._set), _max(span._max) {
	std::cout << "Span: copy constructor called" << std::endl;
}

Span::~Span() {
	std::cout << "Span: destrcutor called" << std::endl;
}

Span& Span::operator=(const Span& span) {
	std::cout << "Span: copy assignment called" << std::endl;
	if (this != &span) {
		_set = span._set;
		_max = span._max;
	}
	return *this;
}

void	Span::addNumber(int num) {
	if (_set.size() == _max) {
		throw(std::length_error("elements are full"));
	}
	_set.insert(num);
}

int	Span::shortestSpan(void) {
	int	ret = INT_MAX;

	if (_set.size() < 2) {
		throw(std::invalid_argument("Data size must be at least 2"));
	}
	for (std::set<int>::const_iterator it = _set.begin();;) {
		int	tmp = *it;
		++it;
		if (it == _set.end()) break;
		ret = std::min(ret, *it - tmp);
	}
	return ret;
}

int	Span::longestSpan(void) {
	if (_set.size() < 2) {
		throw(std::invalid_argument("Data size must be at least 2"));
	}
	return *(_set.rbegin()) - *(_set.begin());
}
