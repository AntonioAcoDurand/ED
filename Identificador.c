#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];  // Arreglo para almacenar la cadena ingresada
    int isNumber = 1; // Suponemos inicialmente que es un número

    printf("Ingrese una cadena: ");
    scanf("%99s", input);  // Leer una cadena, limitando a 99 caracteres

    // Verificamos si la cadena representa un número
    for (int i = 0; input[i] != '\0'; i++) {  // Iteramos sobre cada carácter de la cadena
        if (input[i] < '0' || input[i] > '9') {  // Verificamos si el carácter no es un dígito
            isNumber = 0;  // No es un número
            break;         // Salimos del bucle
        }
    }

    if (isNumber) {
        printf("'%s' es un número.\n", input);
    } else {
        printf("'%s' es una cadena de caracteres.\n", input);
    }

    return 0;
}
