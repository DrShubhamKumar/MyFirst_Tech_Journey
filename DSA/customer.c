#include <stdio.h>
#include <string.h>
// ek programe likhe jisme 3 customer ka user id aur password input karne pe unke account detail show kare
struct customer
{
    char name[100];
    char ifsc[100];
    char bankName[100];
    char branch[100];
    long long account;
    float balance;
    char userID[100];
    char password[100];
};
void customer1();
void customer2();
void customer3();
int main()
{
    int number;
    printf("enter number:");
    scanf("%d", &number);
    getchar();
    printf("enter user ID:");
    char userID[100];
    fgets(userID, 100, stdin);
    userID[strcspn(userID, "\n")] = 0;

    printf("enter password:");
    char password[100];
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = 0;
    switch (number)
    {
    case 1:
        if (strcmp(userID, "ABCDEF") == 0 && strcmp(password, "123456") == 0)
        {
            customer1();
        }
        else
        {
            printf("invalid userID And Password:");
        }
        break;
    case 2:
        if (strcmp(userID, "PQRS") == 0 && strcmp(password, "6789") == 0)
        {
            customer2();
        }
        else
        {
            printf("Invalid userID And Password:");
        }
        break;
    case 3:
        if (strcmp(userID, "WXYZ") == 0 && strcmp(password, "45678") == 0)
        {
            customer3();
        }
        else
        {
            printf("Invalid userID And Password:");
        }
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}
void customer1()
{
    struct customer c1 = {"Shubham Kumar", "SBINO09227", "State Bank Of India", "Bairiyadih", 38652227906, 45271.45};
    // printf("Name:%s\n IFSC:%s\n Bank Name:%s\n Branch:%s\n Account Number:%lld\n Avaliable balance:%f\n", c1.name, c1.ifsc, c1.bankName, c1.branch, c1.account, c1.balance);
    printf("Name:%s\n", c1.name);
    printf("IFSC:%s\n", c1.ifsc);
    printf("Bank Name:%s\n", c1.bankName);
    printf("Branch:%s\n", c1.branch);
    printf("Account Number:%lld\n", c1.account);
    printf("Avliable Balamce:%.2f\n", c1.balance);
}
void customer2()
{
    struct customer c2 = {"Nikeel Kumar", "CBINOR10001", "Uttar Bihar Gramin Bank", "Gayghat", 1002601030081697, 98314.43};
    // printf("Name:%s\n IFSC:%s\n Bank Name:%s\n Branch:%s\n Account Number:%lld\n, Avaliable balance:%.2f\n", c2.name, c2.ifsc, c2.bankName, c2.branch, c2.account, c2.balance);
    printf("Name:%s\n", c2.name);
    printf("IFSC:%s\n", c2.ifsc);
    printf("Bank Name:%s\n", c2.bankName);
    printf("Branch:%s\n", c2.branch);
    printf("Account Number:%lld\n", c2.account);
    printf("Available Balance:%.2f", c2.balance);
}
void customer3()
{
    struct customer c3 = {"Manoj Kumar", "IPB10000001", "India Post Payment Bank", "Machhargawan", 4586525642856, 486521.45};
    // printf("Name:%s\n IFSC:%s\n Bank Name:%s\n Branch:%s\n Account Number:%lld\n Avaliable balance:%.2f\n", c3.name, c3.ifsc, c3.bankName, c3.branch, c3.account, c3.balance);
    printf("Name:%s\n", c3.name);
    printf("IFSC:%s\n", c3.ifsc);
    printf("Bank Name:%s\n", c3.bankName);
    printf("Branch:%s\n", c3.branch);
    printf("Account Number:%lld\n", c3.account);
    printf("Available Balance:%.2f", c3.balance);
}