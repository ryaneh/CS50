#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do{
        height = get_int("Height: ");      
    } while(height < 1);
    
    //for loop.  print the pyramid height
    for(int i=1; i<=height; i++){ 
        //for loop to print # across X times. 
        //first time do 1, second 2 ... until height is met.
        
        for(int dots = height - i; dots > 0; dots --){
            printf(" "); //was dots, changed to spaces
        }
        
        for( int numAcross=0; numAcross < i; numAcross++){
            //Print # up to the amount of i, since i matches each number up to height
            //so if height is 3, the first i will be 1, second i will be 2
            //this should allow us to print 1 time, then two times.
            printf("#"); 
        }
            printf("\n");
    }
}
