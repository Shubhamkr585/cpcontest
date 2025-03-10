#include <iostream>
using namespace std;

int main() 
{
int arr[]={4,5,5,5,6,8,8,8,2,8};
int n=10;
int unique=0,i;
for(i=0;i<n;i++){
bool flag=false;
for(int j=i-1;j>=0;j--){
if( arr[i]==arr[j])
flag=true;
}
if(!flag){
arr[unique++]=arr[i];
}
}
for(int j=0;j<unique;j++)
cout<<arr[j]<<"  ";

return 0;
}