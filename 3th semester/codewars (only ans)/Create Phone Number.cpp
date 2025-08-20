#include <string>
#include <cstdio>
std::string createPhoneNumber(const int arr [10])
{
    char phone[15];
    std::sprintf(phone, "(%d%d%d) %d%d%d-%d%d%d%d",arr[0], arr[1], arr[2],arr[3], arr[4], arr[5],arr[6], arr[7], arr[8], arr[9]);
    return std::string(phone);
}