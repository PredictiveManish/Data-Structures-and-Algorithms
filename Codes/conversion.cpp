#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal(int num){
    int ans =0;
    int x=1;
    while(num>0){
        int y= num%10;
        ans +=x*y;
        x*=2;
        num/=10;

    }   
    return ans;
}
int decimalToBinary(int num){
    int ans=0;
    int value =1;
    while(num>0){
        int remainder = num%2;
        ans +=remainder*value;
        num /=2;
        value *=10;
        
    }
    return ans;
}
int decimalToOctal(int num){
    int ans =0;
    int x=1;
    while(num>0){
        int y=num%8;
        ans+=x*y;
        num/=8;
        x*=10;
    }
    return ans;
    

}
int octalToDecimal(int num){
    int ans=0;
    int x=1;
     while(num>0){
        int y= num%10;
        ans +=x*y;
        x*=8;
        num/=10;

    }
    return ans;
}
int decimalToHexadecimal(int num){
    int ans =0;
    int x=1;
    while(num>0){
        int remainder=num%16;
        ans +=remainder*x;
        num/=16;
        x*=10;
    }
    return ans;
}
// Conversion 6
int hexadecimalToDecimal(int num){
    int ans=0;
    int x =1;
    while(num>0){
        int y=num%10;
        ans +=x*y;
        x*=16;
        num/=10;
    }
    return ans;

}
//Conversion 7
int binaryToOctal(long num){
    int ans=0;

}
int main(){
    int n;
    cin>>n;

    cout<<"Binary to decimal: "<<binaryToDecimal(n)<<endl;
    cout<<"Decimal to binary: "<<decimalToBinary(n)<<endl;
    cout<<"Decimal to Octal: "<<decimalToOctal(n)<<endl;
    cout<<"Octal to Decimal: "<<octalToDecimal(n)<<endl;
    cout<<"Decimal to Hexadecimal: "<<decimalToHexadecimal(n)<<endl;
    cout<<"Hexadecimal to Decimal: "<<hexadecimalToDecimal(n)<<endl;
    
    return 0;
}