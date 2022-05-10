/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of processes': ";
	cin>>n;
	//brust time
	cout<<"Enter the  brust time: ";
	int bt[n];
	for(int i = 0; i<n; i++){
		cin>>bt[i];
	}
	//arrival tiime
	cout<<"Enter the arrival time: ";
	int at[n];
	for(int i = 0; i<n ;i++){
		cin>>at[i];
	}
	//waiting time
	int wt[n];
	wt[0] = 0;
	for(int i = 0; i<n; i++){
		wt[i] = 0;
		for(int j = 0; j<n; j++){
			wt[i] = wt[i] + bt[j];
		}
	}
	//turmaround time
	int tat[n];
	double avtat = 0.0, avwt = 0.0;
	for(int i = 0; i<n; i++){
		tat[i] = wt[i] + bt[i];
		avwt = avwt +tat[i];
	}
	avtat = avtat/n;
	avwt = avwt/n;
	cout<<avtat<<"\n";
	cout<<avwt;
	
}*/
#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of process: ";
	cin>>n;
	int at[n];
	//arival time
	cout<<"Enter the arrival time: ";
	for(int i = 0; i<n; i++){
		cin>>at[i];
	}
	//Brust time
	int bt[n];
	cout<<"Enter the Brust time: ";
	for(int i = 0; i<n; i++){
		cin>>bt[i];
	}
	
	//waiting time
	int wt[n];
	wt[0] = 0;
	for(int i = 1; i<n; i++){
		wt[i] = bt[i-1] +wt[i-1];
	}
	
	
	//Turn around time
	int tat[n];
	for(int i = 0;i<n;i++){
		tat[i] = bt[i] + wt[i];
	}
		//response time
	int rt[n];
	rt[0] = 0;
	for(int i = 0; i<n; i++){
		
	}
	
	int total_wt = 0, total_tat = 0;
	for(int i = 0; i<n; i++){
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
	}
	cout<<setprecision(4)<<"Average waiting time: "<<(float)total_wt / (float)n;
	cout<<"\nAverage tuen around time: "<<(float)total_tat / (float)n;
	//float avtat = total_tat / n;
	//float avwt = total_wt / n;
	//printf("%2f\n", avtat);
	//printf("%2f", avwt);
	return 0;
}
