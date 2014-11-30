#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main ()
{
    int vett1[SIZE], vett2[SIZE][2];
    int n, i, j,count=0;
    int flag;
    bool flag1=false;
    printf ("Imput n: ");
    scanf  ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("Imput %d di %d: ", i+1, n);
        scanf  ("%d", &vett1[i]);
    }

    printf ("\n\nYour vector: : ");

    for (i=0; i<n; i++)
    {
        printf ("%d ", vett1[i]);
        if(vett1[i]%2==0)
        {
            if(count==0)
            {
                vett2[count][0]=vett1[i];
                vett2[count][1]=0;
                count=count+1;
            }
            else
            {
                for(j=0;j<count;j++)
                {

                }
            }
        }
    }

    printf ("\n\n");
    return 0;
}
