#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
class Log{
public:
    Log() = default;
    ~Log() = default;
    static void LogExecution(const std::string &mes);
private:
    static void Loger(const std::string &logMessage, std::ofstream &out);
};

class Operation
{
public:
    static double Run(wchar_t operationCode, int operand);
};

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include <iostream>
#include <fstream>
#include <string>
#include <ctime>
class Log{
public:
    Log() = default;
    ~Log() = default;
    static void LogExecution(const std::string &mes);
private:
    static void Loger(const std::string &logMessage, std::ofstream &out);
};

class Operation
{
public:
    static double Run(wchar_t operationCode, int operand);
};

