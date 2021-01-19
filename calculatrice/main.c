#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculatrice V1.0!\n");

    //Declaration des variavbles:
    int a, b;
    char c;
    printf("Entrer a: ");
    scanf("%d", &a);

    printf("%c", &c);
    scanf("%s ", &c);

    printf("Entrer b: ");
    scanf("%d", &b);


    //Affichage de la taille:
    printf("a en octal: %o\n", a);
    printf("b en octal: %o\n", b);

    printf("a en Hexadeciaml: %x\n", a);
    printf("b en Hexadeciaml: %x\n", b);

    //Declaration des operations:
    //char +, -, /, %, ;
    if (c == '+'){
        printf("La somme est: %d\n", a + b);
    }
    else if (c == '-'){
        printf("La soustraction est: %d\n", a - b);
    }
    else if (c == '*'){
        printf("La multiplication est: %d\n", a * b);
    }
    else if (c == '-'){
        printf("La Division est: %d et le reste %d\n", a / b, a % b);
    }
    else
        printf("Error");
    return 0;
}
