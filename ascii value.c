#include <stdio.h>


int main()
{
    char character1, character2;
    printf("Enter two characters: ");
    scanf("%c %c",&character1 ,&character2);


    printf("wassup, ASCII value of character1 is: %d\n",character1);
    printf("wassup, ASCII value of character2 is: %d\n",character2);

    if(character1>=character2){
        printf("you are in 'if'.....");


    }
    else{
        printf("you are in 'else'....");

    }

    

    return 0;
}
