#pragma once

#include <type_traits>

namespace plwf {
// C++11: std::enable_if, std::is_floating_point
template<typename T, typename = std::enable_if<std::is_floating_point<T>::value>>
struct SolverContext {
  struct PointSet {
    const T* data = nullptr;
    std::size_t stride = sizeof(T);
    std::size_t size = 0;
  } x, y, w;

  enum class LapackDriver {
    kGelsd,
    kGelsy,
    kGelss,
  } driver;

  int degree;
  int seed;
};
}