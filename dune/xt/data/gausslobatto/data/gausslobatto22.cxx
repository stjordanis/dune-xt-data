// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../gausslobatto_data.hh"

namespace Dune {
namespace XT {
namespace Data {
namespace internal {


template <>
std::vector<std::vector<double>> GaussLobattoData<22>::get()
{
  return {{-1, 0.004329004329004329004329},
          {-0.9841524384576461765523, 0.0265457476825017579116},
          {-0.9472042839992286805242, 0.047214465293740752124},
          {-0.8900622901909044705297, 0.0668656058645530760124},
          {-0.8139489276119211360454, 0.0850900603918384478157},
          {-0.7204872399612021581199, 0.1015005748016476743724},
          {-0.6116694382842589712262, 0.11574764465393906659},
          {-0.4898148751899023498088, 0.127527696653430275531},
          {-0.357520710138919538061, 0.1365896886137414266862},
          {-0.217606585159285041788, 0.1427404922713614003362},
          {-0.07305454001089833476109, 0.145849019444241793616},
          {0.0730545400108983347611, 0.1458490194442417936164},
          {0.217606585159285041788, 0.142740492271361400336},
          {0.357520710138919538061, 0.136589688613741426686},
          {0.4898148751899023498088, 0.1275276966534302755308},
          {0.6116694382842589712262, 0.11574764465393906659},
          {0.7204872399612021581199, 0.1015005748016476743724},
          {0.8139489276119211360454, 0.0850900603918384478157},
          {0.8900622901909044705297, 0.0668656058645530760124},
          {0.9472042839992286805242, 0.0472144652937407521238},
          {0.9841524384576461765523, 0.0265457476825017579116},
          {1, 0.004329004329004329004329}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune