#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print(int i)
{
	cout<<i<<" ";
}

int main(int argc, char* argv[])
{
	int arr[] = {0, 1, 2, 3, 4};
	list<int> ilist(arr, arr+5);
	for_each(ilist.begin(), ilist.end(), print);
	return 0;
}
