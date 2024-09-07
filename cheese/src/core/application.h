#ifndef APPLICATION_H
#define APPLICATION_H

namespace ch
{
    class Application 
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    private:
        static Application* s_Application;
    };

    Application* CreateApplication();
}

#endif