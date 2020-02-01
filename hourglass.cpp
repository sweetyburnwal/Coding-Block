#include <iostream>
using namespace std;
void topTriangle(int num1);
void bottomTriangle(int num1); 
int main()
{
        int num1=5;
        topTriangle(num1+1);
        bottomTriangle(num1+1);   
       
}
void topTriangle(int num1)
{
        int   line, j;
        for (line = 1; line <= num1; line++)
        {
                for (j = 1; j < line; j++)
                {
                        cout << "  ";
                }
                for (j = line; j <= num1; j++)
                {
                        cout << num1-j<<" ";
                }
                for (j = num1 - 1; j >= line; j--)
                {
                        cout << num1-j<<" ";
                }
                cout << "\n";
        }
}
void bottomTriangle(int num1)
{
        int j, line;
        for (line = num1; line >= 1; line--)
        {
                for (j = 1; j < line; j++)
                {
                        cout << "  ";
                }
                for (j = line; j <= num1; j++)
                {
                        cout << num1-j<<" ";
                }
                for (j = num1 - 1; j >= line; j--)
                {
                        cout <<num1-j<<" ";
                }
               
               
                cout << "\n";
        }
 
}

