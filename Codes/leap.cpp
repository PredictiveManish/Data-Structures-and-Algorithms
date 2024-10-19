#include<iostream>
using namespace std;

bool leapYear(int year){
    if(year%400==0){
        return true;
    }
    else if(year%4==0 && year%100!=0){
        return true;
    }
    else{
        return false;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter any year to check whether it's leap or not: ";
    cin>>n;
    if(leapYear(n)){
         cout<<"It is a leap year. "<<endl;
    }
    else{
        cout<<"It is not a leap year."<<endl;
    }

   

    return 0;
}