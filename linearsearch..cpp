#include <iostream>
using namespace std;

//Prints the array

int printarray(int arr[],int size){
	cout<<"The given array is [ ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	cout<<endl;
}

//Linear Search function

void linearSearch(int a[], int size,int key) {
  int temp = -1;

  for (int i = 0; i < size; i++) {
    if (a[i] == key) {
      cout << "Element found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}


//Main Function

int main()
{
 int arr[10]= {1,8,9,6,4,2,3,7,5,0};
 int size = sizeof(arr)/sizeof(int);
 printarray(arr,size);
 int key =0;
 linearSearch(arr,size,key);
 return 0;
 
}

