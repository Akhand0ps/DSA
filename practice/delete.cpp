#include <iostream>
using namespace std;
void deleteElement(int arr[],int &n,int pos)
{
if(pos<0 || pos>=n)
{
cout<<"invalid position";
return;
}
for(int i=pos;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;

}



int main()
{
int arr[]={10,20,30,40,50};
int n=5;
int pos=2;
deleteElement(arr,n,pos);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}