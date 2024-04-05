#include "Functions.h"
#include <stdbool.h>
#include "math.h"

bool Prime(unsigned long long int x)
{
	if (x == 1)
		return false;

	if (x == 2)
		return true;

	if (x % 2 == 0)
		return false;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
	{
		if (x % n == 0)
			return false;
	}
	return true;
}

unsigned long long Problem_Euler8(unsigned char* string)
{
	unsigned long long max = 1;
	for (int l = 0; string[l+12] != '\0'; l = l++)
	{
		unsigned long long min = 1;
		for (int i = l + 12; i >= l; i--)
		{
			min = min * (string[i]-48) ;
		}
		if (max < min)
			max = min;
	}
	return max;
}

unsigned long long Problem_Euler9(unsigned long long number)
{
	unsigned long long mult;
	unsigned long long c = 3;
	unsigned long long b = 2;
	unsigned long long a = 1;
	int fl = 1;
	while (fl)
	{
		for (a; a + b + c != number && (a * a + b * b != c * c); a++) {
			b = a + 1;
			c = b + 1;
			while (b < number)
			{
				if (((a * a + b * b) > c * c))
					c = c + 1;
				if (((a * a + b * b) < c * c))
					b += 1;
				if (((a * a + b * b) == c * c))
					if (a + b + c == number) {
						fl = 0;
						return mult = a * b * c;
					}
					else
						b += 1;
			}
		}
	}
	return 0;
}

unsigned long long Problem_Euler10(unsigned long long number)
{
	unsigned long long sum = 0;
	for( unsigned int i = 1; i < number; i++)
	{
		if (Prime(i) == true)
		sum += i;
	}
	return sum;
}