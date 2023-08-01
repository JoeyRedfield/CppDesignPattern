#include <iostream>
using namespace std; //3

class MainTemplate
{
protected:
    void step1() {
        cout << "step 1" << endl;
    }
    virtual bool step2() = 0;
    virtual int step3() = 0;
    void step4() {
        cout << "step 4" << endl;
    }
public:
    void run() {
        step1();
        int times = 4;
        if (step2()) {
            times = step3();
        }
        for (int i = 0; i < times; ++i) {
            step4();
        }
    }
    virtual ~MainTemplate() {};
};

class Application1 : public MainTemplate
{
public:
    ~Application1() = default;
protected:
    virtual bool step2() {
        return true;
    }
    virtual int step3() {
        return 2;
    }
};

class Application2 : public MainTemplate
{
public:
    ~Application2() = default;
protected:
    virtual bool step2() {
        return false;
    }
    // ����պ��������д����ȻApp2���ǳ������ˡ�
    virtual int step3() {
        return 0;
    }
};