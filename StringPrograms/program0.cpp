#include <bits/stdc++.h>

int main()
{
    char *src = "The Coddy Day";
    // src[0] = 'M';              // this would be undefined behavior
    char dst[strlen(src) + 1]; // +1 to accommodation for the null terminator (just do it or have error)
    strcpy(dst, src);          // copy~ing it
    dst[0] = 'M';              // OK
    printf("src = %s\ndst = %s\n", src, dst);
    return 0;
}