#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    VkApplicationInfo appinfo = {};
    appinfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appinfo.pApplicationName = "Pong";
    appinfo.pEngineName = "Ponggine";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appinfo;

    VkInstance instance;

    VkResult result =vkCreateInstance(&instanceInfo, 0, &instance);
    if(result == VK_SUCCESS)
    {
        std::cout << "Successfully create vulkan instance" << std::endl;
    }
}