#include <iostream>
using namespace std;
int main() 
 {
    int temp,n;
    cin>>n;
    int a[n];
    
    //int newa[n];
    cout<<" give input of array .";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<< "print array .";
    for(int i=0; i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"sorted array is."<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 }