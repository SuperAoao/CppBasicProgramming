#include <iostream>

int main()
{
    // left value: i 
    // right value 10
    int i = 10; 
    ++i = 20;
    // �޷�����ֵ���ð󶨵���ֵ
    //int&& rref_i = i;

    // ʹ��move����
    int&& rref_i = std::move(i);
    return 0;
}