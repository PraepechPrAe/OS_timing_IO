#include<stdio.h>
#include<time.h>

int main()
{
    int a;
    clock_t withio_s, withio_e;
    clock_t withoutio_s, withoutio_e;

    withio_s = clock();
    for(int i=0; i<10; i++)
    {
        printf("E\n");
    }
    withio_e = clock();

    withoutio_s = clock();
    for(int i=0; i<10; i++)
    {
        a+=1;
    }
    withoutio_e = clock();

    printf("With IO: %f Without IO: %f\n", (double)(withio_e - withio_s), (double)(withoutio_e - withoutio_s));
}