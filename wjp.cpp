#include <iostream>
using namespace std;

int gcd(int a,int b){
	if(a == 0){
		return b;
	}
	return gcd( b % a, a);
}

int main(){
	int jugOne;
	int jugTwo;
	int amountToObtain;
	int check;
	int dummyVariable = 0;
	
	cout << "Enter capacity of Jug One : ";
	cin >> jugOne;
	cout << "Enter capacity of Jug Two : ";
	cin >> jugTwo;
	cout << "Enter The amount to Obtain : ";
	cin >> amountToObtain;

	check = gcd(jugOne, jugTwo); 

	if ( check % amountToObtain == 0 ){
		

	} else {
		cout << "This amount cannot be obtained with the Jugs provided, sorry\n";
	}

	return 0;
}