#include <stdio.h>

int main() {
    int bt[3] = {5,3,8};
    int wt[3];

    wt[0] = 0;

    for(int i=1;i<3;i++)
        wt[i] = wt[i-1] + bt[i-1];

    for(int i=0;i<3;i++)
        printf("P%d WT=%d\n", i+1, wt[i]);

    return 0;
}
