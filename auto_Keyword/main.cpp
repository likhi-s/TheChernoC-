#include <iostream>
#include "devicemanager.h"

using namespace std;
char* getName()
{
    return "Likhitha";
}
int main()
{
    auto name = getName();
    cout<<name<<endl;

    vector<string>strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for(auto i = strings.begin();i != strings.end();i++)
    {
        cout<<*i<<endl;
    }

   // using DeviceMap = unordered_map<string,vector<Device*>>;
  //  typedef unordered_map<string,vector<Device*>>DeviceMap;
    DeviceManager dm;
    const auto& devices = dm.getDevices();
   // const DeviceMap& devices = dm.getDevices();
    cout << "Hello World!" << endl;
    return 0;
}
