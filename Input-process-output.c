#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_1, number_2, number_3, product;
    printf("ENTER FIRST NUMBER:");
    scanf("%d", &number_1);

     printf("ENTER SECOND NUMBER:");
    scanf("%d", &number_2);

     printf("ENTER THIRD NUMBER:");
    scanf("%d", &number_3);

    product = number_1 * number_2 * number_3;
    printf("THE PRODUCT IS %d", product);
    return 0;
}
