main()
{
    int ary[6]={24, 56, 27, 30, 12, 8};
    int i, temp, min=0, max=0;
    for(i=0;i<6;i++)
    {
        if(max<ary[i])
            max=ary[i];
    }

    for(i=0;i<6;i++)
    {
        if(max>ary[i])
            min=ary[i];
    }
    printf("Maximum Element is: %d\n",max);
    printf("Minimum Element is: %d\n",min);
    getch();
}
