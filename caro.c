#include <stdio.h>
#include <stdlib.h>

void board_print_top_hline();
void board_print_xo(int);
void board_print_hline();

void board_print_top_hline(){
    int i;
    printf("\u250C");
    for (i = 0; i < 14; i++) {
        printf("\u2500\u2500\u2500\u252C");
    }
    printf("\u2500\u2500\u2500\u2510\n");
}
void board_print_btm_hline(){
    int i;
    printf("\u2514");
    for (i = 0; i < 14; i++) {
        printf("\u2500\u2500\u2500\u2534");
    }
    printf("\u2500\u2500\u2500\u2518\n");
}
void board_print_xo(int line_num){
    int j;
    printf("\u2502");
    for (j = 0; j < 15; j++) {
        printf(" X \u2502");
    }
    printf("\n");
}
void board_print_hline(){
    int j;
    printf("\u251C");
    for (j = 0; j < 14; j++) {
        printf("\u2500\u2500\u2500\u253C");
    }
    printf("\u2500\u2500\u2500\u2524");
    printf("\n");
}
int main(){

    int i, j, k;
    board_print_top_hline();
    for (i = 0; i < 15; i++) {
        board_print_xo(i);
        if (i<14){
            board_print_hline();
        }
    }
    board_print_btm_hline();

    printf("\n");
    printf("     CARO in C lang - v1.0 by vietanhdev\n     vietanhdev.com\n");
}
