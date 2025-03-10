#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    int cnt=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)
        {
            cnt++;
            break;
        }
    }
    return cnt!=0;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cnteven=0,cntodd=0,deflect=0;
	    vector<int>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%2==0)
	        cnteven++;
	        else
	        cntodd++;
            if(a[i]>2)
            deflect=1;
	    }
	    if(n==2){
	        if(isPrime(a[0]+a[1]))
	        cout<<1<<" "<<2<<endl;
	        else
	        cout<<-1<<endl;
	    }
        else if(deflect==0)
        {
           if(cnteven>=2){
               int pos1=-1,pos2=-1;
               for(int i=0;i<n;i++){
                   if(a[i]%2==0){
                       if(pos1==-1)
                       pos1=i+1;
                       else{
                           pos2=i+1;
                           break;
                       }
                   }
               }
              cout<<pos1<<" "<<pos2<<endl; 
           }
           cout<<-1<<endl;
        }
	    else{
	        if(cnteven>=2){
	            int index1=-1,index2=-1;
	            for(int i=0;i<n;i++){
	                if(a[i]%2==0){
	                    if(index1==-1)
	                    index1=i+1;
	                    else{
	                        index2=i+1;
	                        break;
	                    }
	                }
	            }
	            cout<<index1<<" "<<index2<<endl;
	        }
	        else if(cntodd>=2){
	            int index1=-1,index2=-1;
	            for(int i=0;i<n;i++){
	                if(a[i]%2==1){
	                    if(index1==-1)
	                    index1=i+1;
	                    else{
	                        if(a[i]>2)
	                        {
	                            index2=i+1;
	                            break;
	                        }
	                    }
	                }
	            }
	            if(index2!=-1)
	            cout<<index1<<" "<<index2<<endl;
				else{
					int pos=-1,pos2=-1;
					for(int i=0;i<n;i++){
						if(a[i]==1)
						{
							pos=i+1;
							
						}
						else if(a[i]>2)
						pos2=i+1;
				}
				if(pos2==-1 || !isPrime(a[pos]+a[pos2]))
				cout<<-1<<endl;
				else 
				cout<<pos<<" "<<pos2<<endl;

	        }
	    }
	}

}
}

