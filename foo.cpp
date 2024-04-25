module;
#include <print>

export module foo;

export class foo {
public:
    foo();
    ~foo();
    void helloworld();
};

foo::foo() = default;
foo::~foo() = default;

void foo::helloworld() {
  std::println("hello world!");
}
