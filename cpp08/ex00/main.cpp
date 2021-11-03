#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{

	/* Easyfind using vector container */

	int	myInts1[] = {1, 2, 3 ,4};
	int	value1 = 3;
	std::vector<int> myVector(myInts1, myInts1+ 4);

	std::vector<int>::iterator it = easyfind(myVector, value1);

	if (it != myVector.end())
		std::cout << "easyfind returned : " << *it << " in first container" << std::endl;
	else
		std::cout << "Did not find " << value1 << " in first container" << std::endl;
	
	/* Easyfind using list container */

	int	myInts2[] = {-1, -2, -3 , -4};
	std::list<int> myList(myInts2, myInts2 + 4);

	std::list<int>::iterator it2 = easyfind(myList, value1);

	if (it2 != myList.end())
		std::cout << "easyfind returned : " << *it2 << " in second container" << std::endl;
	else
		std::cout << "Did not find " << value1 << " in second container" << std::endl;
	
	return (0);
}