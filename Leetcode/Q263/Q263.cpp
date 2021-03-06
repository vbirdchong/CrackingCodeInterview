
/*
263. Ugly Number

Write a program to check whether a given number is an ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 
For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

Note that 1 is typically treated as an ugly number.
 */

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    bool isUgly(int num) {
    	if (num <= 0)
    	{
    		return false;
    	}

    	if (num == 1)
    	{
    		return true;
    	}

    	if (num % 2 == 0)
    	{
    		return isUgly(num / 2);
    	}

    	if (num % 3 == 0)
    	{
    		return isUgly(num / 3);
    	}

    	if (num % 5 == 0)
    	{
    		return isUgly(num / 5);
    	}

    	return false;
    }
};

int main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		int n = atoi(argv[1]);
		cout << n << endl;

		Solution sl;
		cout << "ret: " << sl.isUgly(n) << endl;
	}
	return 0;
}