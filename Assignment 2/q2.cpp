#include<iostream> using 
namespace std; int main(){     int 
arr[]={64,34,25,12,22,11,90};     
for(int i=0;i<6;i++){         
j=0;j<6-i;j++){             
if(arr[j]>arr[j+1]){                 
temp=arr[j];                 
arr[j]=arr[j+1];                 
arr[j+1]=temp;  
}  
}  
}  
for(int i=0;i<7;i++){     
cout << arr[i] << " ";   
}     
0;  
}   
return
