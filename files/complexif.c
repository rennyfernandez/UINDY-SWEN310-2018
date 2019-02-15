#include <stdio.h>

int main(void) {
    
    int y; int i;
    srand(time(0));
    
    printf("roll the dice....\n\n");
    y = rand() % 6 + 1;
    
    printf("the number is : %d\n", y);
    
   if (y==3||y==2||y==4||y==5) {
      //if (y==3||y) {
        while(y>1) {
        for (i=0; i<y; i++)
        printf("my %d is always less than 1\n\n", y);
        break;
        
        }
        
      }
    
    return 0;
}
