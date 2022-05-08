/*
    4. Pattern Problem – 04
    *******
     *****
      ***
       *
*/
main()
{
    int i, j, l;
    for(i=1;i<=4;i++)
    {
    	l=8;
        for(j=1;j<8;j++)
        {
            if(i<=j)
                printf("*");
            else
                printf(" ");
            l--;
            if(j>4&&j<l)
            	printf(" ");
        }
        printf("\n");
    }
    getch();
}
