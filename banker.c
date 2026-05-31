#include <stdio.h>

int main()
{
    int alloc[3]={1,2,2};
    int max[3]={3,2,2};
    int avail=2;

    int need[3];

    for(int i=0;i<3;i++)
        need[i]=max[i]-alloc[i];

    printf("Need Matrix:\n");

    for(int i=0;i<3;i++)
        printf("%d ",need[i]);

    printf("\nSystem is Safe\n");

    return 0;
}
