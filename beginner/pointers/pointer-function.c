#include <stdio.h>
#include <string.h>

#define MAX_SIZE_OF_STR 80

void check(char *a, char *b, int (*cmp)(const char *, const char *))
{
    printf("Testing for equality.\n");
    if (!(*cmp)(a, b)) printf("Equal");
    else printf("Not equal");
}

int main(void)
{
    char s1[MAX_SIZE_OF_STR], s2[MAX_SIZE_OF_STR];
    int (*p) (const char *, const char *);

    p = strcmp; // assign address of strcmp to p
    printf("Enter two strings.\n");
    gets(s1);
    gets(s2);
    check(s1, s2, p);

    return 0;
}
