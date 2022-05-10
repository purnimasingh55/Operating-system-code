/*//First in First out paging algorithm
#include<iostream>
using namespace std;
int search(int rf, int pgl[10], int f){
	for(int i=0;i<f;i++){
		if(pgl[i]==rf){
			return 0;
		}
	}
	return 1;
}
int main(){
	//taking input from the user
	cout<<"Enter the number of reference string you want to enter: ";
	int n;
	cin>>n;
	//Taking Refenence string as the user input
	int ReferenceString[n];
	cout<<"Enter the reference String: "
	for(int i =0;i<n;i++){
		cin>>ReferenceString[i];
	}
	//Taking user frames as the input from the user
	int f;
	cin>>f;
	
	int pgl[f];
	for(int i=0;i<f;i++){
		pgl[i] = -1;
	}
	
	int count = 0;
	for(int i=0;i<f;i++){
		if(pgl[i] == -1){
			ReferenceString[i] = pgl[i];
			count++;
		}
		if(search(ReferenceString[i],pgl, f)==1){
			pgl[j] = 
		}
	}
	
}

*/


#include<iostream>
#include<queue>
#include<cstdlib>

using namespace std;
struct node{
	int val;
	struct node * next;
	
};

int find(struct node *front, int x){
	struct node * temp;
	temp = front;
	
	while(temp!=NULL){
		if(temp->val==x){
			return 1;
		}
		else{
			temp = temp->next;
		}
	}
	return 0;
}
int main(){
	int n,m,i,j,a[100],ff,pf=0;
	struct node *front, *rear,*temp;
	cout<<"Enter the number of values in reference string" <<endl;
	cin>>n;
	cout<<"Enter the reference string";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the number of frames";
	cin>>m;
	ff = m;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->val = a[0];
	front = temp;
	rear = temp;
	front->next= NULL;
	ff--;
	pf++;
	for(i = 1;i<n;i++){
		if(find(front,a[i])==0){
			pf++;
			temp = (struct node *)malloc(sizeof(struct node));
			temp->val=a[i];
			rear->next = temp;
			temp->next = NULL;
			rear = temp;
			if(ff>0){
				ff--;
			}
			else{
				front = front->next;
			}
		}
		
		temp=front;
		cout<<"After insertion"<<i<<endl;
		while(temp!=NULL){
			cout<<temp->val<<"  ";
			temp= temp->next;
		}
	}
	cout<<pf;
	return 0;
}
