#include <studio.h>
#include <stdlib.h>
int main(int argc, char**argv)

{
    printf("A number string: %s\n", argv[1]);
    char* numberstring= argv[1];
    int number= atoi(numberstring);
        if (number%2==0){
            printf("Es un número entero");
        }else{
            printf("Es un número impar");
        }




return 0
}