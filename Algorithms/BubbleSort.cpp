#include <iostream>
using namespace std;

int main(){
  int size;
  cin>>size;
  int arr[size];
  
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  int i,j=0;
  for(i=0;i<size;i++)
  {
    for(j=0;j<size-i;j++){
      if(arr[j+1]<arr[j]){
        swap(arr[j+1],arr[j]);
      }
    }
  }
for(i =0;i<size;i++){cout<<arr[i]<<" ";}
  return 0;
}
