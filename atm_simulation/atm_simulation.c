#include <stdio.h>
int main() {
  int choice;
  int balance=20000;
  int amount;
  int pin=5845;
  int userpin;
  printf("1.check balance\n");
  printf("2.deposit amount\n");
  printf("3.withdraw amount\n");
  printf("4.exit\n");
  printf("please confirm the action you want:\n");
  scanf("%d",&choice);
  
  
  switch(choice){
    case 1:printf("available balance: %d\n",balance);
            goto thankyoupage;
    case 2: printf("enter correct pin\n");
            scanf("%d",&userpin);
                if(pin==userpin){
                    printf("amount deposit\n");
                    scanf("%d",&amount);
                    balance+=amount;
                    printf("current balance: %d\n",balance);
                }
                 goto thankyoupage;
                break;
                
    case 3:
    printf("withdram amount :");
    scanf("%d",&amount);
    printf("enter correct pin\n");
            scanf("%d",&userpin);
                if(pin==userpin){
                   if(amount<=balance){
                    balance-=amount;
                    printf("current balance: %d\n",balance);
                   }
                   else
                   printf("Insufficient Balance\n");
                }
                 goto thankyoupage;
                break;
    case 4:
    goto thankyoupage;
    
      
  }
  
  thankyoupage:
  printf("Thanks For Using Our ATM");
    return 0;
}
