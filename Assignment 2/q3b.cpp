#include <iostream> using 
namespace std;  
cout<<"The Number 
int findMissing(int arr[], int n) 
{     
int low = 0, high = n - 2;     
while (low <= high) {         
mid = (low + high) / 2;         
(arr[mid] == mid + 1)             
low = mid + 1;         
high = mid - 1;  
}  
else            
int 
if 
return low + 1; // missing number  
} 
int main() {     int arr[] = {1, 2, 3, 5, 6};     int n = 6;     cout << 
"Missing number: " << findMissing(arr, n) << endl;     return 
0;  
}  
