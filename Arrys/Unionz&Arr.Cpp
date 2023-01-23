#include<iostrean>
using namespace std;
//class solutions 
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
 int c[100000];
 int j=0;
 for(int i = 0 ; i < n ; i++){
     c[i] = a[i];
 }
 for(int i=n ; i < n+m ; i++){
     c[i] = b[j++];
 }
 
 sort(c,c+m+n);
 int count =1;
 for(int i = 1 ; i < m+n ;i++){
     if(c[i] != c[i-1]){
         count++;
     }
    
 }
  return count ;
    }
};
// Driver Code Starts.

int main() {

int t;

cin >> t;

while(t--){

int n, m;

cin >> n >> m; int a[n], b[m];

for (int i=0;i<n;i++) cin >> q[i];

for(int i=0;i<m;i++) cin >> b[i];

Solution ob;

cout << ob.doUnion (a, n, b, m) << endl;

}

return 0;

}

// Driver Code Ends
