#include <iostream>
using namespace std;

int main() {
   int i,n,sum=0;
   cout<< "enter the number to take for arr size.";
   cin>>n;
   int a[n];
   cout<<"array of a[n]."<<endl;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"array is .";
   for(i=0;i<n;i++){
       cout<<a[i];
   }
   cout<<endl;
   cout<<"running output."<<endl;
   sum=a[0];
   cout<<sum <<" ";
   for(i=1;i<n;i++)
    {
        sum=sum+a[i];
        cout<<sum<<" ";
        //a[i]=a[i]+ a[i-1];
         //cout<<a[i] <<" ";
    }
    
    //cout<<a[n];
return 0;
}
