// C++ program to find the position where
// last item is delivered.
#include <bits/stdc++.h>
using namespace std;

// n ==> Size of circle
// m ==> Number of items
// k ==> Initial position
int lastPosition(int n, int m, int k){
	m=(m-(n-k+1))%n;
	if(m==0) return n;
	else return m;
}
// Driver code
int main()
{
    int n = 5;
    int m = 8;
    int k = 2;
    cout << lastPosition(n, m, k);
    return 0;
}
