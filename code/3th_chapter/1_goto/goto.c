#include <stdio.h>

int main (){
    int op;
    
    while (op != 5) {
        REDO: printf("\n\nChoose an option 1 to 5: "); //Label "REDO"
        scanf("%d", &op);

        if(op > 5 || op < 1) goto REDO; //If choose an invalid option redo the choosing

        switch (op) {
            case 1: 
                printf("\n1st option selected.");
                break;
            case 2: 
                printf("\n2nd option selected.");
                break;
            case 3: 
                printf("\n3th option selected.");
                break;
            case 4:
                printf("\n4th option selected.");
                break;
            case 5:
                printf("\nLeaving...");
                break;
        }
    }
return(0);
}