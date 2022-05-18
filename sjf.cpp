// You are using GCC
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    cin>>n;
    int at[n], p[n], wt[n];
    for(int i = 0; i<n; i++){
        cin>>at[i];
    }
    int bt[n];
    for(int i = 0; i<n; i++){
        cin>>bt[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(at[i]>at[j]){
                swap(&p[i], &p[j]);
                swap(&at[i], &at[j]);
                swap(&bt[i], &bt[j]);
            }
            else if(at[i] == at[j]){
                if(bt[i]>bt[j]){
                    swap(&p[i],&p[j]);
                    swap(&at[i],&at[j]);
                    swap(&bt[i],&bt[j]);
                }
            }
            
        }
    }
    int tat[n], ct[n], min = 1000, pos;
    ct[0] = at[0] +bt[0];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(at[j] == ct[i-1]){
                if(bt[j]<min){
                    min = bt[j];
                    pos = j;
                }
            }
        }
        swap(&p[i], &p[pos]);
        swap(&at[i], &at[pos]);
        swap(&bt[i], &bt[pos]);
        min = 1000;
        ct[i] = ct[i-1] + bt[i];
    }
    for(int i = 0; i<n; i++){
        tat[i] = ct[i] - bt[i];
        wt[i] = tat[i] - bt[i];
    }
    int total_tat = 0, total_wt = 0;
    for(int i = 0;i<n; i++){
        total_tat = total_tat + tat[i];
        total_wt = total_wt + wt[i];
    }
    cout<<(float)total_wt / (float)n;
    cout<<(float)total_tat / (float)n;
}
/*
// You are using GCC
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n; 
    scanf("%d", &n);
    int at[n],p[n],wt[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &at[i]);
    }
    int bt[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &bt[i]);
    }
    for(int i =0; i<n; i++){
        for(int j = 0;j<n;j++){
            if(at[i]>at[j]){
             swap(&p[i], &p[j]);
             swap(&at[i], &at[j]);
             swap(&bt[i], &bt[j]);
            }
            else if(at[i] == at[j]){
                if(bt[i]>bt[j]){
                    swap(&p[i], &p[j]);
                    swap(&at[i], &at[j]);
                    swap(&bt[i], &bt[j]);
                }
            }
        }
    }
    int tat[n], ct[n], min = 1000, pos;
    ct[0] = at[0] +bt [0];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
        if(at[j] == ct[i-1]){
            if(bt[j]<min){
                min = bt[j];
                pos = j;
            }
        }
    swap(&p[i], &p[pos]);
    swap(&at[i], &at[pos]);
    swap(&bt[i], &bt[pos]);
    min = 1000;
    ct[i] = ct[i-1] + bt[i];
    }
    for(int i = 0; i<n; i++){
        tat[i] = ct[i] = bt[i];
        wt[i] = tat[i] - bt[i];
    }
    int total_tat = 0, total_wt = 0;
    for(int i = 0; i<n; i++){
        total_tat = total_tat + tat[i];
        total_wt = total_wt +wt[i];
    }
    float av_tat = total_tat / n;
    float av_wt = total_wt / n;
    printf("%.2f", av_tat);
    printf("%.2f", av_wt);
}

*/

