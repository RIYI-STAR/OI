#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        map<string, int> m;
        map<string, string> cmp;
        map<string, int> times;
        for(int i = 0; i < N; i++)
        {
            string id;
            int v;
            string s;
            cin >> s;
            for(int i = 0;i<s.size();i++)
            {
                char c = s[i];
                if (c != ':') id.push_back(c);
                else {
                    v = stoi(s.substr(i + 1));
                    break;
                }
            }
            string temp = id;
            for (char &c : temp)
                c = toupper(c);
            if (m.count(temp))
                times[temp]++;
            else cmp[temp] = id; 
            m[temp] = v;
        }
        for (auto it = m.begin(); it != m.end(); it++)
            cout << cmp[it->first] << ':' << it->second * (times[it->first] + 1) << endl;
    }
    return 0;
}

