main()
{
    int value, result;
    printf("Enter a number: ");
    scanf("%d",&value);
    printf("Square of %d is: ",value);
    value=sqrt(value);
    printf("%.2lf\n",value);
    result=value;
    printf("Result: %d",result);
}
