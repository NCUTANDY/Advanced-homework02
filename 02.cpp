#include <string.h>  
#include <iostream>  
using namespace std;  
int main()  
{  
    int num,num1;  
    char str1[100];  
    cout << "��J�r��: ";  
    cin >> str1;  
    num1 = strlen(str1);  
   cout << "�A�˵��G:";  
    for(num = num1;num>=1;num--)
	{  
        cout << str1[num];  
    }  
    cout << str1[0] << endl;  
}
