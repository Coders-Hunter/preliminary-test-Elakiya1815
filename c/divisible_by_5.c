#include <stdio.h>

void check_divisibility(int num) {
    // Expected output is "TRUE" or "FALSE"
    if(num%5==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main() {
    int num;
    scanf("%d", &num);
    check_divisibility(num);
    return 0;
}
