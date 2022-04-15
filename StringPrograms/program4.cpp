#include <bits/stdc++.h>

int main()
{

    const char str[] = "I think I have less than 100";

    printf("without null character: %zu\n", strlen(str));
    printf("with null character:    %zu\n", sizeof(str));

    return 0;
}