
#include "Singleton.h"
void Log::LogExecution(const std::string &mes)
{
    {
        std::ofstream out;          // поток для записи
        out.open("log.txt");
        Loger(mes, out);
        out.close();
    }
}

void Log::Loger(const std::string &logMessage, std::ofstream &out)
{
    out << "Log Entry : " << std::endl;
    time_t now = time(nullptr);
    char mbstr[100];
    std::strftime(mbstr, 100, "%d/%m/%Y %T", std::localtime(&now));
    out << mbstr << "\n";
    out << "Action: " <<  logMessage << "\n";
    out << "---------------------------------------" << "\n";
}

double Operation::Run(wchar_t operationCode, int operand)
{
    Log *lg2 = new Log();
    double rez = 0;
    switch (operationCode)
    {
        case L'+':
            rez += operand;
            lg2->LogExecution("Слож�
#include "Singleton.h"
void Log::LogExecution(const std::string &mes)
{
    {
        std::ofstream out;          // поток для записи
        out.open("log.txt");
        Loger(mes, out);
        out.close();
    }
}

void Log::Loger(const std::string &logMessage, std::ofstream &out)
{
    out << "Log Entry : " << std::endl;
    time_t now = time(nullptr);
    char mbstr[100];
    std::strftime(mbstr, 100, "%d/%m/%Y %T", std::localtime(&now));
    out << mbstr << "\n";
    out << "Action: " <<  logMessage << "\n";
    out << "---------------------------------------" << "\n";
}

double Operation::Run(wchar_t operationCode, int operand)
{
    Log *lg2 = new Log();
    double rez = 0;
    switch (operationCode)
    {
        case L'+':
            rez += operand;
            lg2->LogExecution("Сложение " + std::to_string(operand));
            break;
        case L'-':
            rez -= operand;
            lg2->LogExecution("Вычитание " + std::to_string(operand));
            break;
        case L'*':
            rez *= operand;
            break;
        case L'/':
        case L':':
            rez /= operand;
            break;
    }

    delete lg2;
    return rez;
}
