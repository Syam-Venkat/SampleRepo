#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Hello Dear, Welcome to the GitHub Session\n");
    int max,smax;
    int *ptr = (int*)malloc(5*sizeof(int));
    if(ptr == NULL)
    {
        return 0;
    }
    srand(time(0));
    for(int i=0;i<5;i++)
    {
        ptr[i] = rand() % 256;
        printf("%d ",ptr[i]);
    }
    max = smax = ptr[0];
    for(int i=0;i<5;i++)
    {
        if(ptr[i]>max)
        {   smax = max;
            max = ptr[i];
        }
        else if(ptr[i]>smax && ptr[i]<max)smax=ptr[i];
    }
    printf("\nMaximum:%d\nSecond Maximum:%d\n",max,smax);
    return 0;
}