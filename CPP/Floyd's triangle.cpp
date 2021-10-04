// Problem :- Print Floyd's triangle

#include<iostream>
using namespace std;

int main()
{
	int height, value = 1;
	cout << "Enter the height of the triangle:- " << endl;
	cin >> height;
	cout << "\n" << "Floyd's triangle of height " << height << " : " << "\n" << endl;
    int i=0, j;
    while(i < height)
    {
    	j = 0;
    	while(j <= i)
    	{
	    	cout << value << " ";
		    value++;
		    j++;
	    }
	    cout << endl;
    	i++;
    }
    return 0;
}


/*

Output : 

Enter the height of the triangle:-
7

Floyd's triangle of height 7 :

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28

*/
