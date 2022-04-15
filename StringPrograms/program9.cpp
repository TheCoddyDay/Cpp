#include <bits/stdc++.h>

void useage(const char *lhs, const char *rhs, int sz)
{
    int rc = strncmp(lhs, rhs, sz);
    if (rc == 0)
        printf("First %d chars of [%s] equal [%s]\n", sz, lhs, rhs);
    else if (rc < 0)
        printf("First %d chars of [%s] precede [%s]\n", sz, lhs, rhs);
    else if (rc > 0)
        printf("First %d chars of [%s] follow [%s]\n", sz, lhs, rhs);
}

int main()
{
    const char *string = "Hello World!";
    useage(string, "Hello!", 5);
    useage(string, "Hello", 10);
    useage(string, "Hello there", 10);
    useage("Hello, everybody!" + 12, "Hello, somebody!" + 11, 5);

    return 0;
}