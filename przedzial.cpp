#include <iostream>

using namespace std;

int main(){
	
	cout<<"podaj liczbe od 1 do 10\n";
	
	int liczba;
	
	cin>>liczba;
	
	if (liczba>0 and liczba<11){
		
		cout<<"Brawo udalo ci sie podac liczbe od 1 do 10, podales liczbe  "<<liczba<<endl;
	}
	else{
		cout<<"Nie podales liczby od 1 do 10, podales liczbe "<<liczba;
	}
	
	
	return 0;
}
