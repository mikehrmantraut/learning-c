/**
 * Simple Cash Machine Program using switch.
 */
#include <stdio.h>

int main()
{
	int operation;
	int balance = 1000;
	int amount;
	
	printf("Operations\n1:Withdraw\n2:Deposit\n3:Transfer\n4:Balance Inquiry\n5:Return Card\n\n\n");
	scanf("%d", &operation);
	
	switch(operation)
	{
		case 1:
			printf("Your Balance: %d\n", balance);
			printf("Amount of money to be withdrawn:");
			scanf("%d", &amount);
			
			if (amount > balance)
			{
				printf("Insufficient balance!\n");
				break;
			}
			else
			{
				balance -= amount;
				printf("Your Balance: %d", balance);
				break;
			}
			
		case 2:
			printf("Your Balance: %d\n", balance);
			printf("Amount of money to be deposited:");
			scanf("%d", &amount);
			
			balance += amount;
			printf("Your Balance: %d\n", balance);
			break;
			
			
		case 3:
			printf("Your Balance: %d\n", balance);
			printf("Amount of money to be transferred:");
			scanf("%d", &amount);
			
			if (amount > balance)
			{
				printf("Insufficient balance!\n");
				break;
			}
			else
			{
				balance -= amount;
				printf("Your Balance: %d\n", balance);
				break;
			}
			
		case 4:
			printf("Your Balance: %d\n", balance);
			break;
			
		case 5:
			printf("Your card has been returned.\n");
			break;
			
		default:
			printf("Unknown operation.");
			break;			
	}
	
	return 0;
}
