#include <iostream>

bool duplicate(int numbers[], int length, int* duplication)
{
	return false;
}

// ��������1�����
void test1()
{
	int numbers[] = { 3,6,3,2,1,0 };
	int target = -1;
	bool result = duplicate(numbers, 6, &target);
	if (result != true)
	{
		std::cout << "[warning]test1 failed. result is wrong." << std::endl;

	}
	else 
	{
		if (target == 3 || target == 2)
		{
			std::cout << "test1 passed." << std::endl;
		}
		else
		{
			std::cout << "[warning]test1 failed. target is wrong." << std::endl;
		}
		
	}
}

// ��������2�����ظ�
void test2()
{
	int numbers[] = { 2, 7, 1, 9 };
}

// ��������3����������