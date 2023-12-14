/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 119;
    if (i <=30){
        printf("免費");
    }
    
    else if (i>=240) {
        printf("240元");
    }
    else{
        if(i%30){
            int h = ((i/30)+1)*30;
            printf("%d元",h);
            
        }
        else {
            printf("%d元",i);
        }
    }
    return 0;
}
