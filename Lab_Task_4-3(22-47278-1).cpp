#include <bits/stdc++.h>
using namespace std;
int binarySearch(int binary[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (binary[mid] == x)
			return mid;
		if (binary[mid] > x)
			return binarySearch(binary, l, mid - 1, x);
		return binarySearch(binary, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
     int n;
     cout<<"Array Size:";
     cin>>n;

     int binary[n];
     cout<<"Enter Array Elements :"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>binary[i];
     }
     int a;
     cout<<"\n Enter The Search : ";
     cin>>a;
	int result = binarySearch(binary, 0, n - 1, a);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}


