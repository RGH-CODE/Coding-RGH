#include<stdio.h>
#include<string.h>
#define max_customer 250
//struct to hold customer details
struct customer{
   int accNO;
   char name[40];
   float balance;
};
//function to print customer name and account number with balance below 1000
void printBelow(struct customer customers[],int count, int balance){
    int found=0;
    for(int i=0;i<count;i++){
        if(customers[i].balance<1000){
            printf("\n Name %s:",customers[i].name);
            printf("\n Account Number %d",customers[i].accNO);
            printf("\n Balance %f:",customers[i].balance);
            found=1;
        }
    }
    if(!found){
        printf("No customer with balance below 1000");
    }
}
//function to print withdrawal cna be made or not
void withdrawal(struct customer customers[],int count, int balance,int withdrawal){
    int accNO;
    float newbal;
    printf("Enter the account number to withdrawl:\n");
    scanf("%d",&accNO);
    for(int i=0;i<count;i++){
        if(customers[i].accNO==accNO){
         if(customers[i].balance>withdrawal){
            newbal=customers[i].balance-withdrawal;
            printf("withdrawal successful\n.your remaning amount is %f \n",newbal);
        }
       else{
        printf("your deposit balance is not sufficient to withdrawal\n");
        }
    }
    customers[i].balance=newbal;
    }
}
//function to deposit balance
void deposit(struct customer customers[],int count, int balance,int deposit){
   int depositamount=0,accNO;
   printf("enter the acount number to deposit:\n ");
   scanf("%d",&accNO);
    for(int i=0;i<count;i++){
        if(customers[i].accNO==accNO){
            depositamount=deposit+customers[i].balance;
            printf("your deposit balance is %d",depositamount);
    }
    customers[i].balance=depositamount;
}
}


int main(){
    struct customer customers[max_customer];
    int n,balance;
    printf("Enter the number of customers:\n");
    scanf("%d",&n);
    //taking input for customers
    for(int i=0;i<n;i++){
        printf("/n Enter the details for customer %d \n",i+1);
        printf("Account Number: ");
        scanf("%d",&customers[i].accNO);
        printf("Name:  ");
        scanf(" %[^\n]",customers[i].name);
        printf("Balance:  ");
        scanf("%f",&customers[i].balance);
    }
    int choice, query;
    do{
        printf("\n choices to perform:\n");
        printf("1.Deposit balance.\n");
        printf("0.Withdrawal\n.");
        printf("2.show the Account below 1000 balance.\n");
        printf("3.exit\n");
        printf("enter the choices:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the deposit amount:\n");
            scanf("%d",&query);
            deposit(customers,n,balance,query);
            break;
        
           case 0:
            printf("Enter the withdrawal amount:\n");
            scanf("%d",&query);
            withdrawal(customers,n,balance,query);
            break;

            case 2:
            printf("Account with balance below 1000 are: \n");
            printBelow(customers,n,balance);
            break;
            case 3:
            printf("exiting.................\n");
            break;

            default: printf("invalid choices...");
        }
    }while(choice!=3);

   return 0;
}