#include <iostream>
using namespace std;
bool valid(int arr[],int n,int max,int indexofmax){
    // get the mid of the parts.
	int mid=n/2 ;
	//  if the numbers of the parts is even .which means there is no center.
	if(n%2!=1){
		return false;
	}
	 // if the first index and the last index are not equal 1.
	else if(arr[0]!=1&& arr[n-1]!=1){
		return false;
	}
	// the max element is not  the center .
	else if(arr[mid]!=max){
			return false;
		}
		//Check if each elements increases by one from left to center and decreases by one from //the right to the center.
	else {
		for(int i=1;i<=mid;i++){
			int rigthvalue=arr[indexofmax+i];
			int leftvalue=arr[indexofmax-i];
			 // If the right and the left are not //equals  and the value on this index is equal mid-i.
			if(rigthvalue!=leftvalue||rigthvalue!=arr[mid]-i)
			{
				return false;
			}
		}
		return true;

	}




	}


//we will take the input  and get the center as follows :
int main() {
	int s;
	cin>>s;
	while(s--){
		int n,max=0,indexofmax;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>max){
				max=x;
				indexofmax=i;

			}
			arr[i]=x;
		}
		if(valid(arr,n,max,indexofmax)){
			cout<<"yes"<<"\n";
		}
		else{
			cout<<"no"<<"\n";
		}









	}

	return 0;
}