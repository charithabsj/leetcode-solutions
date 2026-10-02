#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize) {
    for (int i = 0, j = sSize - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main(void) {
    char s[] = "hello";
    reverseString(s, (int)strlen(s));
    printf("%s\n", s);
    return 0;
}
