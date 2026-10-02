#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize == 0) {
        char *result = malloc(1);
        result[0] = '\0';
        return result;
    }

    char *prefix = malloc(strlen(strs[0]) + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (strs[i][j] != '\0' && prefix[j] != '\0' && strs[i][j] == prefix[j]) {
            j++;
        }
        prefix[j] = '\0';
    }

    return prefix;
}

int main(void) {
    char *words[] = {"flower", "flow", "flight"};
    char *result = longestCommonPrefix(words, 3);
    printf("%s\n", result);
    free(result);
    return 0;
}
