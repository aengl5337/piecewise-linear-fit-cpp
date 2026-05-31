#pragma once

#include "SolverContext.h"

#include <type_traits>

namespace plwf {
// C++11: std::enable_if, std::is_floating_point
template<typename T, typename = std::enable_if<std::is_floating_point<T>::value>>
class PiecewiseLinFit {
 public:
  auto& setX(const std::vector<T>& x, std::size_t stride = sizeof(T)) {
    const auto size = std::size(x);
    return *this;
  }

  auto& setY(const std::vector<T>& y, std::size_t stride = sizeof(T)) {
    const auto size = std::size(y);
    return *this;
  }

  // add independent
  auto& setX(const T* x, std::size_t size, std::size_t stride = sizeof(T)) {
    return *this;
  }

  // add dependent
  auto& setY(const T* y, std::size_t size, std::size_t stride = sizeof(T)) {
    return *this;
  }

  auto& setDegree(unsigned degree = 1) {
    return *this;
  }

  auto& setWeights(const T* w, std::size_t size, std::size_t stride = sizeof(T)) {
    return *this;
  }

  auto& setSeed(int seed) {

  }

 protected:
  SolverContext context;
};
}