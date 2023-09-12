#include <iostream>
using namespace std;

int main()
{
    int a = INT32_MAX;
    int a2 = INT32_MIN;
    cout << a << " " << a2;

    cout << "\n";

    long long b = INT64_MAX;
    long long b2 = INT64_MIN;
    cout << b << " " << b2;

    cout << "\n";

    short c = SHRT_MAX;
    short c2 = SHRT_MIN;
    cout << c << " " << c2;

    cout << "\n";

    unsigned int d = INT32_MAX;
    unsigned int d2 = INT32_MIN;
    cout << d << " " << d2;

    cout << "\n";

    float e = FLT_MAX;
    float e2 = FLT_MIN;
    cout << e << " " << e2;

    cout << "\n";

    double f = DBL_MAX;
    double f2 = DBL_MIN;
    cout << f << " " << f2;

    cout << "\n";

    char g = CHAR_MAX;
    char g2 = CHAR_MIN;
    cout << g << " " << g2;

    cout << "\n";

    bool h = 1;
    bool h2 = 0;
    cout << h << " " << h2;

    cout << "\n";

    cout << "type\t\t|byte\t|min\t\t\t|max\t\t\n";
    cout << "int\t\t|" << sizeof(a) <<"\t|" << a2 << "\t\t|" << a << "\n";
    cout << "long long\t|" << sizeof(b) << "\t|" << b2 << "\t|" << b << "\n";
    cout << "short\t\t|" << sizeof(c) << "\t|" << c2 << "\t\t\t|" << c << "\n";
    cout << "unsigned int\t|" << sizeof(d) << "\t|" << d2 << "\t\t|" << d << "\n";
    cout << "float\t\t|" << sizeof(e) << "\t|" << e2 << "\t\t|" << e << "\n";
    cout << "double\t\t|" << sizeof(f) << "\t|" << f2 << "\t\t|" << f << "\n";
    cout << "char\t\t|" << sizeof(g) << "\t|" << g2 << "\t\t\t|" << g << "\n";
    cout << "bool\t\t|" << sizeof(h) << "\t|" << h2 << "\t\t\t|" << h << "\n";
}
