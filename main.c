#include <stdio.h>
#include <malloc.h>
#include <string.h>

#include "headers/utils.h"
#include "headers/ncr_structs.h"


/**
    The code here is just a dummy training
*/

typedef struct some
{
    unsigned size;
    char data[1];
} alpha;

int main(void)
{
    // printf("I am working!\n");
    alpha * Some = (alpha*)malloc(sizeof(alpha) * 4);
    (Some + 2)->size = 2;
    memcpy((Some + 2)->data, "4", 1);

    printf("%c\n", *((Some + 2)->data));

    NCR b;
    b.ncr_base = 1;
    b.ncr_extension = 3;
    b.reserved = 1;
    b.ncr_base_remainder = 0;

    // some magic here
    unsigned short int * psi = (unsigned short int *)((unsigned char*)&b + 4);

    unsigned char a = 10;
    printf("The number we are checking: 10, which is 0b00001010\n");
    printf("Zero bit is set: %d\n", BIT_IS_SET(a, 0));
    printf("1st bit is set: %d\n", BIT_IS_SET(a, 1));
    printf("2nd bit is set: %d\n", BIT_IS_SET(a, 2));
    printf("3d bit is set: %d\n", BIT_IS_SET(a, 3));

    printf("\nsize of the NCR: %u\n", sizeof(NCR));
    printf("%u\n", *psi);

    return 0;
}
