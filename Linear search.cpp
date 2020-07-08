#include <iostream>
using namespace std ;

bool linearSearch(int Array[] , int size , int value)
{
	for (int i=0 ; i<size ; i++)
	{
		if (Array[i] == value)
		 return true ; 
	}
	return false ;
}

int main()
{
	int array[5] = {0,1,2,3,4} ;
	int x = linearSearch(array,5,4) ;
	if (x == true)
	cout<<"Found"<<endl ;
	else cout<<"Not found"<<endl ;	
}
