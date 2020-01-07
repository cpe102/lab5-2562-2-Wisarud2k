#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N],i=0;
	while(i < N){
		cout << "Name of student "<<i+1<<" = ";
		cin>> name[i];
		cout << "Age of student "<<i+1<<" = ";
		cin>> age[i];
		i++;
	}
	
	int key,j=0;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	while(j < key){
		if(age[j] == key){
			cout<<name[j]<<"\n";
		}
		j++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}
