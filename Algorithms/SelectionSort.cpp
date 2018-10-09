#include <iostream>
using namespace std;

int main(){
  int size;
  cin>>size;
  int arr[size];
  
  for(int i=0;i<size-1;i++){
    cin>>arr[i];
  }

 int i,j,min,temp;
  temp=0;
  for(i=0;i<size;i++){
    min=i;
    for(j=i+1;j<size;j++){

      if(arr[min]>arr[j]){min=j;}
    }
    swap(arr[i],arr[min]);
  }

  for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
  return 0;
}
