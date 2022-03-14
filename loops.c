#include<studio.h>
#include <stdlib.h>
int main(int argc, char**argv)
{
    printf("a number string: %s\n", argv[1]);
    char*numberstring = argv[1];
    int number = atoi(numberstring);
        if (number%2 ==0){
            printf("es un número entero");
        }else{
            printf("es un número impar");
        }

return 0;
}