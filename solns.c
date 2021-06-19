/* Enter your solutions in this file */

int max(int a[],int n)
{
  int l=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>l)
      l=a[i];
  }
  return l;
}
    
int min(int a[],int n)
{
  int s=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]<s)
      s=a[i];
  }
  return s;
}

 float average(int a[],int n)
 {
   float sum=0;
   for(int i=0;i<n;i++)
   {
     sum=sum+a[i];
   }
   return(sum/n);
 }

int mode(int a[], int n)
{
  int count[n];
  int value,large;
  for(int i=0;i<n;i++)
  {count[i]=0;}
  
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
   {
     if(a[j]==i)
       count[i]=count[i]+1;                           
   }
  
  large=count[0];

  for(int i=0;i<n;i++)
  {
    if(count[i]>large)
    {
     large=count[i];
     value=i;
    }
  }
  return value;
}


int factors(int n, int a[])
{
  int flag,count=0, cpy=n;
  for(int i=2;i<=(n/2);i++)
  {
    if((a[i]%i)==0)
    {
      for(int j=2;j<=i;j++)
      {
        if((i%j)==0)
          flag=1;
        }
      if(flag==1)
      {
        while((n%i)==0)
        {
          a[count]=i;
          count++;
        }
      }
      flag=0;
    }
  }
  return count;
}
    
      
   
    
