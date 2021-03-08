#include <stdio.h>
#include <stdlib.h>


typedef enum {FALSE = 0, TRUE} bool;

int main(){
    int * X = (int*)malloc(sizeof(int));
    int * Y = (int*)malloc(sizeof(int));
    bool checkState = TRUE, hitApple = FALSE;
    char posVal;
    int x, y;
    int heigthVal, widthVal;

    while(checkState == TRUE){
        //gets Value
        scanf("%c", &posVal);

        //checks what value it is and changes it appropriately
        if(posVal == 'w'){
            heigthVal += 1;
        }
        else if(posVal == 's'){
            heigthVal -= 1;
        }
        else if(posVal == 'a'){
            widthVal--;
        }
        else if(posVal == 'd'){
            widthVal++;
        }

        //changes ints and pointers to proper values
        x = heigthVal;
        y = widthVal;
        Y = &y;
        X = &x;


        //tells you where the head is
        printf("%d, \n %d \n", heigthVal, widthVal);
    }

    return 0;
}
