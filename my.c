#include <stdio.h>

int main() {
    char s[100], ch, sen[100];

    scanf("%c", &ch);
    scanf("%s",&s);
    scanf(" %[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}