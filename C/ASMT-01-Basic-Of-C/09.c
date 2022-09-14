//9. Write a program to calculate simple interest. Take user input
main(){
    float amt, rate;
    int time;
    printf("Enter a total amount: ");
    scanf("%f",&amt);
    printf("Enter a rate of interest: ");
    scanf("%f",&rate);
    printf("Enter interest taken year's: ");
    scanf("%d",&time);
    printf("\nRate of interest is: %0.2f",(amt*rate*time)/100);
    getch();
}
