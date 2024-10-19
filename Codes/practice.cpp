//  Sum of first n natural numbers
#include<iostream>
using namespace std;

// int sum(int num){
//     int sum =0;
//     for(int i=1;i<=num;i++){
//         sum +=i;

//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// }

// Checking pythagorean triplet
bool check(int x, int y, int z){
    int a= max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a pythagorean triplet.";
    }
    

    return 0;
}