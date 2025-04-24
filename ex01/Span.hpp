#ifndef SPAN_HPP
# define SPAN_HPP
# include <set>
# include <iostream>
# include <climits>

class Span {
private:
	std::multiset<int>	_set;
	unsigned int	_max;
public:
	Span(unsigned int n = 10);
	Span(const Span& span);
	~Span();
	Span& operator=(const Span& span);
	void	addNumber(int num);
	int	shortestSpan(void);
	int	longestSpan(void);
	template <typename InputIterator>
	void	addNumbers(InputIterator begin, InputIterator end) {
		unsigned int	count = 0;
	
		for (InputIterator it = begin; it != end; ++it) ++count;
		if (_max < count || _max < count + _set.size()) throw(std::length_error("elenents are full"));
		_set.insert(begin, end);
	}
};

#endif
