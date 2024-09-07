#ifndef ENTRY_H
#define ENTRY_H

int main()
{
    auto app = ch::CreateApplication();
    app->Run();
    delete app;
}

#endif