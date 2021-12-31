#include <stdio.h>

int main()
{
    
    int n1,n2,n3; 
     scanf("%d",&n1);           
    int a[10],b[10],c[130];  
   
   for(int i=0;i<n1;i++)     
    {
       scanf("%d",&a[i]);
      //  c[i]=a[i];
    }
    scanf("%d",&n2);
    
    for(int i=0;i<n2;i++)     
    {
        scanf("%d",&b[i]);
        // c[k]=b[i];
        // k++;
    }
    n3=n1+n2;
    
    for(int i=0;i<n1;i++)
    {
      c[i]=a[i];

    }
    int k=n1;
    for(int i=0;i<n1;i++)
    {
      c[k]=b[i];
      k++;

    }
     for(int i=0;i<n3;i++)
    {
        printf("%d ",c[i]); 

    }

    
    
    return 0;   
      }