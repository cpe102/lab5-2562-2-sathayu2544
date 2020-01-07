#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int x = 0;
	while(x < N)
	{
		cout << "Name of student " <<x+1<< " = ";
	    cin >> name[x];
	    cout << "Age of student " <<x+1<< " = ";
	    cin >> age [x];
	    x++;
	}
	
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	x=0;
	while(x<N)
	{
	
	if (key ==age[x])
	{
		cout << name[x]<<"\n";
		}
		x++;
	}
	
	cout << "--------------------------------------\n";
	
	return 0;
}
