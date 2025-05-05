#include <iostream>
using namespace std;
#define Wait cin.get()
#define OpenCurly {


#ifdef PR_DEBUG
#define LOG(x) cout<<x<<endl;
#else
#define LOG(x)
#endif

int main()
OpenCurly
    LOG("hello");
    Wait;
    cout << "Hello World!" << endl;
    return 0;
}
