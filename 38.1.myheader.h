//Header Guards
#ifndef MYHEADER_H
#define MYHEADER_H

void print_n_numbers(int n);


void print_n_numbers(int n){
    for (int i = 1; i <= n ;i++){
        printf("%d ", i);
    }
}
#endif
