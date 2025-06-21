#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <algorithm>

template <typename T>
void printAll(const T& container)
{
	for (auto& e : container)
	{
		std::cout << e << " ";
	}
}

int main()
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int> l;
	std::forward_list<int> fl;
	std::array<int, 10> a = { 1, 2, 3, 4, 5 };

	///
	/// vector
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(32);
	v.push_back(4);
	v.push_back(522);
	v.push_back(52);

	printAll(v);

	// std::max_element
	auto iterV = std::max_element(v.begin(), v.end());

	std::cout << "최대값: " << *iterV << " 인덱스 : " << (iterV - v.begin()) << "\n\n";

	///
	/// list
	l.push_back(1);
	l.push_back(22);
	l.push_back(33);
	l.push_back(44);
	l.push_back(55);
	
	l.push_front(10);
	l.push_front(20);
	l.push_front(30);
	l.push_front(40);
	l.push_front(50);

	// sort
	l.sort(std::greater<int>());	// std::greater<T> ***

	// print
	auto iterL = l.rbegin();

	for (; iterL != l.rend(); ++iterL)
	{
		std::cout << *iterL << " ";
	}

	///
	/// forward_list
	auto iterFL = fl.before_begin();
	fl.insert_after(iterFL, 1);
	fl.insert_after(iterFL, 2);
	fl.insert_after(iterFL, 3);

	std::cout << "\n\nforward_list \n";

	for (iterFL = fl.begin(); iterFL != fl.end(); ++iterFL)
	{
		std::cout << *iterFL << " ";
	}

	///
	/// array
	int sum = 0;
	for (auto iter = a.begin(); iter != a.end(); ++iter)
	{
		sum += *iter;
	}

	std::cout << "\n\n" << sum;

}
