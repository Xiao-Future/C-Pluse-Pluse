#ifndef _10_1_H_
#define _10_1_H_

#include <string>

class One
{
private:
    std::string name;
    std::string account;
    double money;
public:
    One();
    One(const std::string & a, const std::string & b, double n);
    ~One();
    void show();
    void input(double a);
    void output(double a);
};
#endif
