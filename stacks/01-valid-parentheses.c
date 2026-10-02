#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isValid(char *s) {
    int top = -1;
    int len = (int)strlen(s);
    char stack[len + 1];

    for (int i = 0; i < len; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) {
                return false;
            }

            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main(void) {
    printf("%s\n", isValid("()[]{}") ? "true" : "false");
    printf("%s\n", isValid("([)]") ? "true" : "false");
    return 0;
}
