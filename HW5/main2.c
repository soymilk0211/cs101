/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    double pi = 4.0;
    int k = 1;
    int x = 0;
    for (int i=3 ; i<=1000000 ; i+=2){
        if (k==0){
            pi+=(4.0/i);
            k =1;
        }
        else if (k==1){
            pi-=(4.0/i);
            k =0;
        }
        int ipi = pi*1000000;
        if (ipi == 3141592){
            x=i;
            break;
            
        }
    }
    printf("%d %.5f",x,pi);
    return 0;
}