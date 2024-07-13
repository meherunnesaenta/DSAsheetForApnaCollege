 #include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int a[] = { 1000, 11, 445, 1, 330, 3000 };
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
   cout<<"Minimum element is: "<<a[0]<<endl;
   cout<<"Maximum element is: "<<a[n-1];
}
