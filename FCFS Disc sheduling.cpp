// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int cp;
    cin>>cp;
    int n;
    cin>>n;
    int r[n];
    for(int i =0;i<n;i++){
        cin>>r[i];
    }
    int head =0, current_track, count = 0;
    for(int i= 0;i<n;i++){
        current_track = r[i];
        head = abs(r[i] - cp);
        count = count + head;
        cp = current_track;
    }
    cout<<count;
    return 0;
}
