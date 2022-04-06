#include <stdio.h> 
#include <stdlib.h>

int width;          
int length;         
int area;                 

int main() {
	
    printf("Enter the value of width/n");
    scanf("%d", &width);
    
    printf("Enter the value of length/n");
    scanf("%d", &length);

    if(length==width){
        area = length*width;
        printf("This is a square. It area is = %d square centimeters\n", area);
    }else{
        area = length * width;
        printf("This is a square. It area is = %d square centimeters\n", area);   
    };
	

return(0);
}
