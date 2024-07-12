#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

struct Item {
   int value;
   int weight;
};

class Solution {
   public:
      bool static comp(Item a, Item b) {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }

   // function to return fractionalweights
   double fractionalKnapsack(int W, Item arr[], int n) {

      sort(arr, arr + n, comp);

      int curWeight = 0;
      double finalvalue = 0.0;

      for (int i = 0; i < n; i++) {

         if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
         } else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
            break;
         }
      }
    return finalvalue;
   }
};
int main() {
 
    int n;
    cout <<"enter the max value " << endl;
    cin>>n;
    int weight;
    cout<< "enter the weight of the knapsack " << endl;
    cin>>weight;

   Item arr[MAX];
   for(int i=0;i<n;i++){

    int value,weight;
    cin>>value>> weight;

    arr[i].value=value;
    arr[i].weight=weight;

   }

   Solution obj;
   double ans = obj.fractionalKnapsack(weight, arr, n);
   cout << "The maximum value is " << setprecision(2) << fixed << ans;
   return 0;

}
