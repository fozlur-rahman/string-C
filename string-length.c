#include <stdio.h>
#include <string.h>
int main()
{
    char a[14];
    fgets(a, 14, stdin);
    int ln = strlen(a);
    printf("%d", ln);

    return 0;
}

// its does use the loop too;