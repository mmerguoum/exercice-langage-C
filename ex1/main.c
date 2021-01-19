#include <stdio.h>
#include <stdlib.h>

int main()
{

int age;
   char nom [10], prenom [10], num_tel[10], sex;

    printf("entre votre nom     : ");
    scanf("%s" ,&nom);

    printf("entre votre prenom  : ");
    scanf("%s" ,&prenom);

    printf("entre votre num_tel :");
    scanf("%s" ,&num_tel);

    printf("entre votre sex     :");
    scanf("%c" ,&sex);

    printf("entre votre age     :");
    scanf("%d" ,&age);


    //printf(%s , nom);


    printf("bonjour %s - %s vous etes %c votre age est %d \n votre N° de tel est %d", nom, prenom, sex, age, num_tel);
    return 0;
}
