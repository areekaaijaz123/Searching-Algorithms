#include <iostream>
using namespace std ;

bool efficientLinearSearch(int Array[] , int Size , int value)
{
	int i=0 , j=Size ;
	while (i<=j)
	{
		if (Array[i] == value || Array[j] == value)
			return true ;
			
			i++  ;
			j-- ;
	}
	return false ;
} 

int main()
{
	int array[5] = {0,1,2,3,4} ;
	int y = efficientLinearSearch(array,5,10) ;
	if (y == true)
	cout<<"Found"<<endl ;
	else cout<<"Not found"<<endl;
}
	
