#ifndef APPLICATION_H
#define APPLICATION_H

#include "arena.h"

namespace ch
{
    class Application 
    {
    public:
        Application(const Arena&);
        virtual ~Application();

        void Run();
    private:
    };

    Application* CreateApplication(const Arena&);
}

#endif