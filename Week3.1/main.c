#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        int count=0;
        while (x>0)
        {
            if (x%2==1)
                count++;
            x/=2;
        }
        printf("%d\n",count);

    }
    return 0;
}
