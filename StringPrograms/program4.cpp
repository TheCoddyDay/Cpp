#include <bits/stdc++.h>

int main()
{

    const char str[] = "I think I have less than 100";
    // this will apply its algorithm for counting things
    printf("without null character: %zu\n", strlen(str));
    // sizeof() is just a way to count all things in it
    printf("with null character:    %zu\n", sizeof(str));

    return 0;
}