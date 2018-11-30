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
std::vector<std::vector<double>> GaussLobattoData<85>::get()
{
  return {{-1, 2.801120448179271708684E-4},
          {-0.9989720269601575944406, 0.001726201846626938835},
          {-0.996555308801970311092, 0.0031063840226994867711},
          {-0.9927608898566144961162, 0.004481547676585441825},
          {-0.9875943084220859787956, 0.0058504179627099589691},
          {-0.9810627571287894546578, 0.007211177725200376027},
          {-0.973175277991109608514, 0.008561962594443944757},
          {-0.9639427777168581257563, 0.009900910591638705233},
          {-0.9533780188711558154778, 0.011226172998875325503},
          {-0.9414956040992078045853, 0.0125359189683974971704},
          {-0.928311956615371338486, 0.013828338687682475061},
          {-0.9138452977819958861835, 0.015101646110443698163},
          {-0.8981156220527409825571, 0.016354081518747354759},
          {-0.8811446694014128313723, 0.017583913997018648772},
          {-0.862955895308730691039, 0.018789443844557541606},
          {-0.8435744383634049331055, 0.0199690049350731873489},
          {-0.8230270855292706219006, 0.021120967025047393966},
          {-0.8013422351299422984887, 0.022243738010062724635},
          {-0.7785498576039605136015, 0.02333576612710742571},
          {-0.7546814540856617353781, 0.0243955421003910904556},
          {-0.7297700128695807918674, 0.025421601228013577872},
          {-0.703849963818888038176, 0.02641252540677404257477},
          {-0.676957130781074315326, 0.0273669450924195080962},
          {-0.6491286820767750040517, 0.0282835411926815565313},
          {-0.620403079130242170865, 0.02916104689051985594114},
          {-0.590820023312514360062, 0.0299982493950744321207},
          {-0.5604204010707863094, 0.0307939916179205550729},
          {-0.529246227419838278589, 0.03154717377231847693608},
          {-0.4973405878736411299811, 0.0322567548932536359983},
          {-0.464747578897404241181, 0.032921754276170469067},
          {-0.4315122469623749129232, 0.033541252832414081845},
          {-0.3976805262876267957308, 0.0341143943595083081015},
          {-0.3632991753548879838034, 0.0346403867245158312346},
          {-0.328415712284154084922, 0.0351185029588457883151},
          {-0.2930783491594052822683, 0.0355480822629964008258},
          {-0.257335925395196885446, 0.035928530919844470033},
          {-0.2212378402362180533063, 0.0362593231152198411005},
          {-0.1848339844831113840104, 0.036540001664630987227},
          {-0.1481746715389152214908, 0.0367701786451375049342},
          {-0.1113105678714293228782, 0.03694953593149635732722},
          {-0.0742926229876116559585, 0.0370778256358409672011},
          {-0.0371719990167884232106, 0.03715487045028555973243},
          {0, 0.037180563891981298345},
          {0.0371719990167884232106, 0.037154870450285559732},
          {0.0742926229876116559585, 0.037077825635840967201},
          {0.1113105678714293228782, 0.036949535931496357327},
          {0.148174671538915221491, 0.0367701786451375049342},
          {0.1848339844831113840104, 0.036540001664630987227},
          {0.2212378402362180533063, 0.0362593231152198411005},
          {0.257335925395196885446, 0.0359285309198444700325},
          {0.2930783491594052822683, 0.0355480822629964008258},
          {0.3284157122841540849223, 0.0351185029588457883151},
          {0.363299175354887983803, 0.0346403867245158312346},
          {0.3976805262876267957308, 0.034114394359508308102},
          {0.4315122469623749129232, 0.033541252832414081845},
          {0.464747578897404241181, 0.032921754276170469067},
          {0.4973405878736411299811, 0.032256754893253635998},
          {0.529246227419838278589, 0.031547173772318476936},
          {0.5604204010707863094, 0.030793991617920555073},
          {0.5908200233125143600622, 0.029998249395074432121},
          {0.6204030791302421708647, 0.0291610468905198559411},
          {0.6491286820767750040517, 0.028283541192681556531},
          {0.6769571307810743153263, 0.02736694509241950809618},
          {0.7038499638188880381757, 0.0264125254067740425748},
          {0.7297700128695807918674, 0.0254216012280135778718},
          {0.7546814540856617353781, 0.0243955421003910904556},
          {0.7785498576039605136015, 0.02333576612710742571002},
          {0.8013422351299422984887, 0.0222437380100627246353},
          {0.8230270855292706219006, 0.02112096702504739396563},
          {0.8435744383634049331055, 0.0199690049350731873489},
          {0.862955895308730691039, 0.0187894438445575416057},
          {0.8811446694014128313723, 0.017583913997018648772},
          {0.8981156220527409825571, 0.0163540815187473547591},
          {0.9138452977819958861835, 0.0151016461104436981633},
          {0.928311956615371338486, 0.0138283386876824750612},
          {0.9414956040992078045853, 0.01253591896839749717},
          {0.9533780188711558154778, 0.0112261729988753255035},
          {0.9639427777168581257563, 0.0099009105916387052333},
          {0.9731752779911096085135, 0.0085619625944439447575},
          {0.9810627571287894546578, 0.0072111777252003760269},
          {0.9875943084220859787956, 0.0058504179627099589691},
          {0.9927608898566144961162, 0.0044815476765854418255},
          {0.9965553088019703110921, 0.003106384022699486771},
          {0.9989720269601575944406, 0.001726201846626938835},
          {1, 2.801120448179271708684E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
