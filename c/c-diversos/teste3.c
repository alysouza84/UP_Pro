// #include <stdio.h>

// int main (){
//     double number;
//     char alphabet;

//     printf("Enter double input: ");
//     scanf("%lf", &number);

//     printf("Enter character: ");
//     scanf("\n%c", &alphabet);

//     printf("Number: %lf", number);
//     printf("\nCharacter: %c\n", alphabet);

//     return 0;
// }

// fgets - gets the whole line of string.
// fgets(name, 20, stdin)

/*
Hierarch:
long double
double
float
long
int
short
char
*/


#include <stdio.h>

void sort(int *a, int *b, int *c) {
    int temp;
    
    // sort the numbers in ascending order
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int a, b, c;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // sort the numbers in ascending order
    sort(&a, &b, &c);
    
    // display the sorted numbers in ascending order
    printf("The numbers in ascending order are: %d %d %d\n", a, b, c);
    
    // display a blank line
    printf("\n");
    
    // display the original values in the sequence they were inputted
    printf("The original values were: %d %d %d", a, b, c);
    
    return 0;
}
