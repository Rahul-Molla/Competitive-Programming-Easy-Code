// 1.Write a C++ program to find the largest element of a given array of interers.
/*#include<algorithm>
#include<iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

int find_largest(int nums[],int n){ // Function definition for finding the largest element in an array
	return *max_element(nums, nums + n); // Return the maximum element in the array using max_element from algorithm library
}

int main(){
	int nums[10];
	cout<<"Enter The 10 Element :: ";
	for(int i=0;i<10;i++){
		cin>>nums[i];
	}
	
	int n = sizeof(nums)/sizeof(nums[0]); // Determining the number of elements in the array
	cout<<"Original Array ::"<<"{"; // Output massage indicating the original array is being displayed
	for(int i=0;i<n;i++){ // Loop to display each element of the array
		cout<<nums[i]<<"\t"; // output each element of the array
	}
	cout<<"}";
	cout<<"\nLargest element of the said array::"<<find_largest(nums,n); // Output massage showing the largest element in the array
	return 0;
}*/






// 1.Write a C++ program to find the largest element of a given array of interers.
#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter the Number of Elements in the array ::";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of the array ::";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	// Initialize the largest element 
	int largest = arr[0];
	
	// Find the largest element 
	for(int i=1;i<n;i++){
		if(arr[i] > largest) {
			largest = arr[i];
		}
	}
	
	// Output the largest element 
	cout<<"The largest element in the array is ::"<< largest << endl;
	return 0;
}
