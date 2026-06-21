#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    if (str[i] == '\n') str[i] = '\0';
    
    int length = stringLength(str);
    printf("Length of \"%s\" = %d\n", str, length);
    
    return 0;
}