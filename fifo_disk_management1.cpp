#include <bits/stdc++.h>

using namespace std;
float FIFO(int req[],int pos,int n)
{
    float total=0;
    for(int i=0;i<n;i++)
    {
        total+=abs(pos-req[i]);
        pos=req[i];
    }

    float avg=total/n;
    return avg;
}

int main()
{
    int n,pos;
   cout<<"Enter the number of requests:";
   cin>>n;
  int req[n];
  cout<<"Enter the requests:";
  for(int i=0;i<n;i++)
  {
      cin>>req[i];
  }
  cout<<"Enter the positon where initially circular arm is present:";
  cin>>pos;
  cout<<FIFO(req,pos,n);
    return 0;
}
