// 3. Write a C++ Program to find the second lergest element in an array of integers
#include<climits> // Header file for limits of integral types
#include<iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

void three_largest (int arr[], int arr_size){
	int i, first, second;
	if(arr_size < 3){ // Checking if the array has less than 3 elements  
		cout << "Invalid Input";
	}
	first = second = INT_MIN; // Initializing first, second and third as minimum integer value
	for(i=0;i<arr_size;i++){ // Loop to find three largest elements in the array
		if(arr[i] > first) { // Checking if current element is larger than the first largest element
			second = first;
			first = arr[i];			
		}
		else if (arr[i] > second && arr[i] < first) {
			second = arr[i];
		}
	}
	if(second == INT_MIN){ // Checking if second largest element is still initialized as minimum integer value
		cout << "There is no second largest element(all elements might be the same)"<< endl;
	}
	else{
		cout << "\nThe Second largest element is ::" << second; 
	}
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
