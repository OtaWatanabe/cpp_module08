#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <exception>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	typedef typename Container::iterator iterator;
	MutantStack(void);
	MutantStack(const MutantStack& ms);
	~MutantStack();
	MutantStack& operator=(const MutantStack& ms);
	iterator	begin(void);
	iterator	end(void);
};

#include "MutantStack.tpp"

#endif