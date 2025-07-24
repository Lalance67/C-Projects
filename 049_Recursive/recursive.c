#include <stdio.h>

void recurse(int, int);
int main() {

    recurse(1, 10);

    return 0;
}
void recurse(int n, int l) {
    if(n > l) {
        return;
    }
    else {
        printf("\nyou take %d step", n);
        recurse(n + 1, l);
    }
}