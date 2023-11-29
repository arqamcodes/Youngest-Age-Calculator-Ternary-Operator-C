#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

    int sarah_age, arqam_age, ahmed_age;
    

    // Take input from the user
    printf("Enter the age of Sarah: ");
    scanf("%d", &sarah_age);
    printf("Enter the age of Arqam: ");
    scanf("%d", &arqam_age);
    printf("Enter the age of Ahmed: ");
    scanf("%d", &ahmed_age);


    // Use the ternary operator to find the youngest person's age
    sarah_age < arqam_age ?((sarah_age < ahmed_age) ? printf("Sarah is the youngest") : printf("Ahmed is the youngest")) : 
	((arqam_age < ahmed_age) ? printf("Arqam is the youngest") : printf("Ahmed is the youngest"));
   

    return 0;
}

