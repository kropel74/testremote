#include <iostream>

using namespace std;

void suma(int a, int b);

int main(){
	
	int a, b;
	
	cout<<"Podaj dwie liczby ktore chcesz dodac\n";
	
	cin>>a;
	
	cin>>b;
	
	suma(a, b);
	
	return 0;
	
}
void suma(int a, int b){
	
		int z;
		z=a+b;
		cout<<"Suma liczb "<<a<<" i "<<b<<" Wynosi "<<z;
}
