/*
    3. Pattern Problem – 03
       *
      **
     ***
    ****
*/
main()
{
    int i, j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=4;j++)
        {
            if(i<=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
