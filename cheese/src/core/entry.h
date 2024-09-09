#ifndef ENTRY_H
#define ENTRY_H

int main()
{
    ch::Arena arena;
    auto app = ch::CreateApplication(arena);
    app->Run();
    delete app;
}

#endif