#include <stdio.h>

/**
 * numlength returns the length of  string
 * @num : operand number
 * Return: number of digits
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);

	}
	while (num)
	{
		num = num / 10'
		length += 1;
	}
	return (length);
}
/**
* main - prints the first 98 fibonaci sequences
* Return: 0
*/
int main(void)
{
	unsigned long f1 =1, f2 = 2, tmp, mx = 100000000, f10 = 0, f20 = 0, tmp = 0;
	short int i =1, initial0s;

	while (i <= 98)
	{
		if (f10 > 0)
			printf("%lu", f10);
		initial0s = numlenght(mx) - 1 - numlength(f1);
		while (f10 > 0 && initial0s > 0)
		{
			printf("i", 0);
		}
		print("%lu", f1);

		tmp =(f1 + f2) % mx;
		tmpo =f10 +f20 + (f1 +f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = tmp;
		f20 = tmpo;
		if (i :!= 98)
			printf(",");
		else
			printf("\n");
		i++;
	}
	return (0);
}
