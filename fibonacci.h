#include <cassert>

template <int stage>
class Fibonacci
{
    public:
    static long getValue(int i);

    static const long value = Fibonacci<stage-1>::value
        + Fibonacci<stage-2>::value;

};

template <int stage>
long Fibonacci<stage>::getValue(int i)
{
    if (i == stage) {
        return value;
    }
    else {
        return Fibonacci<stage-1>::getValue(i);
    }
}

template <>
class Fibonacci<0>
{
    public:
    static long getValue(int i)
    {
        assert(i == 0);
        return 1;
    }
    static const long value = 1;
};

template <>
class Fibonacci<1>
{
    public:
    static long getValue(int i)
    {
        if (i==1) {
            return value;
        }
        else {
            return Fibonacci<0>::getValue(i);
        }
    }
    static const long value = 1;
};


