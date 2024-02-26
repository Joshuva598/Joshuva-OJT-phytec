#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char* str, int i, int j) {
    if (i >= j) {
        return true;
    }
    if (str[i] != str[j]) {
        return false;
    }
    return is_palindrome(str, i + 1, j - 1);
}

void check_palindrome(char* str) {
    int h = 0;
    int flag = 0;
    int l = strlen(str) - 1;

    while (h <= l) {
        if (str[l--] != str[h++]) {
            printf("%s is not a palindrome\n", str);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%s is a palindrome\n", str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    check_palindrome(str);

    printf("Checking %s using recursive approach\n", str);
    bool ans = is_palindrome(str, 0, strlen(str) - 1);
    if (ans)
        printf("It is a palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

