#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=3;i++){
        for(int j=1;j<=9;j++){
            int star=i+j;
            if(star%2==0 && star>2){
                cout<<"*";
            }
            else{
                cout<<" "<<" ";
            }


        }
        cout<< endl;

    }
    return 0;
}