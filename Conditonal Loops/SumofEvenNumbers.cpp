#include<iostream>
using namespace std;


int main(){
	
    int N;
    cin>>N;
    int n=2;
    int sum=0;
    int temp=0;
    while(n<=N){
        if(n%2==0){
            temp=n;
            sum=sum+temp;
        }
        n=n+1;
    }
    cout<<sum<<endl;
}
