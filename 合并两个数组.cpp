#include<stdio.h>
#include<stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int nums3[m+n];
    int p1 = 0, p2 = 0;
    for(int i = 0;i < m+n;i++){
        if(n >= p1 && m >= p2){
            //nums3 = (int*)malloc(sizeof(int));
            nums3[i] = (nums1[p1] > nums2[p2]) ? nums1[p1++]:nums2[p2++];
        }
        else if(n < p1){
            nums3[i] = nums2[p2++];
            nums3[i] = nums1[p1++];
        }
    }
    for(int i = 0; i < m+n; i++) nums1[i] = nums3[i];
}

int main(){
	return 0;
}
