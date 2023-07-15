#include <stdio.h>
#include <conio.h>
float equ(float);
void main()
{
    float x1=0, x2=0, t, prv_t=0, cnt=7;
    printf("Enter two points between roots lies: ");
    scanf("%f%f",&x1,&x2);
    printf("    a        b        t        f(a)     f(b)     f(t)\n");
    while(cnt)
    {
        t=(x1+x2)/2;
        prv_t=t;
        printf("%f %f %f %f %f  %f\n",x1, x2, t, equ(x1), equ(x2), equ(t));
        if( equ(t)<0 )
            x1=t;
        else
            x2=t;
        cnt--;
    }
    getch();
}
float equ(float n)
{
    n = (1000*n)/1000;
    return n*n-3;       // if quadratic equation have x^2-3=0
}
