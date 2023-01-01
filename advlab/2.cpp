#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cout<<"Enter size of Array : ";
  cin>>N;
  int arr[N];
  cout<<"Enter elements of Array : ";
  for(int i=0;i<N;i++){
      cin>>arr[i];
  }
  cout<<"\nEnter value of K : ";
  cin>>K;
  sort(arr, arr + N);
  cout<<"5th Largest element is "<<arr[N-K]<<endl;
  return 0;
}