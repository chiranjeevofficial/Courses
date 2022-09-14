// 6. Write a program to check nature of roots of a given quadratic equation
main(){
    int a, b, c, D, i;
    printf("Enter a equation value of(a, b & c): ");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    printf("Descriment is: %d",D);
    if(D<0)
        printf("No Roots");
    else if(D==0)
        printf("Roots are Real & Equal");
    if(D>0){
        for(i=1;i*i<=D;i++)
            break;
        if(i*i!=D)
            printf("Roots are Real, Rational & Distinct");
        else
            printf("Roots are not Real, Rational & Distinct");
    }
}
