//Program to test mobile number in c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "otp_generation.h"


char* mobile_number;

int test_case1()
{
	mobile_number = "abcdefg";
	char is_numberic = check_mobile_number_numberic_or_not();
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int test_case2()
{
	mobile_number = "122agsd";
	char is_numberic = check_mobile_number_numberic_or_not();
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int test_case3()
{
	mobile_number = "0123456734";
	char is_numberic = check_mobile_number_numberic_or_not();
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int test_case4()
{
	mobile_number = "987456123";
	char is_numberic = check_mobile_number_numberic_or_not();
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int test_case5()
{
	mobile_number = "98745632142";
	char is_numberic = check_mobile_number_numberic_or_not(mobile_number);
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int test_case6()
{
	mobile_number = "8179423094";
	char is_numberic = check_mobile_number_numberic_or_not();
	if(is_numberic == '1' || is_numberic == '0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int passed = 0;
	int failed = 0;
	if(test_case1())
	{
		passed++;
	}
	else
	{
		failed++;
	}
	if(test_case2())
	{
		passed++;
	}
	else
	{
		failed++;
	}
	if(test_case3())
	{
		passed++;
	}
	else
	{
		failed++;
	}
	if(test_case4())
	{
		passed++;
	}
	else
	{
		failed++;
	}
	if(test_case5())
	{
		passed++;
	}
	else
	{
		failed++;
	}
	if(test_case6())
	{
		passed++;
	}
	else
	{
		failed++;
	}

	printf("No.of test cases passed: %d\n", passed);
	printf("No.of test cases failed: %d\n", failed);
}
