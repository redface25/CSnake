#include <stdio.h>
#include <stdlib.h>


typedef enum {FALSE = 0, TRUE} bool;

int main(){
    //pointer of map positions
    int * X = (int*)malloc(sizeof(int));
    int * Y = (int*)malloc(sizeof(int));
    int headPos[1][1], bodyPos[1];
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
        
        headPos[0][0] = x, y;

        bodyPos[0] = headPos[0][0];
        //tells you where the head is
        printf("%d, \n %d \n", heigthVal, widthVal);
    }

    return 0;
}
