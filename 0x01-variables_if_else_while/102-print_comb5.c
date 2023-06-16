#include <stdio.h>

int main(void)
{
    int tho;
    int hun;
    int ten;
    int bas;

    for (tho = 0; tho < 10; tho++)
    {
        for (hun = 0; hun < 10; hun++)
        {
            for (ten = 0; ten < 10; ten++)
            {
                for (bas = 0; bas < 10; bas++)
                {
                    putchar('0' + tho);
                    putchar('0' + hun);
                    putchar('0' + ten);
                    putchar('0' + bas);

                    if (!(tho == 9 && hun == 9 && ten == 9 && bas == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');
    return 0;
}

