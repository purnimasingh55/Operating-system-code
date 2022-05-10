// You are using GCC
#include<iostream>
using namespace std;
int find(int time[], int n){
    int  pos = 0, min = time[0];
    for(int i =0;i<n;i++){
        if(time[i]<min){
            min = time[i];
            pos = i;
        }
    }
    return pos;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int f,count = 0;
    cin>>f;
    int frame[f], time[f], faults = 0;
    for(int  i=0;i<n;i++){
        frame[i] = -1;
    }
    for(int i =0;i<n;i++){
       int  flag1 = 0, flag2 = 0;
       
        for(int j = 0;j<f;j++){
            if(frame[j] == a[i]){
                count++;
                faults++;
                time[j] = count;
                flag1 = flag2 = 1;
                break;
            }
        }
        if(flag1==0){
            for(int j =0;j<f;j++){
                if(frame[j] == -1)
                {
                    count++;
                    faults--;
                    frame[j] = a[i];
                    time[j] = count;
                    flag2 = 1;
                    //break;
                }
            }
        }
        if(flag2 == 0){
            int pos = find(time, f);
            count++;
            faults--;
            frame[pos] == a[i];
            time[pos] = count;
        }
    }
    cout<<faults;
    return 0;
    
}
