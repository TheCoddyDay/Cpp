#include <bits/stdc++.h>

void useage(const char *a, const char *b)
{
    int compare = strcmp(a, b);
    if (compare == 0)
        printf("The both are same\n");
    else if (compare < 0)
        printf("Not Equal\n");
    else
        printf("Not Equal at all\n");
}

int main()
{
    const char *string = "Hello, World!!";
    useage(string, string);
    useage(string, "Hello!");
    useage(string, "Hello there, I wanna have you");
    return 0;
}