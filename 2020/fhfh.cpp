#include<iostream>
#include<cmath>
using namespace std;
double volumeCylinder(int r, int h){
	//  code for computing volume of cylinder here
	// volume = 3.14 * r^2 * h
	double ans = 3.14 * pow(r, 2) * h;
	return ans;
}

double volumeCone(int r, int h){
	// code for computing volume of cone here
	// volume = (3.14 * r^2 * h)/3
    double ans = 3.14 * pow(r, 2) * h;
	return ans/3.0;
}
int main()
{
	int n;
	cout<<"Enter a positive Value\n";
	cin>>n;
	if(n > 0){
        int ff = 0;
		for(int i=2;i<n;i++){
			if(n%i == 0){
				ff = 1;
				break;
			}
		}
        if (n == 1) // 1 is not prime
            ff = 1;
		if(ff == 1){ // n is not prime
			cout<<"Computing volume of Cone as "<<n<<" is not prime\n";
			int r, h;
			cout<<"Enter radius and height of Cone\n";
			cin>>r>>h;
			if( r > 0 && h > 0)
				cout<<"Volume of Cone is "<<volumeCone(r, h)<<endl;
			else
				cout<<"Invalid input, Dimensions of Cone cannot be negative or equal to zero\n";
		}
		else{ // n is prime
			cout<<"Computing volume of Cylinder as "<<n<<" is prime\n";
			int r, h;
			cout<<"Enter radius and height of Cylinder\n";
			cin>>r>>h;
			if( r > 0 && h > 0)
				cout<<"Volume of Cylinder is "<<volumeCylinder(r, h)<<endl;
			else
				cout<<"Invalid input, Dimensions of Cylinder cannot be negative or equal to zero\n";
		}
	}
	else if( n < 0){
		cout<<"Invalid input\n";
	}
	else
	{
		exit(0);
	}
	return 0;
}
