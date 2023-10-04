#include <stdio.h>
#include <math.h>

int getuserinput(char text[], const float *f)
{
    printf("%s", text);
    scanf("%f", &*f);
    fflush(stdout);

    return 0;
}
int pythagoras(const float *a, const float *b, float *c)
{
    *c = sqrt(*a * *a + *b * *b);
    return 0;
}
int calculateanglegrad(const float *x, const float *y, float *r)
{
    *r = atanf(*x/ *y) * (100 / M_PI) ;
    return 0;
}

int main() {
    float a, b, c, alpha, beta;

    printf("\tTriangulations calculator \n");
    printf("------------------------------------\n\n");

    getuserinput("a: ", &a);
    getuserinput("b: ", &b);

    pythagoras(&a, &b, &c);

    calculateanglegrad(&a,&b, &alpha);
    calculateanglegrad(&b, &a, &beta);

    printf("a: %f, b: %f, c: %f, alpha: %f, beta %f", a, b, c, alpha, beta);

    getchar();
    return 0;
}

