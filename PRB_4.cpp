#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x;
    
    cout << "Counting..." << endl;
    for (x=1;x<11;x++)
	{ cout << x << ", "; continue; }
	
    for (x=10;x<29;x+=2)
	{ cout << x + 2 << ", "; continue; }
    
    getch();
    return 0;
}
