#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int main()
{
    int i, temp, table, live=3, opt;
    char choice='y';
    printf("Practice Table: 1\n");
    printf("Print Table   : 2\n");
    printf(" ---> ");
    scanf("%d",opt);
    switch(opt)
    {
        case 1:
        do
        {
            system("cls");
            printf("Your Live: ");
            for(int l=0;l<live;l++)
                printf("* ");
            printf("\n");
            printf("Which table: ");
            scanf("%d",&table);
            Repeat:
                system("cls");
            printf("Your Live: ");
            for(int l=0;l<live;l++)
                printf("* ");
            printf("\n");
            for(i=1;i<=10;i++){
                printf("%d x %d = ",table,i);
                scanf("%d",&temp);
                if(temp!=table*i){
                    live--;
                    break;
                }
            }
            if(table*10==temp){
                printf("\nCongratulations\nYou have learn %d table\n",table);
                if(live<3)
                    live++;
            }
            else if(live==0){
                system("cls");
                printf("You not have enough lives\nPlease Restart the game");
                break;
            }
            else{
                printf("\nOops!! Something went wrong");
                printf("\n%d x %d = %d\t is wrong",table,i,temp);
                printf("\n%d x %d = %d\t is right\n",table, i,table*i);
            }
        lastMenu:
        printf("\nYou Should Have %d Chance\n",live);
        printf("Other Table: (1)\n");
        printf("Repeat     : (2)\n");
        printf("Exit       : (9)\n ---> ");
        do{
            choice=getch();
            if(choice=='1'||choice=='2'||choice=='9'){
                printf("%c",choice);
                break;
            }
        }while(choice!='1'||choice!='2'||choice!='9');
        if(choice=='2')
            goto Repeat;
        if(choice=='9'){
            system("cls");
            printf("Thank You Visit Again");
        }
        }while(choice=='1');
        break;
        case 2:
            printf("Which table: ");
            scanf("%d",table);
            for(i=1;i<=10;i++)
                printf("%d x %d = %d",table,i,table*i);
            goto lastMenu;
            break;
        default:
            break;
    }
    getch();
    return 0;
}
