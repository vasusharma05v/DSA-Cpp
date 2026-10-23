# include <iostream>
# include <vector>
using namespace std;
int main(){
    int n = 7;
    int arr[n] = {3,-4,5,4,-1,7,-8};
     int  max_sum=0;
     int currsum = 0;

    for(int st = 0 ; st<n ; st++) {
        currsum += arr[st];
        max_sum = max(max_sum,currsum);
        if(currsum<0){
            currsum = 0;
        }
        
        

   
   
}
cout<<max_sum;
 return 0 ;
}