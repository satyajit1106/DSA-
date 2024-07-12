#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int mid,int m){
    int pcount = 0;
    int scount=1;

    for( int i=0;i<n;i++){         // using for loop to add the pages to the student
        if(arr[i]+pcount<=mid){    // if number of pages added to the student is less than or equal to the mid 
            pcount+=arr[i];        // add the number of pages to student
        }

        else{
            scount++;                       // increase the student count              
            if(scount>m || arr[i]>mid){     // if student count is more than no. of student or the page is more than mid
                return false;               // for the above condition we return false
            }
            pcount=arr[i];                  // if we can allot the pages to the student then allot them
        }
    }
    return true;                            // if we reached to this position we can return true
}
int main()
{
    int arr[4]={10,20,30,40};   // declearation of the array
    int n=4,sum=0;              // intitilisation of the sum      
    int s=0;
    for(int i=0;i<n;i++){       // calculation of the end as the max number of the pages alloted to a student is max i.e; sum of all pages
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int m=2,ans=0;
    while (s<=e)
    {
        if(ispossible(arr,n,mid,m)){ // checking if there is the possibility of adding the pages to the student 
            ans=mid;            // as we get the condition true store the value of mid 
            e=mid-1;            // that means all the values above mid also satisfies the page allocation to the number of student 
        }
        else{
            s=mid+1;            // if not then values less than mid will also not satisfies the page allocation 
        }
        mid=s+(e-s)/2;          // find mid
    }
    cout << ans;
    return 0;
}