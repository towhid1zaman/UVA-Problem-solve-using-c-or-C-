#include<bits/stdc++.h>
using namespace std;
#define I cin
#define O cout
int main()
{
            char s[10000];
            int c = 0;
            int len;
                while(gets(s))
                {
                    len = strlen(s);
                        for(int i = 0; i<len; i++)
                        {
                           if(s[i]=='"')
                            {
                                c++;
                                if(c%2==1)
                                O<<"``";
                                else
                                O<<"''";
                            }
                            else
                           O<<s[i];
                        }
                        O<<"\n";
                }


        return 0;
}


