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
std::vector<std::vector<double>> GaussLobattoData<62>::get()
{
  return {{-1, 5.288207297726070861978E-4},
          {-0.998059595212785754432, 0.0032578875892193705401},
          {-0.9935001182696870862176, 0.0058585285951202132237},
          {-0.9863480105471107832208, 0.008442515672946951724},
          {-0.9766224865738200900175, 0.0110042892283715360561},
          {-0.9643490173304325045484, 0.0135373071001432463019},
          {-0.9495596509405890912365, 0.0160349917875454051803},
          {-0.9322929815935626961116, 0.0184908364361957759817},
          {-0.9125940606463695115622, 0.0208984374891704307118},
          {-0.8905142826105712416822, 0.02325151527565228658831},
          {-0.8661112523399236181746, 0.0255439315939736018266},
          {-0.8394486352707370005113, 0.0277697061599817990535},
          {-0.8105959915664353970507, 0.0299230323861576791089},
          {-0.77962859476244837829, 0.0319982926097273081984},
          {-0.7466272354494844540637, 0.0339900727868500097742},
          {-0.711678010535563816535, 0.0358931766369543930297},
          {-0.674872098649795928507, 0.037702639209920314254},
          {-0.636305522280408845754, 0.0394137398451159661187},
          {-0.596078897271021447558, 0.04102201449062340893535},
          {-0.5542971703305762683171, 0.0425232673516080645601},
          {-0.5110693452428111103609, 0.0439135818380274349885},
          {-0.4665081984901889379551, 0.045189330783441834068},
          {-0.4207299850345740718119, 0.0463471859084532638734},
          {-0.3738541350224784738314, 0.0473841265041931870562},
          {-0.326002942206292453041, 0.0482974473132715643773},
          {-0.2773012448944732883556, 0.0490847655876680265688},
          {-0.227876100263123186539, 0.0497440273051781802346},
          {-0.1778564528786861559571, 0.05027351252821397989224},
          {-0.1273727982965821216388, 0.0506718398909887450009},
          {-0.0765568426134338683484, 0.05093797020338757075921},
          {-0.0255411588610930442529, 0.0510712091621258449277},
          {0.025541158861093044253, 0.051071209162125844928},
          {0.0765568426134338683484, 0.050937970203387570759},
          {0.1273727982965821216388, 0.0506718398909887450009},
          {0.1778564528786861559571, 0.0502735125282139798922},
          {0.227876100263123186539, 0.0497440273051781802346},
          {0.2773012448944732883556, 0.04908476558766802656878},
          {0.326002942206292453041, 0.0482974473132715643773},
          {0.3738541350224784738314, 0.0473841265041931870562},
          {0.4207299850345740718119, 0.0463471859084532638734},
          {0.466508198490188937955, 0.04518933078344183406769},
          {0.511069345242811110361, 0.0439135818380274349885},
          {0.5542971703305762683171, 0.04252326735160806456},
          {0.5960788972710214475584, 0.04102201449062340893535},
          {0.6363055222804088457544, 0.0394137398451159661187},
          {0.6748720986497959285073, 0.0377026392099203142538},
          {0.7116780105355638165348, 0.03589317663695439303},
          {0.7466272354494844540637, 0.033990072786850009774},
          {0.77962859476244837829, 0.0319982926097273081984},
          {0.8105959915664353970507, 0.0299230323861576791089},
          {0.8394486352707370005113, 0.0277697061599817990535},
          {0.8661112523399236181746, 0.0255439315939736018266},
          {0.8905142826105712416822, 0.0232515152756522865883},
          {0.9125940606463695115622, 0.0208984374891704307118},
          {0.9322929815935626961116, 0.01849083643619577598166},
          {0.9495596509405890912365, 0.0160349917875454051803},
          {0.9643490173304325045484, 0.0135373071001432463019},
          {0.9766224865738200900175, 0.0110042892283715360561},
          {0.9863480105471107832208, 0.00844251567294695172403},
          {0.9935001182696870862176, 0.0058585285951202132237},
          {0.998059595212785754432, 0.0032578875892193705401},
          {1, 5.288207297726070861978E-4}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
