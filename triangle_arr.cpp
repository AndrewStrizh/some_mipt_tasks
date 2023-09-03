#include <stdio.h>
int triangle(int s[], size_t size);

int main(void){
    int s[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    triangle(s, sizeof(s)/sizeof(s[0]));
    return 0;
}

int triangle(int s[], size_t size)
{
    int j = 0;
    size-=1;
    for (int i = 0; j <= size; i++)
    {
        int c = j+i;
        for (j; j<=c; j++)
            if(j > size)
                break;
            else
                printf("%3d ",s[j]);
        printf("\n");
    }
}