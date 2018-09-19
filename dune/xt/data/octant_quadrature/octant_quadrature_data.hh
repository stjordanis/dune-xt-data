#ifndef DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH
#define DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH

#include <array>
#include <utility>
#include <vector>

namespace Dune {
namespace GDT {
namespace internal {


template <size_t order>
struct OctantQuadratureData
{
  // This vector contains the quadratures for each octant, in the order
  // ppp, mpp, mmp, pmp, ppm, mpm, mmm, pmm, where e.g. mpp is the octant
  // with negative x values and positive y and z values.
  // Each of the eight second-level vectors consists of three vectors of the
  // same size (number of quadrature points), where the first vector contains
  // the mu values, the second one the phi values and the third one the weights.
  // mu is the cosine of the polar angle, phi is the azimutal angle, i.e. we can
  // get the cartesian coordinates from (mu, phi) as
  // (x, y, z) = (sqrt(1-mu^2) cos(phi), sqrt(1-mu^2) sin(phi), mu)
  static std::vector<std::vector<std::vector<double>>> get();
};


} // namespace internal
} // namespace GDT
} // namespace Dune

#endif // DUNE_XT_DATA_DUNE_XT_DATA_OCTANT_QUADRATURE_OCTANT_QUADRATURE_DATA_HH