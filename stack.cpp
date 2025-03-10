#include<bits/stdc++.h>
using namespace std;
#define vec vector<int>v
#define ll long long int
#define MAXSIZE 10
class Stack{
    public:
    int *arr;
    int size;
    int top;
 Stack(int s):top(-1),size(s){
        arr=new int[size];
    }
    void push(int x){
        if(top==size-1){
            cout<<"overflow\n";
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    int pop(){
        if(top==-1)
         return -1;
         else{
            return arr[top--];
         }
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
Stack obj(5);
obj.push(1);
obj.push(2);
obj.push(3);
obj.push(4);
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.isEmpty()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
cout<<obj.pop()<<endl;
return 0;
}