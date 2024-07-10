 #include<bits/stdc++.h>
using namespace std;
int min(int a[],int n){
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    if(a[j]<a[i])
    {
      int temp = a[i];
      a[i]=a[j];
      a[j]=temp;
    }
   }
   }
    return a[0];
}
int max(int a[],int n){
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    if(a[j]>a[i])
    {
      int temp = a[i];
      a[i]=a[j];
      a[j]=temp;
    }
   }
   }
    return a[0];
}
int main(){
  int n=6;
  int a[] = { 1000, 11, 445, 1, 330, 3000 };

   cout<<"Minimum element is: "<<min(a,n)<<endl;
   cout<<"Maximum element is: "<<max(a,n);
}