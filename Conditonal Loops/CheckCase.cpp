#include<iostream>
using namespace std;
int main() {
	// Write your code here
	char a;
    cin>> a;
    
    if(a >='a' && a <='z'){
        cout<<"0";
    }
    else if(a >= 'A' && a <= 'Z'){
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
}
