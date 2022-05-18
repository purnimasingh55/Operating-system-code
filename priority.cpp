// You are using GCC
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iomanip>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    cin>>n;
    int at[n];
    for(int i = 0; i<n; i++){
        cin>>at[i];
    }
    int bt[n];
    for(int i = 0; i<n; i++){
        cin>>bt[i];
    }
    int p[n];
    for(int i =0; i<n; i++){
        cin>>p[i];
    }
    int pos,temp;
    for(int i =0; i<n; i++){
        pos = i;
        for(int j =0; j<n; j++){
            if(p[j]<p[i]){
                pos = j;
            }
        }
        swap(&p[i],&p[pos]);
        swap(&bt[i], &bt[pos]);
        swap(&p[i],&p[pos]);
    }
    int wt[n];
    wt[0] = 0;
    int total;
    for(int i =0; i<n; i++){
        wt[i] = 0;
        for(int j = 0; j<n; j++){
            wt[i] = wt[i] + bt[j];
            
        }
        total  = total + wt[i];
        
    }
    float av_wt = total / n;
    int total1 = 0;
    int tat[n];
    for(int i = 0; i<n; i++){
        tat[i] = bt[i] + wt[i];
        total1 = total1 +tat[i];
    }
    float av_tat = total1 / n;
    //printf("%.2f", av_tat);
    //printf("%.2d", av_wt);
    cout<<setprecision(4)<<av_tat<<"\n";
    cout<<av_wt;
	return 0;
    
    
}
