#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:
		std::stack<T> _stack;
		std::list<T> _list;

	public:
		MutantStack<T>(void)
		{

		}

		MutantStack(MutantStack const & src)
		{
			static_cast<void>(src);
		}

		~MutantStack<T>(void)
		{

		}

		void push(T value)
		{
			_list.push_front(value);
			_stack.push(value);
		}

		void pop(void)
		{
			_list.pop_front();
			_stack.pop();
		}

		T top(void)
		{
			return _stack.top();
		}

		T size(void)
		{
			return _stack.size();
		}

		typedef std::list<int>::iterator iterator;

		iterator begin()
		{
			return _list.begin();
		}
		iterator end() {
			return _list.end();
		}
};
#endif