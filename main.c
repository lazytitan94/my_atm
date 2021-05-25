#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposit, withdraw;
    float balance = 0;
    int pin, pinat;
    int choice;
    char cont ='y';
    char user[20];

    printf("************************\n");
    printf("**Welcome to eCorp ATM**\n"); // έβλεπα Mr.Robot όταν το έγραφα
    printf("************************\n");


    sleep(3);
    printf("Please type in your name: \n"); // ζητάω όνομα έτσι ώστε να αναφέρεται το πρόγραμμα στο χρήστη με όνομα (για ομορφιά)
    scanf("%s",user);

    printf("Please type your PIN %s",user); // Το PIN είναι 1234
    printf(".\n");
    scanf("%d",&pin);

    if (pin == 1234)
    {
        system("cls");
        printf("Welcome %s",user);
        printf(".\n\n\n");


        sleep(3);

        while(cont!='n' && choice!=5)
        {

        printf("1.Set the initial balance \n");
        printf("2.Credit balance \n");
        printf("3.Debit balance \n");
        printf("4.See total balance \n");
        printf("5.Exit \n\n\n");
        printf("Please select an option: \n");
                    scanf("%d",&choice);

                switch(choice)
                {
                    case 1:
                    sleep(2);
                    printf("Please type in your new balance: \n");
                    scanf("%f",&balance);
                    sleep(2);
                    printf("Your new balance is: %.2f Euro.\n",balance);
                    sleep(2);
                    printf("Do you want to continue? y to continue n to exit.\n");
                    scanf("%s",&cont);
                    system("cls");
                    break;

                case 2:
                    sleep(2);
                    printf("Please type the amount you want to deposit: \n");
                    scanf("%f",&deposit);
                    sleep(2);
                    balance = balance + deposit;
                    printf("Your new balance is: %.2f Euro.\n",balance);
                    sleep(2);
                    printf("Do you want to continue? y to continue n to exit.\n");
                    scanf("%s",&cont);
                    system("cls");
                    break;

                case 3:
                    sleep(2);
                    printf("Please type in the amount you want to withdraw: \n");
                    scanf("%f",&withdraw);
                    sleep(2);
                    balance = balance - withdraw;
                    if (balance < withdraw)
                    {
                        printf("You don't have enough money to withdraw.\n");
                        sleep(2);
                        printf("Do you want to continue? y to continue n to exit.\n");
                        scanf("%s",&cont);
                        system("cls");
                        break;
                    }
                    printf("Your new balance is: %.2f Euro.\n",balance);
                    sleep(2);
                    printf("Do you want to continue? y to continue n to exit.\n");
                    scanf("%s",&cont);
                    system("cls");
                    break;


                case 4:
                    sleep(2);
                    printf("Your balance is: %.2f Euro.\n",balance);
                    sleep(2);
                    printf("Do you want to continue? y to continue n to exit.\n");
                    scanf("%s",&cont);
                    system("cls");
                    break;

                case 5:
                    printf("Thank you for using the eCorp ATM.\n");
                    break;


                default:
                    system("cls");
                    printf("Wrong choice.\n");
                    sleep(2);



                }

        }
                system("cls");
                printf("Thank you for using the eCorp ATM.\n");
    }









       else if (pin!=1234)

        {
            printf("Wrong PIN. Try again:\n");
            scanf("%d",&pin);
            pinat=1;

                for(pinat=1; pinat<2;pinat++)
                {
                    printf("Second Try:\n");
                    scanf("%d",&pin);

                }
                    for(pinat=2; pinat<3;pinat++)
                    {
                        printf("Third Try: \n");
                        scanf("%d",&pin);

                    }

                        for(pinat=3; pinat<=3;)
                        {
                            printf("Too many attempts. ATM BLOCKED.\n");
                            printf("Goodbye.\n");
                            break;
                        }




        }





    return 0;
}
