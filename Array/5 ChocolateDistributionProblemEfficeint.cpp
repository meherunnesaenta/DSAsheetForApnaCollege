#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int a[]={12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50};
     int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int m;
    cin>>m;
    int sub=0;
    int mn=INT_MAX;
    for(int i=0;i+m-1<n;i++){
        
            sub=a[i+m-1]-a[i];
            mn=min(mn,sub);
        
    }
  
    
    cout<<"Minimum difference is "<<mn<<endl;
}
