/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int i=1;
    int j=1;
    for (j=1;i*j<=81;j++ ){
        
        printf("%d*%d=%d\t",i,j,i*j);
        if (j*i==81){
            break;
        }
        if (j==9){
            printf("\n");
            i++;
            j=0;
        }
        
    }
    return 0;
}