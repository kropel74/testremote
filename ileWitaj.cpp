#include <iostream>

using namespace std;

int main(){
	
	int ile;
	
	cout<<"Podaj ile razy wypisac witaj: \n";
	
	cin>>ile;
	
	for (int i=0; i<ile; i++) {
		cout<<i+1<<": Witaj\n";
	}
	
	
	
	return 0;
}
