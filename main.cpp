import foo;
import calc;

#include <print>

int main()
{
    foo f;
    f.helloworld();

    int value{5};
    int count{10};

    calc c;
    auto result = c.add(value, count);

    std::println("The result is: {}", result);
    return 0;
}
