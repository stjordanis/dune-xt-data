// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2018 dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2019)

#ifndef DUNE_XT_DATA_SPHERICALQUADRATURES_OCTANTQUADRATURE_HH
#define DUNE_XT_DATA_SPHERICALQUADRATURES_OCTANTQUADRATURE_HH

#include <vector>

#include <dune/common/fvector.hh>

#include <dune/geometry/quadraturerules.hh>

#include <dune/xt/common/coordinates.hh>
#include <dune/xt/common/debug.hh>

#include <dune/xt/data/spherical_quadratures/octant_quadrature/octant_quadrature_data.hh>

namespace Dune {
namespace XT {
namespace Data {


// The tabulated values are in spherical coordinates (mu, phi), where mu in [-1,1] is
// the cosine of the polar angle and phi in [0, 2 pi] is the azimuthal angle. The
// returned quadrature is in cartesian coordinates.
template <class FieldType>
class OctantQuadratures
{
public:
  using QuadratureType = Dune::QuadratureRule<FieldType, 3>;
  static std::vector<QuadratureType> get(const size_t requested_order)
  {
    size_t order = requested_order;
    if (requested_order > 40) {
      std::cerr << "Warning: Requested octant quadratures with order " << requested_order
                << " are not available, using highest available order " << 40 << "." << std::endl;
      order = 40;
    }
    if (order < 2)
      order = 2;
    std::vector<std::vector<std::vector<double>>> data_vector;
    switch (order) {
      case 2:
        data_vector = XT::Data::OctantQuadratureData<2>::get();
        break;
      case 3:
        data_vector = XT::Data::OctantQuadratureData<3>::get();
        break;
      case 4:
        data_vector = XT::Data::OctantQuadratureData<4>::get();
        break;
      case 5:
        data_vector = XT::Data::OctantQuadratureData<5>::get();
        break;
      case 6:
        data_vector = XT::Data::OctantQuadratureData<6>::get();
        break;
      case 7:
        data_vector = XT::Data::OctantQuadratureData<7>::get();
        break;
      case 8:
        data_vector = XT::Data::OctantQuadratureData<8>::get();
        break;
      case 9:
        data_vector = XT::Data::OctantQuadratureData<9>::get();
        break;
      case 10:
        data_vector = XT::Data::OctantQuadratureData<10>::get();
        break;
      case 11:
        data_vector = XT::Data::OctantQuadratureData<11>::get();
        break;
      case 12:
        data_vector = XT::Data::OctantQuadratureData<12>::get();
        break;
      case 13:
        data_vector = XT::Data::OctantQuadratureData<13>::get();
        break;
      case 14:
        data_vector = XT::Data::OctantQuadratureData<14>::get();
        break;
      case 15:
        data_vector = XT::Data::OctantQuadratureData<15>::get();
        break;
      case 16:
        data_vector = XT::Data::OctantQuadratureData<16>::get();
        break;
      case 17:
        data_vector = XT::Data::OctantQuadratureData<17>::get();
        break;
      case 18:
        data_vector = XT::Data::OctantQuadratureData<18>::get();
        break;
      case 19:
        data_vector = XT::Data::OctantQuadratureData<19>::get();
        break;
      case 20:
        data_vector = XT::Data::OctantQuadratureData<20>::get();
        break;
      case 21:
        data_vector = XT::Data::OctantQuadratureData<21>::get();
        break;
      case 22:
        data_vector = XT::Data::OctantQuadratureData<22>::get();
        break;
      case 23:
        data_vector = XT::Data::OctantQuadratureData<23>::get();
        break;
      case 24:
        data_vector = XT::Data::OctantQuadratureData<24>::get();
        break;
      case 25:
        data_vector = XT::Data::OctantQuadratureData<25>::get();
        break;
      case 26:
        data_vector = XT::Data::OctantQuadratureData<26>::get();
        break;
      case 27:
        data_vector = XT::Data::OctantQuadratureData<27>::get();
        break;
      case 28:
        data_vector = XT::Data::OctantQuadratureData<28>::get();
        break;
      case 29:
        data_vector = XT::Data::OctantQuadratureData<29>::get();
        break;
      case 30:
        data_vector = XT::Data::OctantQuadratureData<30>::get();
        break;
      case 31:
        data_vector = XT::Data::OctantQuadratureData<31>::get();
        break;
      case 32:
        data_vector = XT::Data::OctantQuadratureData<32>::get();
        break;
      case 33:
        data_vector = XT::Data::OctantQuadratureData<33>::get();
        break;
      case 34:
        data_vector = XT::Data::OctantQuadratureData<34>::get();
        break;
      case 35:
        data_vector = XT::Data::OctantQuadratureData<35>::get();
        break;
      case 36:
        data_vector = XT::Data::OctantQuadratureData<36>::get();
        break;
      case 37:
        data_vector = XT::Data::OctantQuadratureData<37>::get();
        break;
      case 38:
        data_vector = XT::Data::OctantQuadratureData<38>::get();
        break;
      case 39:
        data_vector = XT::Data::OctantQuadratureData<39>::get();
        break;
      case 40:
        data_vector = XT::Data::OctantQuadratureData<40>::get();
        break;
      default:
        DUNE_THROW(NotImplemented, "Requested order is not available!");
    }
    DXT_ASSERT(data_vector.size() == 8);
    std::vector<QuadratureType> ret(8);
    for (size_t ii = 0; ii < 8; ++ii) {
      for (size_t jj = 0; jj < data_vector[ii][0].size(); ++jj) {
        FieldVector<FieldType, 2> spherical_coords{data_vector[ii][0][jj], data_vector[ii][1][jj]};
        FieldType weight = data_vector[ii][2][jj];
        ret[ii].emplace_back(XT::Common::CoordinateConverter<FieldType>::to_cartesian(spherical_coords, true), weight);
      }
    }
#ifndef NDEBUG
    // check sanity of quadrature
    for (size_t ii = 0; ii < 8; ++ii) {
      const FieldType summed_weights =
          std::accumulate(ret[ii].begin(),
                          ret[ii].end(),
                          0.,
                          [](const FieldType& sum, const Dune::QuadraturePoint<FieldType, 3> quad_point) {
                            return sum + quad_point.weight();
                          });
      DXT_ASSERT(XT::Common::FloatCmp::eq(summed_weights, 0.5 * M_PI, 1e-4, 1e-4));
      for (const auto& quad_point : ret[ii])
        DXT_ASSERT(XT::Common::FloatCmp::eq(quad_point.position().two_norm(), 1., 1e-10, 1e-10));
    }
#endif
    return ret;
  }
}; // class OctantQuadratures


} // namespace Data
} // namespace XT
} // namespace Dune

#endif // DUNE_XT_DATA_SPHERICALQUADRATURES_OCTANTQUADRATURE_HH