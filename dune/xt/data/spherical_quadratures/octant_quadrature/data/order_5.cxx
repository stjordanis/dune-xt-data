// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2019 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2019)

#include "../octant_quadrature_data.hh"

namespace Dune {
namespace XT {
namespace Data {


template <>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<5>::get()
{
  return {{{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154,
            0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {0.05501, 0.05501, 0.05501, 0.05501, 0.27199, 0.27199, 0.27199, 0.27199, 0.60149, 0.60149, 0.60149, 0.60149,
            0.96931, 0.96931, 0.96931, 0.96931, 1.2988,  1.2988,  1.2988,  1.2988,  1.5158,  1.5158,  1.5158,  1.5158},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154,
            0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {1.6258, 1.6258, 1.6258, 1.6258, 1.8428, 1.8428, 1.8428, 1.8428, 2.1723, 2.1723, 2.1723, 2.1723,
            2.5401, 2.5401, 2.5401, 2.5401, 2.8696, 2.8696, 2.8696, 2.8696, 3.0866, 3.0866, 3.0866, 3.0866},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154,
            0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {3.1966, 3.1966, 3.1966, 3.1966, 3.4136, 3.4136, 3.4136, 3.4136, 3.7431, 3.7431, 3.7431, 3.7431,
            4.1109, 4.1109, 4.1109, 4.1109, 4.4404, 4.4404, 4.4404, 4.4404, 4.6574, 4.6574, 4.6574, 4.6574},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154,
            0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154, 0.99722, 0.93462, 0.69784, 0.26154},
           {4.7674, 4.7674, 4.7674, 4.7674, 4.9844, 4.9844, 4.9844, 4.9844, 5.3139, 5.3139, 5.3139, 5.3139,
            5.6817, 5.6817, 5.6817, 5.6817, 6.0112, 6.0112, 6.0112, 6.0112, 6.2282, 6.2282, 6.2282, 6.2282},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {0.05501, 0.05501, 0.05501, 0.05501, 0.27199, 0.27199, 0.27199, 0.27199, 0.60149, 0.60149, 0.60149, 0.60149,
            0.96931, 0.96931, 0.96931, 0.96931, 1.2988,  1.2988,  1.2988,  1.2988,  1.5158,  1.5158,  1.5158,  1.5158},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {1.6258, 1.6258, 1.6258, 1.6258, 1.8428, 1.8428, 1.8428, 1.8428, 2.1723, 2.1723, 2.1723, 2.1723,
            2.5401, 2.5401, 2.5401, 2.5401, 2.8696, 2.8696, 2.8696, 2.8696, 3.0866, 3.0866, 3.0866, 3.0866},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {3.1966, 3.1966, 3.1966, 3.1966, 3.4136, 3.4136, 3.4136, 3.4136, 3.7431, 3.7431, 3.7431, 3.7431,
            4.1109, 4.1109, 4.1109, 4.1109, 4.4404, 4.4404, 4.4404, 4.4404, 4.6574, 4.6574, 4.6574, 4.6574},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}},
          {{-0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154,
            -0.99722, -0.93462, -0.69784, -0.26154, -0.99722, -0.93462, -0.69784, -0.26154},
           {4.7674, 4.7674, 4.7674, 4.7674, 4.9844, 4.9844, 4.9844, 4.9844, 5.3139, 5.3139, 5.3139, 5.3139,
            5.6817, 5.6817, 5.6817, 5.6817, 6.0112, 6.0112, 6.0112, 6.0112, 6.2282, 6.2282, 6.2282, 6.2282},
           {0.0019446, 0.018584, 0.047925, 0.070538, 0.0039872, 0.038104, 0.098264, 0.14463,
            0.0050567, 0.048324, 0.12462,  0.18342,  0.0050567, 0.048324, 0.12462,  0.18342,
            0.0039872, 0.038104, 0.098264, 0.14463,  0.0019446, 0.018584, 0.047925, 0.070538}}};
}


} // namespace Data
} // namespace XT
} // namespace Dune