#include <stdio.h>

int main(){

    printf("          This is a basic calculator       \n");

    int a,b,u_i;

    // Takes user input

    printf("\nEnter the first number:\n");
    scanf("%i", &a);

    printf("Enter the second number:\n");
    scanf("%i", &b);

    printf("Enter the number of the corresponding operation you want to perform:\n1. Add  \t2. Subtract\t3. Multiply\t4. Divide\t");

    scanf("%i", &u_i);

    // Switch condition-- Calculation of user inputs

    switch(u_i){
        case 1:
            printf("The sum of %i and %i is %i\n", a, b, a+b);
            break;

        case 2:
            printf("Subtracting %i from %i gives %i\n", b, a, a-b);
            break;

        case 3:
            printf("Multiplying %i and %i, we get %i\n", a, b, a*b);
            break;

        case 4:
            if(b == 0){
                printf("Can't divide by 0.\n");
                break;
            }else{
                float c;
                c = (float)a / (float)b; 
                printf("Dividing %i by %i gives %f\n", a, b, c);
                break;
            }

        default:
            printf("You've entered the wrong number. Try again!!\n");          
    }

    return 0;
}