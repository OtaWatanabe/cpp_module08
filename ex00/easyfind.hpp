#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename Container>
typename Container::const_iterator	easyfind(const Container& container, int num) {
	return std::find(container.begin(), container.end(), num);
}

#endif
