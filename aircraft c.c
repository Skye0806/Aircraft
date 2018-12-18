#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,j;
	int x = 5; 
	int y = 10;
	char input;
	int isFire = 0;

	int target = 5; // position of the target
	int isKilled = 0;
	
	while (1)
	{
		system("cls");   // clear

		// 
		if (!isKilled)  // output the target
		{
			for (j=0;j<target;j++)
				printf(" ");
			printf("+\n");
		}else{
			printf("good job");
		}

		if (isFire==0) // 
		{
			for(i=0;i<x;i++)
				printf("\n");
		}
		else   // when isfire =1, print "|"
		{
			for(i=0;i<x;i++)
			{
				for (j=0;j<y;j++)
					printf(" ");
				printf("  |\n");
			}
			if (y+2==target)
				isKilled = 1; // when shooting target
			isFire = 0;
		}
		
		// output the pattern of the aircraft
		for (j=0;j<y;j++)
			printf(" ");		
		printf("  *\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf(" * * \n");

		if(kbhit())  // to check is there any input
		{
			input = getch();  // move the aircraft based on different input
			if (input == 'a')   
				y--;  // move leftward
			if (input == 'd')
				y++;  // move rightward
			if (input == 'w')
				x--;  // move upward
			if (input == 's')
				x++;  // move downward
			if (input == ' ')
				isFire = 1;
		}
	}	
}
