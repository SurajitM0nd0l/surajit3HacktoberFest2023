#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int l,r;
    cin>>l>>r;
    if(r<=3){
      cout<<-1<<endl;
        return;
    }
    else if(r%2==0){
      cout<<r/2<<" "<<r/2<<endl;
    }
    else{
         
         if(r-1>=l){
          cout<<(r-1)/2<<" "<<(r-1)/2<<endl;
             return;
         }
         bool flag=false;
         for(int i=2;i*i<=l;i++){
           if(l%i==0){
            cout<<i<<" "<<l-i<<endl;
               return;
               
            flag=true;
           }
         }
         if(flag==false){
          cout<<-1<<"\n";
         }

    }
}

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
     solve();

  }
}
