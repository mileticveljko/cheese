#ifndef LOG_H
#define LOG_H

#include <string>
#include <sstream>
#include <iostream>
#include <vector>

namespace ch
{
    class Log
    {
    public:
        ~Log() = default;
        
        template<typename... Args>
        static void LogTrace(const std::string& fmt, Args... args)
        {
            LogMsg("", fmt, args...);
        }
        
        template<typename... Args>
        static void LogInfo(const std::string& fmt, Args... args)
        {
            LogMsg("\x1b[32m", fmt, args...);
        }
        
        template<typename... Args>
        static void LogWarn(const std::string& fmt, Args... args)
        {

            LogMsg("\x1b[33m", fmt, args...);
        }
        
        template<typename... Args>
        static void LogError(const std::string& fmt, Args... args)
        {
            LogMsg("\x1b[31m", fmt, args...);
        }
    
    private:
        Log() = default;
        
        template<typename T>
        static std::string toString(const T& value) {
            std::ostringstream oss;
            oss << value;
            return oss.str();
        }

        template<typename... Args>
        static void LogMsg(const std::string& color, const std::string& fmt, Args... args)
        {
            std::string o_fmt = fmt;
            std::vector<std::string> l_args{(toString(args))...};

            for (const auto& l_arg : l_args) {
                std::size_t pos = o_fmt.find('$');
                if (pos != std::string::npos) {
                    o_fmt.replace(pos, 1, l_arg);
                }
            }

            std::cout << color << o_fmt << "\x1b[0m" << std::endl;
        }
    };
}

#endif