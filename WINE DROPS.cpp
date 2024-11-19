#include <stdio.h>
#include <conio.h>

main(void) {
    
    int hr = 0, drops = 0, cat = 0, proceed = 0, b = 0;

do {
    printf("Please input hours: ");
    scanf("%d", &hr);
    
    if (hr > 0) 
	{ printf("\nThe drops of wine in %d hour/s ", hr);
		for (hr = 0; hr >= 1; hr++) 
		{	drops = (hr * 162); // - ((hr/3) * 28);
        	cat = (hr/3) * 28;
        	printf("is %d. The cat drank %d drops", drops, cat); 
		}
        
	}
	
	else {
	printf("Invalid input! Try again.");
		 }            	
		 
	printf("\n\n\t\t\tTry again? (1 - YES 0 - NO): ");
	scanf("%d", &proceed);
	
	}	while (proceed == 1);
		
getch();
}
