#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    float f;
    int coins = 0;
    
    //get change
    do
    {
        f = get_float("Change owed: ");
         
    }
    while (f < 0);
    
    //convert the dollars to cents for ease of checking
    int change = round(f * 100);
    
//subtract money from the change until 0
    while (change > 0)
    {
    //subtract a quarter
    if(change >= 25)
    {
		change = change -25;
		coins += 1;
	}
    //subtract a dime
	else if(change >= 10)
    {
		change = change - 10;
		coins += 1;
	}
    //subtract a nickel
	else if(change >= 5)
    {
		change = change - 5;
		coins += 1;

	}
    //subtract a penny
else if(change >= 1)
    {
		change = change - 1;
		coins += 1;
	}
}
    
printf("%d \n", coins);

}
