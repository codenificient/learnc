#include <stdio.h>

int main()
{
	struct bank {
		int account;
		float balance;
	};
	struct bank checking;

	checking.account = 2143;
	checking.balance = 789.65;

	printf("Checking account %d has a balance of %f\n",
        checking.account,
        checking.balance
        );

	return(0);
}

