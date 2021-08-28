#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int data[10];
    int n;
    int k;
    cout << "Enter number of elements in array: ";
    scanf("%d",&n);
    cout <<"\n";
    cout << "Enter value of k: ";
    scanf("%d",&k);
    cout <<"\n";
    for (int i = 0; i < n; ++i){                 //input elements of array from user
    	scanf("%d",&data[i]);
	}
    for (int i = 0; i < n; ++i) {
            cout << "data[" << i << "] :" << data[i] << endl;}    //print array
 
    set<int> s(data, data + n);
    set<int>::iterator itr
        = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, k - 1); // itr points to kth element in set
 
    cout << *itr << "\n";
 
    return 0;
}
