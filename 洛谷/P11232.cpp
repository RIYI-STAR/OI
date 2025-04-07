// P11232 [CSP-S 2024] 超速检测
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Car
{
    int d;
    int v;
    int a;
};

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {

        int n, m, L, V;
        cin >> n >> m >> L >> V;

        vector<Car> cars(n);
        for (int i = 0; i < n; i++)
        {
            Car *temp = new Car;
            cin >> temp->d >> temp->v >> temp->a;
            cars[i] = *temp;
        }

        vector<int> cams(m);
        for (int i = 0; i < m; i++)
            cin >> cams[i];

        sort(cams.begin(), cams.end());

        // cout << "Cars:" << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     Car temp = cars[i];
        //     cout << temp.d << " " << temp.v << ' ' << temp.a << endl;
        // }
        // cout << "px:" << endl;
        // for (int i = 0; i < m; i++)
        //     cout << px[i] << ' ';

        vector<int> over_x(n);
        vector<int> used_cam(m, 0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            Car temp = cars[i];
            if (temp.d >= L) continue;
            if (temp.a == 0)
            {
                int left = 0, right = m - 1;
                while (left < right)
                {
                    int mid = (left + right) / 2;
                    if (cams[mid] < temp.d)
                        left = mid + 1;
                    else if (cams[mid] > temp.d)
                        right = mid - 1;
                    else
                    {
                        left = mid;
                        right = mid;
                    }
                }
                if (cams[left] > temp.d)
                    left--;

                if (temp.v > V && left < m - 1)
                {
                    used_cam[left + 1]++;
                    ans++;
                }
            }
            else
            {
                double x = temp.d + (V * V - temp.v * temp.v) / (2 * temp.a);
                // printf("%.2lf  ", x);
                if (x < temp.d)
                    continue;
                if (temp.a > 0)
                {
                    int left = 0, right = m - 1;
                    while (left < right)
                    {
                        int mid = (left + right) / 2;
                        if (cams[mid] <= x)
                            left = mid + 1;
                        else
                            right = mid - 1;
                    }
                    if (cams[left] >= x)
                    {
                        ans++;
                        used_cam[left]++;
                    }
                    // cout << "ttt: " << cams[left] << endl;
                }
                else if (temp.a < 0)
                {
                    int left = 0, right = m - 1;
                    while (left < right)
                    {
                        int mid = (left + right) / 2;

                        if (cams[mid] > temp.d)
                            right = mid - 1;
                        else if (cams[mid] < temp.d)
                            left = mid + 1;
                        else
                        {
                            left = mid;
                            right = mid;
                        }
                    }
                    if (cams[left] < temp.d)
                        left++;
                    // cout << "tttt: " << cams[left] << endl;
                    int ll = 0, rr = m - 1;
                    while (ll < rr)
                    {
                        int mid = (ll + rr) / 2;

                        if (cams[mid] > x)
                            rr = mid - 1;
                        else if (cams[mid] < x)
                            ll = mid + 1;
                        else
                        {
                            ll = mid;
                            rr = mid;
                        }
                    }
                    if (cams[ll] < x)
                        ll++;

                    if (ll - left > 0)
                    {
                        ans++;
                        used_cam[left]++;
                    }

                    // cout << "ttt: " << cams[ll] << endl;
                }
            }
        }

        cout << ans << ' ';
        

        int sum = 0;
        for (int i = 0; i < m; i++)
            if (used_cam[i] > 0)
                sum++;

        cout << m - sum;

        T--;
    }
    return 0;
}