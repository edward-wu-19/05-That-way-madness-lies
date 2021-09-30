#include <stdio.h>

int main(){

    char c = 'g';
    int i = 10;
    long l = 1;

    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    printf("*cp (oct): %o\t*cp (hex): %x\n", cp, cp);
    printf("*ip (oct): %o\t*ip (hex): %x\n", ip, ip);
    printf("*lp (oct): %o\t*lp (hex): %x\n", lp, lp);
    printf("The addresses are right after one another, with the exception of the different sizes of the variables/number of bytes they each have\n");

    printf("i: %d\n", i);
    *ip += 2;
    printf("i: %d\n", i);

    printf("========Everything up to this is up to and not including part 6========\n");

    unsigned int u = 948329528;
    int *upi = &u;
    char *upc = &u;

    printf("upi: %d\t upi points to: %u\n", upi, *upi);
    printf("upc: %c\t upc points to: %u\n", upc, *upc);

    printf("u (dec): %u\tu (hex): %x\n", u, u);

    unsigned int u1 = *upc;
    unsigned int u2 = *(upc + 1);
    unsigned int u3 = *(upc + 2);
    unsigned int u4 = *(upc + 3);
    printf("u: %u\t%u\t%u\t%u\n", u1, u2, u3, u4);

    *upc += 1;
    *(upc + 1) += 1;
    *(upc + 2) += 1;
    *(upc + 3) += 1;

    printf("u (dec): %u\tu (hex): %x\n", *upi, *upi);

    u1 = *upc;
    u2 = *(upc + 1);
    u3 = *(upc + 2);
    u4 = *(upc + 3);
    printf("u: %u\t%u\t%u\t%u\n", u1, u2, u3, u4);

    *upc += 16;
    *(upc + 1) += 16;
    *(upc + 2) += 16;
    *(upc + 3) += 16;

    printf("u (dec): %u\tu (hex): %x\n", *upi, *upi);

    u1 = *upc;
    u2 = *(upc + 1);
    u3 = *(upc + 2);
    u4 = *(upc + 3);
    printf("u: %u\t%u\t%u\t%u\n", u1, u2, u3, u4);

    return 0;
}