#include <iostream>

using namespace std;

int main(){
	
	int historia[5];
	int suma=0; 
	
	for(int i=0;i<5;i++){
	
		cout<<"Podaj "<<i+1<<" ocene"<<endl;
		int ocena;
		cin>>ocena;
		if(ocena<1 or ocena>6){
			
			cout<<"Nieprawidlowa ocena, wstawiam 0 \n";
			ocena=0;
			
		}
		historia[i]=ocena;
			
	}
	
	for(int i=0;i<5;i++){
		
		cout<<"Twoja "<<i+1<<" ocena to "<<historia[i]<<endl;
		
		suma+=historia[i];
	
	}
	float k=suma/5.0;
	cout<<"srednia twoich ocen wynosi "<<k;
	
	
	return 0;
}
