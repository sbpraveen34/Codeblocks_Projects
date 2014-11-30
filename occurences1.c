#include<stdio.h>
#define SIZE 20
#include <stdlib.h>
void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
int main()
{
    int vett1[SIZE], vett2[SIZE],checkarray[SIZE];
    int n, i, j,count=0,count1=0;
    int flag=0;
    printf ("Imput n: ");
    scanf  ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("Imput %d di %d: ", i+1, n);
        scanf  ("%d", &vett1[i]);
    }

    for(i=0;i<n;i++)
    {
        if(vett1[i]%2==0)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(vett1[j]==vett1[i])
                {
                    count++;
                }
            }
            printf ("%d %d\n",vett1[i],count);
        }
    }

return 0;
}
