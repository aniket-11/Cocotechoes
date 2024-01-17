
#include <iostream>
using namespace std;
//we cant go 10,7,21,23,7,9,14,17,19
int main()
{
    int arr[25];
    int count = 0;
    for(int i=0;i<=24;i++){
        cin>>arr[i];
    }
    //condition 1
     for (int i=0;i<=4;i++){ //it will goes from left to right 5 blocks then down till 24
     count = count+arr[i];
        for(int j=i;j<=5;i+5)
        count = count+arr[i];
     }
     int temp1 = count;
     //condition 2
     
     for(int j=i;j<=5;i+5){
        if(arr[i]==10){ //skip the greay block
            continue;
        } else {
            count = count+arr[i];
        }
        
            for(int j=i;j<=5;j++){
            if(arr[i]==21 && arr[i]==23){
                continue;
            } else {
                count = count+arr[i];   
            }
        }
        
        }
    
     int temp2 = count;
     
 //compare condition1 AND CONDITION2 I.E. TEMP1 AND TEMP2
     
     if(temp1<temp2){
         cout<<"Shortest path are : 0,1,2,3,4,9,14,19,24"
     } else {
         cout<<"Shortest path are : 0,5,15,20,21,22,23,24"
     }
    return 0;
}
