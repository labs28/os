#include <stdio.h>
#include <stdlib.h>

int main()
{
    int req[]={98,183,37,122,14,124,65,67};
    int n=8,head=53;
    int visited[8]={0};
    int seek=0;

    for(int i=0;i<n;i++)
    {
        int min=9999,index=-1;

        for(int j=0;j<n;j++)
        {
            if(!visited[j] &&
               abs(head-req[j])<min)
            {
                min=abs(head-req[j]);
                index=j;
            }
        }

        seek+=min;
        head=req[index];
        visited[index]=1;
    }

    printf("Total Seek Time = %d\n",seek);

    return 0;
}
