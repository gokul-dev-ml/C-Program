#include <stdio.h>
int main() {
  int choice;
  int balance=20000;
  int amount;
  int pin=5845;
  int userpin;
  int i=1;
  printf("1.check balance\n");
  printf("2.deposit amount\n");
  printf("3.withdraw amount\n");
  printf("4.exit\n");
  printf("please confirm the action you want:\n");
  scanf("%d",&choice);
  
  
  switch(choice){
    case 1:
    
    while (i <= 3) {
        printf("Enter correct pin:\n");
        scanf("%d", &userpin);

        if (pin == userpin) {
            printf("available balance: %d\n",balance);
            goto thankyoupage;
        } else {
            printf("Incorrect PIN\n");
            i++;
        }
    }

    printf("Too many incorrect attempts. Try again later.\n");
    goto thankyoupage;
    case 2:
    while (i <= 3) {
        printf("Enter correct pin:\n");
        scanf("%d", &userpin);

        if (pin == userpin) {
            printf("Enter amount to deposit:\n");
            scanf("%d", &amount);
            balance += amount;
            printf("Current balance: %d\n", balance);
            goto thankyoupage;
        } else {
            printf("Incorrect PIN\n");
            i++;
        }
    }

    printf("Too many incorrect attempts. Try again later.\n");
    goto thankyoupage;
   
   case 3:
    i = 1;
    while (i <= 3) {
        printf("Enter correct pin:\n");
        scanf("%d", &userpin);

        if (pin == userpin) {
            printf("Withdraw amount:\n");
            scanf("%d", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Current balance: %d\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            goto thankyoupage;
        } else {
            printf("Incorrect PIN\n");
            i++;
        }
    }

    printf("Too many incorrect attempts. Try again later.\n");
    goto thankyoupage;
break;
    case 4:
    goto thankyoupage;
    
      
  }
  
  thankyoupage:
  printf("Thanks For Using Our ATM");
    return 0;
}
