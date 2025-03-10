#include<iostream>
#include<vector>
using namespace std;
struct Elements{
    int row;
    int col;
    int value;
};
class Sparse{
    private:
    int Row;
    int Col;
    vector<Elements>ele;
    public:
    Sparse(int r,int c):Row(r),Col(c){}
     
     void addEle(int row, int col,int val){
        if(val!=0)
        ele.push_back({row,col,val});
     }
     void print(){
        for(auto i:ele){
            cout<<"Row: "<<i.row<<" Column: "<<i.col<<" value: "<<i.value<<endl;
        }
     }
     void matrixForm(){
        for(int i=0;i<Row;i++){
            for(int j=0;j<Col;j++ )
            {
                bool flag=false;
                for(auto it:ele){
                    if(it.row==i && it.col==j)
                    {
                        cout<<it.value<<" ";
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                cout<<0<<" ";
            }
            cout<<endl;
        }
     }

};
     int main()
{
   Sparse obj(4,5);
   obj.addEle(0,0,1);
   obj.addEle(1,2,1);
   obj.addEle(2,3,5);
   obj.addEle(3,4,5);
   obj.print();
   obj.matrixForm();
   return 0;
}