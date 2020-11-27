// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    int aa=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        aa++;
        if(a[i]==1)
        b++;
        if(a[i]==2)
        c++;
        
    }
    b=aa+b;
    c=c+b;
    for(int i=0;i<aa;i++)
    a[i]=0;
    for(int i=aa;i<b;i++)
    a[i]=1;
    for(int i=b;i<c;i++)
    a[i]=2;
    return ;
}
