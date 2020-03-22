#include <iostream>

using namespace std;

int iloczyn (int a, int b);

int main(){

	int a, b, c;
	
	cout<<"Podaj dwie liczby ktore chcesz pomozyc\n";
	
	cin>> a;
	
	cin>> b;
	
	c=iloczyn(a,b);
	
	cout<<"Iloczyn liczby "<<a<<" i "<<b<<" wynosi "<<c;
	
	return 0;
}

int iloczyn (int a, int b){		
	int c=a*b;
	
	return c;				
}
