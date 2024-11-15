// Write a C++ program to find the largest three element in an array
#include<climits> // Header file for limits of integral types
#include<iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

void three_largest (int arr[], int arr_size){
	int i, first, second, third;
	if(arr_size < 3){ // Checking if the array has less than 3 elements  
		cout << "Invalid Input";
	}
	third = first = second = INT_MIN; // Initializing first, second and third as minimum integer value
	for(i=0;i<arr_size;i++){ // Loop to find three largest elements in the array
		if(arr[i] > first) { // Checking if current element is larger than the first largest element
			third = second;
			second = first;
			first = arr[i];			
		}
		else if (arr[i] > second) { // Checking if current element is larger than the second largest element
			third = second;
			second = arr[i];
		}
		else if (arr[i] > third) { // Checking if current element is larger than the third largest element
			third = arr[i];
		}
	}
	cout << "\nThree largest elements are ::" << first << ", " << second << ", " << third << endl;
}
int main(){
	// int nums[] = { 7, 12, 9, 15, 19, 32, 56, 70 };
	int s;
	cout << "Enter how many elements do you want ::" << endl;
	cin >> s;
	int nums[s];
	cout << "Enter the " << s << " elements ::";
	for(int i=0;i<s;i++){
		cin >> nums[i];
	}
	int n = sizeof(nums)/sizeof(nums[0]); // Determining the number of elements in the array
	cout << "Original Array ::" << "{ ";
	for(int i=0;i<n;i++){
		cout << nums[i] <<" ";
	}
	cout << "}";
	three_largest(nums,n);
	return 0;
}
