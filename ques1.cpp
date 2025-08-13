 #include <iostream>
using namespace std;
int main(){
    int arr[10], item, n, first, last, mid, pos=-1; 
for(int i=0; i<10; i++) { 
cin>> arr[i]; 
} 
cout<<"Enter the item to be searched: "<<endl; 
cin>>item; 
first = 0; 
last = 9; 
while(first <= last) {
mid = (first + last) / 2; 
if(arr[mid] == item){ 
cout<<"Element found at position "<< mid+1<<endl; 
pos = mid; 
break; 
} 
else if(arr[mid] > item) { 
last = mid - 1; 
} 
else{ 
first = mid + 1; 
} 
}
if(pos == -1){
cout<<"Element not found"<<endl; 
}
return 0; 
} 