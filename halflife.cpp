#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
class Lambda_2{
	
public:	
void mass_calc(){
	
long double x, n,intl_mass;
 string element;
cout << "Enter the name of the element that you want to find the remaining mass of?"<<endl;
cin >> element;

cout << "Enter the initial mass of "<< element<<":"<<endl;
cin >> intl_mass;

cout << "Enter the half life of "<< element<<":"<<endl;
cin >> x;

cout << "To find out the reamining mass of the radioactive element "<< element<< " in the nth year, enter the value of n:"<<endl;
cin>> n;

// equation that I discovererd is M = M(intl) * (10^(log2^-n)/x)

long double base1 = 2;
long double exp1 = -n;
//long double root1= pow(base1,exp1);
long double base2 = 10;
long double exp2= ((-n*log10(base1))/x);
//long double exp2= (log10(root1)/x);
long double func = pow(base2,exp2);
long double MassFinal = (func*intl_mass);
 
cout << "The remaining mass of "<<element<<" in "<<n << " years and half life of "<< x << " years is "<< MassFinal << " grams"<<endl;

}		
};

int main(){
int choice;
Lambda_2 element1;
Lambda_2 element2;
Lambda_2 element3;
Lambda_2 element4;

cout << "How many elements do you want to find mass of? or How many times will you be needed to execute this program?"<<endl;
cin >> choice;
switch(choice){
case 1: 
element1.mass_calc();
cout << endl;
break;
case 2:
element1.mass_calc();
cout << endl;
element2.mass_calc();
cout << endl;
break;
case 3:
element1.mass_calc();
cout <<endl;
element2.mass_calc();
cout <<endl;
element3.mass_calc();
cout <<endl;
break;
case 4:
element1.mass_calc();
cout <<endl;
element2.mass_calc();
cout <<endl;
element3.mass_calc();
cout <<endl;
element4.mass_calc();
cout <<endl;
break;	
}

	
	
	
	
	
}
