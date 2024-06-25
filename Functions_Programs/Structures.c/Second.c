#include <stdio.h>
#include <string.h>

struct UserFinance
{
    char name[30];
    char email[50];
    float debit;
    float credit;
    float balance;
};

void main()
{

    struct UserFinance st[3];

    for (int i = 0; i < 3; i++)
    {

        printf("Enter name for user[%d] : ", i + 1);
        fgets(st[i].name,30,stdin);
        printf("Enter email for user[%d] : ", i + 1);
        fgets(st[i].email, 50, stdin);
        printf("Enter credit for user[%d] : ", i + 1);
        scanf("%f", &st[i].credit);
        getchar();
        printf("Enter debit for user[%d] : ", i + 1);
        scanf("%f", &st[i].debit);
        getchar();
        st[i].balance = st[i].credit - st[i].debit;
    }

    printf("User data is shown below\n");

    for (int i = 0; i < 3; i++)
    {
        printf("User [%d]\n", i + 1);
        printf("Name : %s\n", st[i].name);
        printf("Email : %s\n", st[i].email);
        printf("Debit : %.2f\n", st[i].debit);
        printf("Credit : %.2f\n", st[i].credit);
        printf("Balance : %.2f\n", st[i].balance);
        printf("\n");
    }


}