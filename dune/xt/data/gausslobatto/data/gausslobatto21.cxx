// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2018)
//
// This file is part of the dune-gdt project:

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<21>::get()
{
  return {{-1, 0.004761904761904761904762},
          {-0.9825722966045480282345, 0.0291848400985054586095},
          {-0.9419762969597455342961, 0.0518431690008496250727},
          {-0.8792947553235904644512, 0.0732739181850741442525},
          {-0.7960019260777124047443, 0.0929854679578860653011},
          {-0.6940510260622232326273, 0.110517083219123335267},
          {-0.575831960261830686927, 0.1254581211908689480152},
          {-0.4441157832790021011945, 0.1374584628600413435809},
          {-0.3019898565087648872754, 0.1462368624479774592673},
          {-0.1527855158021854660064, 0.151587575111681384453},
          {0, 0.1533851903321749485516},
          {0.1527855158021854660064, 0.1515875751116813844533},
          {0.3019898565087648872754, 0.1462368624479774592673},
          {0.444115783279002101195, 0.1374584628600413435809},
          {0.575831960261830686927, 0.1254581211908689480152},
          {0.6940510260622232326273, 0.110517083219123335267},
          {0.7960019260777124047443, 0.092985467957886065301},
          {0.8792947553235904644512, 0.0732739181850741442525},
          {0.9419762969597455342961, 0.0518431690008496250727},
          {0.9825722966045480282345, 0.0291848400985054586095},
          {1, 0.004761904761904761904762}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
