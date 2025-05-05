#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H
#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
class Device{};
class DeviceManager
{
public:
    DeviceManager();
    const unordered_map<string,vector<Device*>>& getDevices() const;

private:
    unordered_map<string,vector<Device*>>m_devices;
};

#endif // DEVICEMANAGER_H
