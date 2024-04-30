#include <stdio.h>

void multi(int i, int j) {
    if (j == 9) {
        printf("%d*%d=%d\n", i, j, i*j);
        this(i+1);
    } else {
        printf("%d*%d=%d ", i, j, i*j);
        multi(i, j + 1);
    }
}

void this (int i){
    if (i == 9){
        multi(i,1);
        return 1;
    }
    if (i<9){
        multi(i,1);
        this;
        i++;
    }
}
int main() {
    this(1);
    return 0;
}
