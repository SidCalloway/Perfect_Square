// October 12th 2019 //
// Day 4 of Writing Programs //
// Project 00006 | 'Perfect Square' //
// Language: C++ //
// Blessed Sid Build //

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n, i=1,sum=0;
	cout<<"Enter Your Number: ";
	cin >> n;
	while(i<n){
	if(i<n){
	if(n%i==0)
	sum=sum+i;
	i++;
	}
	if(sum==n)
	cout << i << " Positive: Perfect Number ";
	else
	cout << i << " False: Not A Perfect Number ";
	system("pause");
	return 0;
	} 
}

//---Respectfully---//
//---Sid Calloway---//