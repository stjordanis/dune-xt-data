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


template <>
std::vector<std::vector<double>> GaussLobattoData<53>::get()
{
  return {{-1, 7.256894049346879535559E-4},
          {-0.9973375445638732961393, 0.0044696527076774915455},
          {-0.9910839518755060142745, 0.008033038910742344715},
          {-0.981281571296245541692, 0.0115657887065718309297},
          {-0.9679662554532097370789, 0.0150568778448662093461},
          {-0.9511858046110395871724, 0.0184940030267897823625},
          {-0.9310003269769785512385, 0.0218649026175167169008},
          {-0.9074820956587547473215, 0.0251575224796743168069},
          {-0.8807153061392732347113, 0.0283600806485199561371},
          {-0.8507957797162505839566, 0.03146111484103212286},
          {-0.8178306222328043799106, 0.0344495251368237582745},
          {-0.7819378413882300687595, 0.0373146143101950464611},
          {-0.743245924631939271801, 0.0400461263671432865414},
          {-0.7018933793761997157245, 0.0426342833683741875518},
          {-0.6580282372628381713671, 0.0450698204845670102866},
          {-0.6118075242973007356803, 0.0473440191892061542684},
          {-0.563396698765007172942, 0.0494487384833563462946},
          {-0.5129690589511447711309, 0.0513764440466631643637},
          {-0.4607051227888445512216, 0.053120235213173155321},
          {-0.4067919816590326977658, 0.0546738696769142054743},
          {-0.3514226306566647155158, 0.05603178583960126097509},
          {-0.2947952777216879715375, 0.0571891227209145077872},
          {-0.2371126341083959132459, 0.0581417373603319262755},
          {-0.1785811887334429521996, 0.0588862196483727202679},
          {-0.1194104690003812918044, 0.0594199045342503286851},
          {-0.05981229074691992505874, 0.0597408815662902573856},
          {0, 0.0598480017309944484587},
          {0.0598122907469199250587, 0.059740881566290257386},
          {0.1194104690003812918044, 0.0594199045342503286851},
          {0.1785811887334429521996, 0.0588862196483727202679},
          {0.2371126341083959132459, 0.058141737360331926275},
          {0.2947952777216879715375, 0.0571891227209145077872},
          {0.3514226306566647155158, 0.056031785839601260975},
          {0.406791981659032697766, 0.0546738696769142054743},
          {0.4607051227888445512216, 0.0531202352131731553206},
          {0.5129690589511447711309, 0.0513764440466631643637},
          {0.563396698765007172942, 0.0494487384833563462946},
          {0.6118075242973007356803, 0.0473440191892061542684},
          {0.6580282372628381713671, 0.0450698204845670102866},
          {0.7018933793761997157245, 0.0426342833683741875518},
          {0.743245924631939271801, 0.040046126367143286541},
          {0.7819378413882300687595, 0.037314614310195046461},
          {0.8178306222328043799106, 0.034449525136823758275},
          {0.8507957797162505839566, 0.03146111484103212286},
          {0.8807153061392732347113, 0.0283600806485199561371},
          {0.9074820956587547473215, 0.02515752247967431680687},
          {0.9310003269769785512385, 0.021864902617516716901},
          {0.9511858046110395871724, 0.0184940030267897823625},
          {0.9679662554532097370789, 0.0150568778448662093461},
          {0.981281571296245541692, 0.01156578870657183092971},
          {0.9910839518755060142745, 0.008033038910742344715},
          {0.9973375445638732961393, 0.0044696527076774915455},
          {1, 7.256894049346879535559E-4}};
}


} // namespace Data
} // namespace XT
} // namespace Dune
