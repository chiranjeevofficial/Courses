// Q10. write a program which takes marks of 5 subjects (assume maximum marks for each
// subject is 100.) Display result as pass or fail. Also print division obtained if has
// passed the exam
main()
{
    float s1, s2, s3, s4, s5, to=0;
    printf("Enter 5 subject marks: ");
    scanf("%f%f%f%f%f",&s1, &s2, &s3, &s4, &s5);
    if(s1>=33)
    {
        to=to+s1;
        if(s2>=33)
        {
            to=to+s2;
            if(s3>=33)
            {
                to=to+s3;
                if(s4>=33)
                {
                    to=to+s5;
                    if(s5>=33)
                    {
                        to=to+s5;
                        to=to/5;
                        if(to>=60)
                        {
                            printf("First Division %0.2f%%",to);
                        }
                        else if(to>=59)
                        {
                            printf("Second Division %0.2f%%",to);
                        }
                        else if(to>=49)
                        {
                            printf("Third Division %0.2f%%",to);
                        }
                        else
                        {
                            printf("Pass %0.2f%%",to);
                        }
                    }
                    else
                    {
                        printf("Fail");
                    }
                }
                else
                {
                    printf("Fail");
                }
            }
            else
            {
                printf("Fail");
            }
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("Fail");
    }
    getch();
}
