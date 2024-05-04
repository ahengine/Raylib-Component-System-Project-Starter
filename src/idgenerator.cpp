#include <iostream>
#include <chrono>
#include <random>
#include "idgenerator.h"

unsigned long long IdGenerator::generateUniqueID() 
{
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

    auto pid = static_cast<unsigned long long>(getpid());

    std::random_device rd;
    std::mt19937_64 eng(rd());
    std::uniform_int_distribution<unsigned long long> distr;

    unsigned long long randNum = distr(eng);

    unsigned long long uniqueID = (millis << 32) | (pid << 16) | randNum;

    return uniqueID;
}