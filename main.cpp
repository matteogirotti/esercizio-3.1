#include <iostream>

int main() {
    int num;
    printf("inserisci un numero intero: ");
    scanf("%d", &num);
    if (num %2 == 0){
    printf("%d e' un numero pari\n", num);
    }else{
    printf("%d e' un numero dispari\n", num);
    }
}
