#include<iostream>
#include<stdbool.h>
using namespace std;
int main(){
	int n;
	cout<<" Enter the number of process: ";
	cin>>n;
	//resource type
	int m;
	cout<<" Enter the number of resourse type: ";
	cin>>m;
	//available array
	cout<<" Enter the available array: ";
	int av[m];
	for(int i = 0;i<m;i++){
		cin>>av[i];
	}
	
	//allocation matrix
	cout<<"Enter the allocation matrix";
	int al[n][m];
	for(int i = 0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>al[i][j];
		}
	}
	
	//max matrix
	cout<<"Enter the max matrix: ";
	int max[n][m];
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>max[i][j];
		}
	}
	//claculating need matrix
	int need[n][m];
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			need[i][j] = max[i][j] - al[i][j];
		}
	}
	//printing the need matrix
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cout<<need[i][j]<<" ";
		}
	}
	
	//safty algorithm
	/*
	1) Let Work and Finish be vectors of length ‘m’ and ‘n’ respectively. 
Initialize: Work = Available 
Finish[i] = false; for i=1, 2, 3, 4….n
2) Find an i such that both 
a) Finish[i] = false 
b) Needi <= Work 
if no such i exists goto step (4)
3) Work = Work + Allocation[i] 
Finish[i] = true 
goto step (2)
4) if Finish [i] = true for all i 
then the system is in a safe state 
 */
 
 
 //int work[m], 
	
	
	//safty algorithm
	//1 safe state 0 - unsafe : terminate 
	//declare finish vector in safly
	//find need, av
	int work[m];
	bool finish[n];
	for(int i =0;i<n;i++){
		work[i] = av[i];
		finish[i] = false;
	}
	for(int i =0; i<n; i++){
		if(finish[i] == false && need[i]<=work){
			for(int j =0;j<n;j++){
				work[j] = work[j] +al[i][j];
			}
			finish[i] = true;
			
		}
		else if(finish[i] == true){
			cout<<"\nYour system is in safe state.\n";
			break;
		}
			if(finish[i] != true){
			cout<<"\nYour system is in unsafe state.\n";
			break;
		}
	}
	return 0;
	
}






/*
// You are using GCC
#include<iostream>
using namespace std;
int main(){
    //Enter the number of process
    int n;
    cin>>n;
    //Enter the number of resourses
    int m;
    cin>>m;
    //Max Matrics
    int max[n][m];
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            max[i][j];
        }
    }
     
     
    //Allocation Matrix
    int al[n][m];
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>al[i][j];
        }
    }
    
    //Avilable Matrix
    int av[m];
    for(int i =0;i<m;i++){
        cin>>av[i];
    }
    
    //Enter the requesting process number
    int rp;
    cin>>rp;
    
    //Request Vector
    int Request[n];
    for(int i =0;i<n;i++){
        cin>>Request[i];
    }
    //need matrix
    int need[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            need[i][j] = max[i][j] - al[i][j];
        }
    }
    //Displayinh need matrix
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++){
            cout<<need[i][j]<<"  ";
        }
    }
    
    //Safty algorithm
    int work[m], Finish[n];
    for(int i=0;i<n;i++){
        work[i] = av[i];
        Finish[i] = false;
        if(Finish[i] == false && need[i] <= work[i]){
            if(Finish[i] == true){
                cout<<"2";
            }
            for(int j=0;j<m;j++){
                work[i] = work[i] + al[i][j];
                Finish[i] = true;
            }
        }
        else{
            cout<<"3";
        }
    }
    
    //Resourse request algorithm
    for(int i=0;i<n;i++){
        if(Request[i] <= need[i]){
        if(Request[i]<=av[i]){
            av[i] = av[i] - Request[i];
            al[i] = al[i] + Request[i];
            need[i] = need[i] - Request[i];
            cout<<"1";
        }
        else{
            //process has to wait
        }
    }
    else{
        cout<<"0";
    }
    }
    
    
}*/

