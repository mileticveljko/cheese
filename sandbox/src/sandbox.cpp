#include "cheese.h"

class Sandbox : public ch::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {
        
    }
};

ch::Application* ch::CreateApplication()
{
    return new Sandbox;
}