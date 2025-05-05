#include "devicemanager.h"

DeviceManager::DeviceManager() {}

const unordered_map<string, vector<Device *> > &DeviceManager::getDevices() const
{
    return m_devices;
}
