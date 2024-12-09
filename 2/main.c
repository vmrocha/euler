#include <stdio.h>

#define MAX 4000000

int main() {
    int result = 0;
    int prev = 1;
    int curr = 2;
    while (curr < MAX) {
        if (curr % 2 == 0) {
            result += curr;
        }
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    printf("%d\n", result);
    return 0;
}