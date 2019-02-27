#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    
    //do whlie loop. does 1 action, then repeats until while is met
    do{
        height = get_int("Height: ");
    
        //Height < 1 program asks if height is not a number or is less than 1
        //a <= 8 so it's max height of 8
    }while(height < 1 || height > 8);
    
    //create a loop to RUN 'height' amount of times. Ex if height is 1 run once
    for(int i=height; i>0; i--){
        //create a loop for the first spaces, decending order
        //spaces will start 1 less than height, decreasing with the loop, so set it to "i"
        for(int space=i-1; space >0; space--){
            printf(" ");
            
        }
        for(int hash = height - i; hash >=0; hash--){
            printf("#");
        }
        
        printf(" ");
	    printf(" ");
	//should just be able to repeat the #'s
	//there doesn't need to be any spaces after so it'll just be 1, then 2.
	    for( int rightHash= height - i; rightHash >= 0; rightHash--){
            printf("#"); 
        }
        printf("\n");
        
    }
    
}
