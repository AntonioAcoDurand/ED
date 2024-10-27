 #include <stdio.h>
 #include <stdlib.h>
    int main () {
      int num; 
      printf("Introduce un número\n:");
      scanf("%d",&num);
      (num % 2 == 0 ) ? printf("Par\n") : printf("Impar\n");
      return EXIT_SUCCESS;
    }
