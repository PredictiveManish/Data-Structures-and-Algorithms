//  Sum of first n natural numbers
#include<iostream>
using namespace std;

int sum(int num){
    int sum =0;
    for(int i=1;i<=num;i++){
        sum +=i;

    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;


}