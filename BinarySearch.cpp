#include <iostream>
using namespace std ;

bool BinarySearch(int Array[] , int Size , int Value)
{
	int low = 0 , high = Size-1 ;
	while (low<=high)
	{
		int mid = (high+low)/2 ;
		
		if (Array[mid] == Value)
		 return true ;
		 
		else if (Array[mid] > Value)
		 high = mid-1 ;
		 
		else if (Array[mid] < Value)
		 low = mid+1 ;  
	}
	return false ;
}

int main()
{
	int array[5] = {0,1,2,3,4} ;
	int x = BinarySearch(array,5,1) ;
	if (x == true)
	cout<<"Found"<<endl;
	else cout<<"Not found"<<endl;
}
