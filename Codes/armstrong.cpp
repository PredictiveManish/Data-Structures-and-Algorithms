#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    int original = n;
    while(n > 0){
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit* lastdigit; // Using integer multiplication for accuracy
        n = n / 10;
    }

    if(sum == original){
        cout << "Armstrong number!";
    }
    else{
        cout << "Not an Armstrong number.";
    }
    
    return 0;
}
