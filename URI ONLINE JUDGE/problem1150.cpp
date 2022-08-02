#include <stdio.h>
int main()
{
    int x,z,sum=0,count=0;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&z);
        if(x<z)
            break;
    }
    while(1)
    {
       sum=sum+x;
       count++;
       if(sum>z)
        break;
       x++;
    }
    printf("%d\n",count);

}
