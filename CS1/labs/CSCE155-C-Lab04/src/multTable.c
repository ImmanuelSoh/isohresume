/**
 * Author: Immanuel Soh
 *         isoh2@huskers.unl.edu
 * Date:   2023/09/13
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        printf("Error: provide an integer\n");
        exit(1);
    }

    int n = atoi(argv[1]);
    if (n <= 0)
    {
        printf("empty table!\n");
        exit(0);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int i = 1; i <= (n + 1); i++)
            {
                if (i == 1)
                {
                    printf("--- ");
                }
                else if (i < (n + 1))
                {
                    printf("%-3d ", i - 1);
                }
                else
                {
                    printf("%-3d \n", i - 1);
                }
            }
        }
        // The following section is the section I had a ton of trouble figuring out.
        for (int j = 1; j <= (n + 1); j++)
        {
            if (j == (1))
            {
                printf("%-3d ", i * j);
            }
            else if (j < (n + 1))
            {
                printf("%-3d ", i * (j - 1));
            }
            else
            {
                printf("%-3d \n", i * (j - 1));
            }
        }
    }
    return 0;
}