#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int ans[21] = {0}, tot = 0;
bool a[21] = {0};
void print()
{
	tot++;
	cout << "No." << tot << ':';
	for (int i = 1; i <= 20; i++)
		cout << ans[i] << ' ';
	cout << endl;
}
bool isprime(int x1, int x2)
{
	int i = x1 + x2,f;
	for (f = 2; f <= sqrt(i); f++)
		if (i % f == 0)
			return false;
	return true;
}
int search(int t)
{
	for (int i = 1; i <= 20; i++)
	{
		if (a[i] == false && isprime(ans[t - 1], i))
		{
			ans[t] = i;
			a[i] = true;
			if (t == 20 && isprime(ans[1], ans[20]))
				print();
			else
				search(t + 1);
			a[i] = false;
		}
	}
}
int main() 
{
	search(1);
	printf("The total is　%d", tot);
	// 素数环
}
