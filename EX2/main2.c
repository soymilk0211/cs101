/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 5;
    if (i & 15==0){
        printf("Love IU");
    }
    else if(i%3==0){
        printf("Love");
        
    }
    else if(i%5==0){
        printf("IU");
        
    }
    else {
        printf("%d\n",i);
    }
    return 0;
}
