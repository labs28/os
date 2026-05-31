#include <stdio.h>

int main()
{
    int pages[]={1,2,3,4,1,2,5,1,2,3,4,5};
    int frame[3];
    int faults=0,k=0;

    for(int i=0;i<3;i++)
        frame[i]=-1;

    for(int i=0;i<12;i++)
    {
        int found=0;

        for(int j=0;j<3;j++)
        {
            if(frame[j]==pages[i])
                found=1;
        }

        if(!found)
        {
            frame[k]=pages[i];
            k=(k+1)%3;
            faults++;
        }
    }

    printf("Page Faults = %d\n",faults);

    return 0;
}
