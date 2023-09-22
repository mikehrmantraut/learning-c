#include <stdio.h>
#include <string.h>

int search(char *p[], char *name);
char *names[] = {
    "Baran",
    "Ahmet"
};

int main(void)
{
    if (search(names, "Baran") != -1)
        printf("Baran is in the list.\n");
    
    if (search(names, "Baran") == -1)
        printf("Baran is not in the list.\n");
    
}

int search(char *p[], char *name)
{
    register int t;
    for(t=0;p[t];++t){
        if(!strcmp(p[t], name)) return(t);
    }
    return (-1);
}
