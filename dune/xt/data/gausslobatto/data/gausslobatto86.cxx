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
std::vector<std::vector<double>> GaussLobattoData<86>::get()
{
  return {{-1, 2.735978112175102599179E-4},
          {-0.998995929308718902614, 0.001686071056896356632},
          {-0.9966353729485965272143, 0.0030342236346014890655},
          {-0.9929290425808816747937, 0.0043775718060139674979},
          {-0.9878822288039905462235, 0.0057149133109336878144},
          {-0.981501795319843123232, 0.0070445158074724383256},
          {-0.973796369891473170969, 0.008364600337361943097553},
          {-0.964776359855114388572, 0.009673389661042158648},
          {-0.9544539441634686170132, 0.0109691187603985671031},
          {-0.942843058763103838833, 0.0122500392277879492972},
          {-0.929959378437169090875, 0.0135144222462052170481},
          {-0.9158202959159057639623, 0.0147605611474306731607},
          {-0.9004448985211955802309, 0.015986773807408025795},
          {-0.8838539424610707934781, 0.0171914049579724185067},
          {-0.8660698248423931919025, 0.0183728284411468817241},
          {-0.8471165534540367750982, 0.019529449414531459917},
          {-0.8270197143681684289901, 0.0206597065097609910104},
          {-0.8058064374067442343437, 0.02176207394338942946},
          {-0.7835053595216096755552, 0.022835063578455358142},
          {-0.7601465861386074082953, 0.0238772269345098710715},
          {-0.7357616505184272156797, 0.0248871571436944092},
          {-0.7103834711893833957723, 0.0258634908503947611799},
          {-0.684046307509780035377, 0.0268049100520023948371},
          {-0.6567857134199754443899, 0.027710143878354636886},
          {-0.628638489446656508709, 0.02857797030748578674759},
          {-0.599642633024165954011, 0.0294072178153942631353},
          {-0.5698372871999803339566, 0.0301967669576121942109},
          {-0.5392626877936069258577, 0.0309455518804511677565},
          {-0.5079601090802483700969, 0.03165256175988981306904},
          {-0.4759718080725706214377, 0.0323168421661646650874},
          {-0.443340967475799055004, 0.0329374963522248227248},
          {-0.4101116373931563046041, 0.0335136864643128772942},
          {-0.3763286758603408535884, 0.03404463467303916504673},
          {-0.3420376882893250550845, 0.0345296242234233553052},
          {-0.3072849659032228538209, 0.0349680004024865187842},
          {-0.2721174232453389339326, 0.035359171423087943965},
          {-0.2365825348467604241794, 0.035702609222813907949},
          {-0.2007282711379879233951, 0.035997850176840193089},
          {-0.1646030336911229014802, 0.0362444957238062061626},
          {-0.1282555898800320864409, 0.0364422129038559387023},
          {-0.091735007046695031318, 0.0365907348081195416698},
          {-0.0550905862626075954154, 0.036689860939028811361},
          {-0.0183717957746606648566, 0.0367394574809802322608},
          {0.01837179577466066485658, 0.036739457480980232261},
          {0.05509058626260759541537, 0.03668986093902881136054},
          {0.091735007046695031318, 0.0365907348081195416698},
          {0.128255589880032086441, 0.036442212903855938702},
          {0.16460303369112290148, 0.036244495723806206163},
          {0.200728271137987923395, 0.0359978501768401930887},
          {0.2365825348467604241794, 0.0357026092228139079489},
          {0.272117423245338933933, 0.035359171423087943965},
          {0.3072849659032228538209, 0.0349680004024865187842},
          {0.342037688289325055085, 0.034529624223423355305},
          {0.3763286758603408535884, 0.0340446346730391650467},
          {0.4101116373931563046041, 0.0335136864643128772942},
          {0.443340967475799055004, 0.0329374963522248227248},
          {0.475971808072570621438, 0.032316842166164665087},
          {0.507960109080248370097, 0.031652561759889813069},
          {0.5392626877936069258577, 0.0309455518804511677565},
          {0.5698372871999803339566, 0.0301967669576121942109},
          {0.5996426330241659540106, 0.0294072178153942631353},
          {0.6286384894466565087092, 0.0285779703074857867476},
          {0.6567857134199754443899, 0.027710143878354636886},
          {0.6840463075097800353772, 0.0268049100520023948371},
          {0.7103834711893833957723, 0.02586349085039476118},
          {0.7357616505184272156797, 0.0248871571436944092},
          {0.7601465861386074082953, 0.023877226934509871072},
          {0.7835053595216096755552, 0.022835063578455358142},
          {0.8058064374067442343437, 0.0217620739433894294602},
          {0.8270197143681684289901, 0.0206597065097609910104},
          {0.8471165534540367750982, 0.0195294494145314599174},
          {0.8660698248423931919025, 0.0183728284411468817241},
          {0.8838539424610707934781, 0.0171914049579724185067},
          {0.9004448985211955802309, 0.015986773807408025795},
          {0.9158202959159057639623, 0.014760561147430673161},
          {0.929959378437169090875, 0.0135144222462052170481},
          {0.9428430587631038388332, 0.0122500392277879492972},
          {0.9544539441634686170132, 0.0109691187603985671031},
          {0.9647763598551143885716, 0.0096733896610421586479},
          {0.9737963698914731709686, 0.0083646003373619430976},
          {0.9815017953198431232321, 0.007044515807472438326},
          {0.987882228803990546224, 0.0057149133109336878144},
          {0.9929290425808816747937, 0.004377571806013967498},
          {0.9966353729485965272143, 0.003034223634601489066},
          {0.9989959293087189026141, 0.001686071056896356632},
          {1, 2.735978112175102599179E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune