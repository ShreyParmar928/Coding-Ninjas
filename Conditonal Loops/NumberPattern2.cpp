#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
    int val=1;
    
    while(i<=N){
        int space=1;
      
        while(space<=N-i){
        		cout<<" ";
        		space=space+1;
		}
		int j=1;
        val=i;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;  
	}
}
