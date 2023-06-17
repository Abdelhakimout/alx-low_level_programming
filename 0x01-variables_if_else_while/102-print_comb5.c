#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;
	
	for (tho = 0; tho < 10; tho+=)
	{
		for (hun = 0; hun < 10; hun++)
		{
            for (ten = tho; ten < 10; ten++)
            {
                for (bas = 0; bas < 10; bas++)
                {
                    int num1 = (tho * 10) + hun;
                    int num2 = (ten * 10) + bas;

                    if (num1 != num2)
                    {
                        putchar((tho + '0'));
                        putchar((hun + '0'));
                        putchar(' ');
                        putchar((ten + '0'));
                        putchar((bas + '0'));

                        if (tho != 9 || hun != 9 || ten != 9 || bas != 9)
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
            }
        }
    }

    putchar('\n');
    return 0;
}

