#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='0')
            {
                st.push(0);
            }
            else
            {   
                if(!st.empty())
                {
                    if(st.top() == 0)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(1);
                    }

                }
                else
                {
                    st.push(1);
                }
                
            }
        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        


        
    }

    return 0;
}
