Companies
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.




CODE:-
#include <stdio.h>

void swap(int *p1,int *p2){
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
} 
void sortColors(int* arr, int n){
int z=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                swap(&arr[i],&arr[z]);
                z++;
                }
            }
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                z=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                swap(&arr[i],&arr[z]);
                z++;
                }
            }
}
