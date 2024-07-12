 #include<bits/stdc++.h>
 using namespace std;
 int main(){
  
  int a[]={5,4,3,2,1};
  int n = sizeof(a)/sizeof(a[0]);
  int b[n];

  int j=n-1;
  for(int i=0;i<n;i++){
      b[j]=a[i];
    j--;
  }
  for(int i=0;i<n;i++)
  cout<<b[i]<<" ";
 }
