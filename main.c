#include <stdio.h>

int main() {
    int input, change;
    int w500, w100, w50, w10;
    
    printf("돈을 입력하세요 : ");
    scanf("%d", &input);
    
    change = input - 150;
    
    w500 = change / 500;
    change = change % 500;
    
    w100 = change / 100;
    change = change % 100;
    
    w50 = change / 50;
    change = change % 50;
    
    w10 = change / 10;
    
    printf("150원짜리 커피 하나를 사면\n");
    printf("500원짜리 동전 %d개\n", w500);
    printf("100원짜리 동전 %d개\n", w100);
    printf("50원짜리 동전 %d개\n", w50);
    printf("10원짜리 동전 %d개\n", w10);
    
    return 0;
}
