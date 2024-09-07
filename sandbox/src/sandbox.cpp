#include "cheese.h"

class Sandbox : public ch::Application
{
public:
    Sandbox()
    {
        ch::Log::LogTrace("Hello $ $ $", "World", 27, 8.0f);
        ch::Log::LogError("Hello $ $ $", "World", 27, 8.0f);
        ch::Log::LogWarn("Hello $ $ $", 27, 8.0f);
        ch::Log::LogInfo("Hello $", "World", 27, 8.0f);
    }

    ~Sandbox()
    {
        
    }
};

ch::Application* ch::CreateApplication()
{
    return new Sandbox;
}