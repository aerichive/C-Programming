#include <stdio.h>
#include <conio.h>

int main()
{
    int num=0, p=0, count=0, proceed=0;
    
do{

    printf("\n\n > Input a non-negative number: ");
    scanf("%d", &num);
    printf(" > Factors of %d are: ", num);
    
    if(num > 0)
    {
      for(p=1; p<=num; p++)
     {
        if(num%p==0)
        {
            printf("%d ",p);
            count++;
        }
     }
    }
    
    else {
    	printf("Invalid input! Try again.");
	     }
	
    printf("\n\n\t\t\t\tTRY Again? 1 - YES 0 - NO: "); // If the user wants to run the program again
    scanf("%d", &proceed);
    
	} while (proceed == 1);	
    
    
    getch();
}
