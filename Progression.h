#include <vector>
#include <iostream>
class Progression {

public:
    int H = 0;
    int Last = 0;
    int First = 0;
    std::vector<int> progList;
    Progression(int first, int last, int h);
    void TemplateMethod();
    int getH() const;
    void setH(int value);
    int getFirst() const;
    void setFirst(int value);
    int getLast() const;
    void setLast(int value);
    void Print(std::vector<int> &progList);
    void InitializeProgression(int a, int b, int h);
    virtual void Progress() = 0;
};
class ArithmeticProgression : public Progression
{
public:
    ArithmeticProgression(int f, int l, int h);
    void Progress() override;
};


class GeometryProgression : public Progression
{
public:
    GeometryProgression(int f, int l, int h);
    void Progress() override;
};

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include <vector>
#include <iostream>
class Progression {

public:
    int H = 0;
    int Last = 0;
    int First = 0;
    std::vector<int> progList;
    Progression(int first, int last, int h);
    void TemplateMethod();
    int getH() const;
    void setH(int value);
    int getFirst() const;
    void setFirst(int value);
    int getLast() const;
    void setLast(int value);
    void Print(std::vector<int> &progList);
    void InitializeProgression(int a, int b, int h);
    virtual void Progress() = 0;
};
class ArithmeticProgression : public Progression
{
public:
    ArithmeticProgression(int f, int l, int h);
    void Progress() override;
};


class GeometryProgression : public Progression
{
public:
    GeometryProgression(int f, int l, int h);
    void Progress() override;
};

