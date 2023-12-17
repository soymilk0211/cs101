/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    double pi = 4.0;
    int k = 0;
    int i = 3;
    for( i=3;i<=100000;i+=2){
        if (k==0){
            pi-=(4/i);
            k=1;
        }
        if(k==1){
            pi+=(4/i);
            k=0;
        }
        if(pi==3.14159){
            break;
        }
    }
    printf("%d",i);
    return 0;
}