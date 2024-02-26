#include <iostream>
#include <vector>
using namespace std;
double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
    int m=nums1.size();
    int n=nums2.size();
    int total=m+n;
    int target=total/2;
    int i=0,j=0;
    double median;
    while (i+j<=target) {
        int next;
        if (i<m&&(j>=n||nums1[i]<=nums2[j])) {
            next=nums1[i++];
        } else {
            next=nums2[j++];
        }
        if (total%2==0&&(i+j)==target) {
            median=(median+next)/2;
        } else if(total%2!=0&&(i+j-1)==target) {
            median=next;
        }
    }
    return median;
}
int main() {
    vector<int>nums1={1, 3};
    vector<int>nums2={2};
    double median=findMedianSortedArrays(nums1, nums2);
    cout<<"Median of the two sorted arrays is: "<<median<<endl;
    return 0;
}
