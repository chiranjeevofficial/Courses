#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int main(){
    int t, i, live=3, temp;
    char opt;
    mainMenu:
    system("cls");
    printf("Print Table   : 1\n");
    printf("Practice Table: 2\n");
    printf(" ---> ");
    do{
        opt=getch();
        if(opt=='1'||opt=='2'){
            printf("%c",opt);
            break;
        }
    }while(opt!='1'||opt!='2');
    system("cls");
    switch(opt){
        case '1':
            printf("Which Table: ");
            scanf("%d",&t);
            for(i=1;i<=10;i++)
                printf("%d x %2d = %3d\n",t,i,t*i);
                goto lastMenu;
            break;
        case '2':
        do{
            system("cls");
            printf("Your Live: ");
            for(int l=0;l<live;l++)
                printf("* ");

            printf("\nWhich Table: ");
            scanf("%d",&t);

            Repeat:
                system("cls");

            printf("Your Live: ");
            for(int l=0;l<live;l++)
                printf("* ");

            printf("\n");
            for(i=1;i<=10;i++){
                printf("%d x %2d = ",t,i);
                scanf("%d",&temp);
                if(temp!=t*i){
                    live--;
                    break;
                }
            }
            if(t*10==temp){
                printf("\nCongratulations\nYou have learn %d Table\n",t);
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
                printf("\n%d x %2d = %3d\t is wrong",t,i,temp);
                printf("\n%d x %2d = %3d\t is right\n",t, i,t*i);
            }
        lastMenu:
            if(opt=='1'){
                printf("Repeat     : (1)\n");
                printf("Main Menu  : (2)\n");
                printf("Exit       : (9)\n ---> ");
            }
        printf("\nYou Should Have %d Chance\n",live);
        printf("Other Table: (1)\n");
        printf("Repeat     : (2)\n");
        printf("Main Menu  : (3)\n");
        printf("Exit       : (9)\n ---> ");
        do{
            opt=getch();
            if(opt=='1'||opt=='2'||opt=='3'||opt=='9'){
                printf("%c",opt);
                break;
            }
        }while(opt!='1'||opt!='2'||opt=='3'||opt!='9');
        if(opt=='2')
            goto Repeat;
        if(opt=='3')
            goto mainMenu;
        if(opt=='9'){
            system("cls");
            printf("Thank You Visit Again");
        }
        }while(opt=='1');
        break;
        default:
            printf("Sorry, This Service is under construction: ");
            break;
    }
    return 0;
}
