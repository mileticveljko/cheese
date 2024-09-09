#include "cheese.h"

class Sandbox : public ch::Application
{
public:
    Sandbox(const ch::Arena& arena)
        : ch::Application(arena), m_Arena(arena)
    {
        ch::Log::LogTrace("Hello $ $ $", "World", 27, 8.0f);
        ch::Log::LogError("Hello $ $ $", "World", 27, 8.0f);
        ch::Log::LogWarn("Hello $ $ $", 27, 8.0f);
        ch::Log::LogInfo("Hello $", "World", 27, 8.0f);
    }

    ~Sandbox()
    {
        
    }
private:
    const ch::Arena& m_Arena;
};

ch::Application* ch::CreateApplication(const ch::Arena& arena)
{
    return new Sandbox(arena);
}