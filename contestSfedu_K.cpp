#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<functional>
#include<iomanip>
#include<algorithm>
#include<set>
#include<cmath>
#include<limits>
#include<climits>
#include<deque>
#include<array>
#include<stack>
#include<map>
#include<vector>
#include<string>
#include<list>
#include<random>
#include<cstdint>
#include<cstring>
#include<bitset>
#include<queue>
#include<iomanip>
#include<numeric>
#include<unordered_map>
#include<unordered_set>


#define mp make_pair
#define mt make_tuple
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forEnd(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forA(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

using namespace std;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef vector<int64> vi64;
typedef vector<vi64> vvi64;
typedef pair<int64, int64> pi64;
const double PI = 3.1415926535897932384626433832795;
const int EDIV = 1000000007;

struct Element {
    Element* previous;
    int val;
    static int64 total;
    int id;
};

void solve() {
    int c, c1; cin >> c1; c = c1; bool f(0);


    if (c == 1) {
        cout << "! 1" << endl; cout.flush(); return;
    }

    if (c < 3) {
        cout << "? " << 1 << " " << 1 << endl;
        cout << 1 << ' ';
        cout << endl;
        cout << 2 << ' ';

        cout << endl;
        cout.flush();
        string ans; cin >> ans;


        if (ans == "<") {
            cout << "! " << 2 << endl;
            cout.flush();

        }
        else if (ans == ">") {
            cout << "! " << 1 << endl;
            cout.flush();
        }

        return;
    }

    int left1 = 1; int right1 = c / 3;
    int left2 = right1+1;     int right2 = right1 + c/3;
    int left3 = right2 + 1;     int right3 = right2 + c / 3;
    int left4 = (right3 + 1) ;    int right4 = c;

 





    while (c > 0) {
        if (((c/3==1)&&(c%3 == 0))) {
            cout << "? " << 1 << " " << 1 << endl;
            cout << left1 << ' ';
            cout << endl;
            cout << left2 << ' ';

            cout << endl;
            cout.flush();
            string ans; cin >> ans;


            if (ans == "<") {
                cout << "! " << left2 << endl;
                cout.flush();

            }
            else if (ans == ">") {
                cout << "! " << left1 << endl;
                cout.flush();
            }

            else
                cout << "! " << left3 << endl;
                cout.flush();
            return;
        }
        if (c == 2) {
            cout << "? " << 1 << " " << 1 << endl;
            cout << left1 << ' ';
            cout << endl;
            cout << left1+1 << ' ';

            cout << endl;
            cout.flush();
            string ans; cin >> ans;


            if (ans == "<") {
                cout << "! " << left1 + 1 << endl;
                cout.flush();

            }
            else if (ans == ">") {
                cout << "! " << left1 << endl;
                cout.flush();
            }
            return;
        }

        if (c == 1) {
            cout << "! " << left1 << endl;
            cout.flush();
        
        return;
        }


        cout << "? " << c / 3 << " " << c / 3 << endl;
        forA(i, left1, right1)  cout << i << ' ';
        cout << endl;
        forA(i, left2, right2)  cout << i << ' ';
        cout << endl;
        cout.flush();

        string ans; cin >> ans;


         if (ans == ">")
        {
           // if (c / 3/ 3 == 0) { left4 = left1; right4 = right1; break; }
            c = (right1-left1 + 1);

            right1 = left1+c/3-1;
            left2 = right1+1; right2 = right1 + c/3;
            left3 = right2+1; right3 = right2 + c /3;
            left4 = right3 + 1 * (c % 3 != 0); right4 = (right3 + (c % 3) * ((c % 3 != 0)));

            continue;
        }
        else if (ans == "<") {
            //if (c / 3 / 3 == 0) { left4 = left2; right4 = right2; break; }
            c = (right2 - left2+1);
            left1 = left2;
            right1 = left1 + c/3 - 1;
            left2 = right1 + 1; right2 = right1 + c / 3;
            left3 = right2 + 1; right3 = right2 + c / 3;
            left4 = right3 + 1 * (c % 3 != 0); right4 = (right3 + (c % 3) * ((c % 3 != 0)));
            continue;
        }



        if (ans == "=") {
            c = (right4 - left3 + 1);
            left1 = left3;
            right1 = left1 + c / 3 - 1*(c/3 !=0);
            left2 = right1 + 1; right2 = right1 + c / 3;
            left3 = right2 + 1; right3 = right2 + c / 3;
            left4 = right3 + 1 * (c % 3 != 0);
        }




    }
  
}

int main()
{
    cout << setprecision(20) << fixed;
    cin.tie(0)->sync_with_stdio(0);
    //#ifdef LOCAL_DEFINE
    //    freopen("input.txt", "rt", stdin);
    //#endif

    int n = 1;// cin >> n;
    while (n--) {
        solve();
    }

}

