#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, d, b;
    cin>>a>>d>>b;

    int evenSum=0;
    cout<<"Sequence: ";
    for(int i=a; i<=b; i+=d){

        cout<<i<<" ";

        if(i%2==0){
            evenSum=evenSum+i;
        }

    }

    cout<<"\nSum of even numbers: "<<evenSum;
    
    return 0;

}
