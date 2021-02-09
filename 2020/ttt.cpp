#include<bits/stdc++.h>
using namespace std;
void pr(int x, int y, int z){
	x = x + y + z;
	y = x + y + z;
	z = x + y + z;
	cout<<x<<y<<z<<endl;
}
int main()
{
	int a = 1, b =1, c=1;
	pr(a, b,c);
	cout<<a<<b<<c<<endl;
	int d = 1;
	pr(d, d, d);
	cout<<d;
	return 0;
}N
