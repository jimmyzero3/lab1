#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cout<<"Please in put a integer n : ";
	cin>>n;
	cout<< n <<" ";

	for(;n>1;)
		{
			if(n%2!=0)
						n=n*3+1;
			else
						n=n/2;
					
			cout << n <<" ";
		}
	cout<<endl;
}