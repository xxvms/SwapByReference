// SwapByReference.cpp : Defines the entry point for the console application.
//

#include <iostream>

void swap(int& firstN_, int& secondN_);

int main()
{
	std::cout << "Please provide 2 integer numbers" << std::endl;
	int firstN = 0, secondN = 0;
	std::cout << "1st Number: ";
	std::cin >> firstN;
	std::cout << "2nd Number: ";
	std::cin >> secondN;

	std::cout << "Original Value B4 swap: " << "1St number: " << firstN << " 2nd Number: " << secondN << std::endl;
	swap(firstN, secondN);
	std::cout << std::endl;

	std::cout << "Original Value B4 swap: " << "1St number: " << firstN << " 2nd Number: " << secondN << std::endl;



	system("pause");
    return 0;
}
void swap(int& firstN_, int& secondN_)
{
	int temp = 0;
	temp = firstN_;
	firstN_ = secondN_;
	secondN_ = temp;
}
