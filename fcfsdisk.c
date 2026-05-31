#include <stdio.h>
#include <stdlib.h>

int main()
{
    int req[]={98,183,37,122,14,124,65,67};
    int head=53;
    int seek=0;

    for(int i=0;i<8;i++)
    {
        seek += abs(head-req[i]);
        head=req[i];
    }

    printf("Total Seek Time = %d\n",seek);

    return 0;
}
