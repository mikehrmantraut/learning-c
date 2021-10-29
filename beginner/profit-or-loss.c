/**
 * C program to calculate profit or loss.
 */

#include <stdio.h>

int main()
{
	int sellingPrice, costPrice;
	int profit, loss;
	
	/* input selling and cost prices from user */
	printf("Please enter selling price.");
	scanf("%d", &sellingPrice);
	printf("Please enter cost price.");
	scanf("%d", &costPrice);
	
	/* profit situation */
	if (sellingPrice > costPrice)
	{
		profit = sellingPrice - costPrice;
		printf("Your profit is %d", profit);
	}
	
	/* loss situation */
	else if (sellingPrice < costPrice)
	{
		loss = costPrice - sellingPrice;
		printf("Your loss is %d", loss);
	}
	/* neither profit nor loss situation*/
	else
		printf("Neither profit nor loss.");

	return 0;
}
