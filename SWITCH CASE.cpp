#include <iostream>
using namespace std;
int main(){
	int bilangan;
	cin>>bilangan;
	if(bilangan>0){
		cout<<"bilangan positif\n";
		if(bilangan%2==0){
			cout<<"bilangan genap\n";
		}else if(bilangan%2==1){
			cout<<"bilangan ganjil\n";
		}
	}else{
		cout<<"bilangan negatif\n";
}
	
}
