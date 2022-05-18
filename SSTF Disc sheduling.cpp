// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int cp;
    cin>>cp;
    int n;
    cin>>n;
    int r[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    //int sum = 0,d,count = 0,index,min = 1000;
    int count =0,sum =0;
    while(count!=n){
        int d,index, min = 1000;
        for(int i =0;i<n;i++){
            d = abs(r[i] - cp);
            if(min>d){
                min = d;
                index = i;
            }
        }
        sum = sum+min;
        cp = r[index];
        r[index] = 1000;
        count++;
    }
    cout<<sum;
}

