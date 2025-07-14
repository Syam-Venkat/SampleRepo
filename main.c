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
    for(int i=0;i<5;i++)
    {
        ptr[i] = i+1;
    }
    max = smax = ptr[0];
    for(int i=0;i<5;i++)
    {
        if(ptr[i]>max)max = ptr[i];
        else if(ptr[i]>smax && ptr[i]<max)smax=ptr[i];
    }
    printf("Maximum:%d\nSecond Maximum:%d\n",max,smax);
    return 0;
}