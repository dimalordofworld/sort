#include "iostream"
#include "bubble.cpp"
#include "merge.cpp"

int main()
{
	int n;
	int *a;
	cout<<"n=";
	cin>> n;
	a = new int[n];
    for (int i = 0; i < n; i++)
        a[i]= rand() % 100;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;

}