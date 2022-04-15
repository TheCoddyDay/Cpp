#include <bits/stdc++.h>

int main()
{

    char src[] = "hi";
    char dest[6] = "abcde"; // no null terminator
    strncpy(dest, src, 5);  // writes five characters 'h', 'i', '\0', '\0', '\0' to dest
    printf("strncpy(dest, src, 5) to a 6-byte dest gives : ");
    for (size_t n = 0; n < sizeof dest; ++n)
    {
        char c = dest[n];
        c ? printf("'%c' ", c) : printf("'\\0' ");
    }

    printf("\nstrncpy(dest2, src, 2) to a 2-byte dst gives : ");
    char dest2[2];
    strncpy(dest2, src, 2); // truncation: writes two characters 'h', 'i', to dest2
    for (size_t n = 0; n < sizeof dest2; ++n)
    {
        char c = dest2[n];
        c ? printf("'%c' ", c) : printf("'\\0' ");
    }
    printf("\n");

    return 0;
}