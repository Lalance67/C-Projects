#include <stdio.h>

void recurse(int);
int main() {

    recurse(5);

    return 0;
}
void recurse(int n) {
    if(n == 0) {
        return;
    }
    else {
        printf("\ntaking off in %d", n);
        recurse(n - 1);
    }
}