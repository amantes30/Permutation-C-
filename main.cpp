#include <iostream>
#include <stdio.h>

using namespace std;
void perm(char s[], int k)
{
    static int a[10] = {0};
    static char res[10];

    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';

        cout << res << endl;
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;
                perm(s, k + 1);
                a[i] = 0;
            }
        }
    }
}

int main(){
    char s[] = "ABC";
    perm(s,0);

    string input;
    
    cin>>input;
    return 0;
}