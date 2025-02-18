#include <stdio.h>

void check_divisibility(int num) {
    // Expected output is "TRUE" or "FALSE"
    if(num%5==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}

int main() {
    int num;
    scanf("%d", &num);
    check_divisibility(num);
    return 0;
}
