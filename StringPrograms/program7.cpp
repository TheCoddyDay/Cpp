#include <bits/stdc++.h>

int main()
{
    char someFileName[] = "folder/files/filename.txt";
    char *pLastSlash = strrchr(someFileName, '/');
    char *pBaseName = pLastSlash ? pLastSlash + 1 : someFileName;
    printf("Base Name: %s", pBaseName);
    return 0;
}