#include <bits/stdc++.h>

int main()
{
    const char str[] = "I think I have more than 10";

    printf("not going out of value: %zu\n", strnlen(str, 10)); // thin will print 10 100%~ly
    printf("going out of value: %zu\n", strnlen(str, 100));    // this will not print 100 this wil print strlen(str)
    printf("with null character:    %zu\n", sizeof(str));      // like old one strlen(str) + 1
    return 0;
}