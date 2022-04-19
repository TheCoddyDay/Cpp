#include <bits/stdc++.h>

int main()
{

    const char *str = "I scream, you scream, we all scream for ice-cream";
    char target = 'a';
    const char *result = str;

    while ((result = strchr(result, target)) != NULL)
    {
        printf("Found '%c' starting at '%s'\n", target, result);
        ++result; // Increment result, otherwise we'll find target at the same location
    }

    return 0;
}