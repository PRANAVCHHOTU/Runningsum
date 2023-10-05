#include <iostream>
using namespace std;
int main() 
 {
     int result;
        int totalsum=0;
        int rowsum=0;
        int N;
        cout<<" no of array .";
        cin>>N;
        int array[N]; 
        cout<<"take value of array from 1 to n.";
        for(int i=0;i<N-1;i++)
        {
            cin>>array[i];
        }
        cout<<" array taken ";
        for(int i=0;i<N-1;i++){
            cout<<array[i];
            cout<<" ";
        }
        cout<<" "<<endl;
        for(int i=0;i<N-1;i++)
        { 
            rowsum+=array[i]; 
        }
        cout<<"sum of rows is ."<<rowsum<<endl;
        for(int i=1;i<=N;i++) {
            totalsum+=i;
        }
         result= totalsum-rowsum;
        cout<<"TOTAL SUM IS. "<<totalsum<<endl;
       
        cout<<"missing number is ."<< result<<endl;
        
       // cout<<"missing output. "<<result;
 }