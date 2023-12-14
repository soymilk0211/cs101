/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 2024;
    if (i & 400==0 ||(i%4==0&& i%100 !=0)){
        printf("閏年");
    }
    
    else {
        printf("不是閏年");
    }
    return 0;
}
