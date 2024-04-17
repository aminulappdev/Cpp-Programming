#include <iostream>
using namespace std;

void test(string s, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << s;
    }
}

int main()
{
    string s = "JS";
    int n;
    cin >> n;
    test(s, n);
    return 0;
}

//Solve

// #include <iostream>
// using namespace std;
// string test(string s, int n)
//         {
//             string result = "";
//             for (int i = 0; i < n; i++)
//             {
//                 result += s;
//             }
//             return result;
//         }
        
// int main() 
//  {
//   cout << test("JS", 2) << endl;  
//   cout << test("JS", 3) << endl;  
//   cout << test("JS", 1) << endl;  
//   return 0;    
// }
