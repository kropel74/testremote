#include <iostream>

using namespace std;

void lista(int a);

int main(){
	
	cout<<"Podaj liczbe dan do wypisania\n";
	
	int a;
	
	cin>> a;
	
	lista(a);

	return 0;
		
}
void lista(int a){
	
	for(int i=1; i<=a; i++){
		
		cout << "danie "<< i <<endl;
	}
	
}
