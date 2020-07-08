#include <iostream>
#include <cmath>
using namespace std ;

bool JumpSearch(int Array[] , int Size , int Value)
{
	int k = sqrt(Size) , i ;
	for (i=0 ; i+k<Size ; i+=k)
	{
		if(Array[i] == Value)
		 return true ;
    }
    
    i = i-k ;
    
	if (Array[i]>Value)
    {
	    for (int j=i ; j>=0 ; j--)
			if (Array[j] == Value)
			return true ;
	}
	  
    else if (Array[i]<Value)
	{
		for (int j=i+1 ; j<Size ; j++)
			if (Array[j] == Value)
			return true ;
	}
	
	return false ;
}

int main()
{
	int array[5] = {0,1,2,3,4} ;
	int x = JumpSearch(array,5,3) ;
	if (x==true)
	cout<<"Found"<<endl;
	else cout<<"Not found"<<endl;
}
