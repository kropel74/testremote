#include <iostream>

using namespace std;

int main(){
	int index;
	int tablica[5]; 
	tablica[0]=3;
	tablica[1]=7;
	tablica[2]=33;
	tablica[3]=2;
	tablica[4]=55;
	
	cout<<"Podaj index od 0 do 4\n";
	cin>>index;
	if(index<0 or index >4){
		cout<<"Nieprawidlowy index: "<<index<<endl;
	} else {
		cout<<index <<" element tablicy to: "<<tablica[index]<<endl;
	}
	return 0;
}
