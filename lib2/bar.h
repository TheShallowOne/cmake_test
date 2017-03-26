#pragma once

#include <foo.h>

class Bar : private Foo
{
public:
    void operator()();
};
