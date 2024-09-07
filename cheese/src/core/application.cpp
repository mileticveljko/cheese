#include "application.h"

#include <stdio.h>

namespace ch
{
    Application* Application::s_Application = nullptr;

    Application::Application()
    {
        if(s_Application)
        {
            return;
        }
        s_Application = this;
    }

    Application::~Application()
    {

    }

    void Application::Run()
    {
        printf("App is running\n");
    }
}
