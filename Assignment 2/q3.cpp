#include<bits/stdc++.h> 
using namespace std; int 
missingNumber (int a[], int n){      
int sum = (n*(n+1))/2;      
int sumOfArrayElements = 0;  
for(int i = 0 ; i < n-1 ; i++){           
sumOfArrayElements += a[i];  
}  
return sum - sumOfArrayElements;  
}  
int main(){      
int arr[] = {1,2,5,4};      
sizeof(arr)/sizeof(arr[0]);      
int n = 
int missingNum = 
missingNumber(arr, n+1);      
missing is:  "<<missingNum;  
return 0;  
}  
