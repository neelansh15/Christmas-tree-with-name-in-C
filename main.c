#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int main(){
    menu();
    return 0;
}
void menu()
{
    system("CLS"); //Clear screen
    int i, ans;
    printf("Menu\n");
    char options[3][10] = {
    "Pattern 1",
    "Pattern 2",
    "Exit"
    };

    for(i = 0; i < 3; i++){
        printf("%d. ", i + 1);
        printf(options[i]);
        printf("\n");
    }

    printf("Your choice:");
    scanf("%d", &ans);

    switch(ans){
    case 1:
        printf("Pattern 1:\n");
        pattern1();
        break;
    case 2:
        printf("You will see pattern 2");
        break;
    case 3:
        break;
    default:
        menu();
    }
}

//Patterns
void pattern1(){
 int i, n;
    int total = 10;
    char name[] = {'N', 'E', 'E', 'L', 'A', 'N', 'S', 'H'};
    int nameLength = 8;

    //Cherry on top of christmas tree
    printf("\t\t   *\n");
    for (i = 1; i <= total; i++){

        printf("\t");
        blankSpace(total - i);

        for (n = 1; n <= i; n++){
            printf("*");
        }

        //This is according to the 'name' array length
        if (i <= nameLength)
            printf(" %c ", name[i - 1]);
        else
            printf("***");

        for (n = 1; n <= i; n++){
            printf("*");
        }

        printf ("\n");
    }

}
void blankSpace(int b){
    int p;
    for (p = 0; p < b; p++){
        printf(" ");
    }
}
