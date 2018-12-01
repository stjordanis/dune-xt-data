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
std::vector<std::vector<double>> GaussLobattoData<46>::get()
{
  return {{-1, 9.661835748792270531401E-4},
          {-0.9964557257048159025528, 0.005949148745440358216},
          {-0.9881350191822103942202, 0.0106846384001329856086},
          {-0.9751041139968067950029, 0.0153667065805231165808},
          {-0.9574261243113947571403, 0.01997520140160878273},
          {-0.9351854736066138647537, 0.0244884196166593774436},
          {-0.9084882001398751208106, 0.0288849101793040301335},
          {-0.8774615477240353790834, 0.033143738893585783363},
          {-0.842253380936642779347, 0.037244616854397545031},
          {-0.8030314869289462301086, 0.0411680042412106670401},
          {-0.7599827781733286780857, 0.044895205632908466507},
          {-0.713312402704111991783, 0.0484084598966851353999},
          {-0.6632427669358621239461, 0.0516910251532196821671},
          {-0.6100124760154934338506, 0.0547272587051990178221},
          {-0.5538751968769602665665, 0.05750269165241254047658},
          {-0.495098449468395239723, 0.06000409787893643307083},
          {-0.4339623319362991077553, 0.0622195571012676370177},
          {-0.3707581858539354271921, 0.0641385116850423703505},
          {-0.305787207861060975211, 0.0657518169635167458575},
          {-0.239359014334641604038, 0.0670517848200303492048},
          {-0.17179016593254402079, 0.068032220327834335081},
          {-0.103402659042611870517, 0.0686884512732694468471},
          {-0.0345223913267960983606, 0.0690173504219359669989},
          {0.0345223913267960983606, 0.069017350421935966999},
          {0.1034026590426118705173, 0.0686884512732694468471},
          {0.1717901659325440207899, 0.0680322203278343350815},
          {0.239359014334641604038, 0.067051784820030349205},
          {0.305787207861060975211, 0.0657518169635167458575},
          {0.3707581858539354271921, 0.0641385116850423703505},
          {0.4339623319362991077553, 0.0622195571012676370177},
          {0.495098449468395239723, 0.0600040978789364330708},
          {0.5538751968769602665665, 0.057502691652412540477},
          {0.6100124760154934338506, 0.0547272587051990178221},
          {0.6632427669358621239461, 0.0516910251532196821671},
          {0.713312402704111991783, 0.0484084598966851354},
          {0.7599827781733286780857, 0.044895205632908466507},
          {0.8030314869289462301086, 0.0411680042412106670401},
          {0.8422533809366427793469, 0.037244616854397545031},
          {0.8774615477240353790834, 0.0331437388935857833627},
          {0.9084882001398751208106, 0.028884910179304030133},
          {0.9351854736066138647537, 0.024488419616659377444},
          {0.9574261243113947571403, 0.01997520140160878273},
          {0.9751041139968067950029, 0.015366706580523116581},
          {0.9881350191822103942202, 0.010684638400132985609},
          {0.9964557257048159025528, 0.0059491487454403582158},
          {1, 9.661835748792270531401E-4}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
