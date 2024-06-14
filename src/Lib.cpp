#include "Lib.h"

#include <range/v3/all.hpp>

#include <iostream>

namespace lib {

void say_hello(std::string name) {
  std::cout << "Hello, " << name << "!" << '\n';
}

void play_fizzbuzz() {
  auto fizzbuzz = [](int i) {
    if (i % 15 == 0) {
      return std::string("FizzBuzz");
    } else if (i % 3 == 0) {
      return std::string("Fizz");
    } else if (i % 5 == 0) {
      return std::string("Buzz");
    } else {
      return std::to_string(i);
    }
  };

  ranges::for_each(ranges::views::ints(1, 101),
                   [&fizzbuzz](int i) { std::cout << fizzbuzz(i) << '\n'; });
}

} // namespace lib