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
std::vector<std::vector<double>> GaussLobattoData<82>::get()
{
  return {{-1, 3.011141222523336344475E-4},
          {-0.9988949663946966988156, 0.001855580315744599797},
          {-0.996297194250043799866, 0.003339004913675408061},
          {-0.9922188249970555509312, 0.0048166891340730129189},
          {-0.9866662339977507410703, 0.0062871102732310841534},
          {-0.979647726580751824186, 0.0077481640834258757996},
          {-0.9711737460709832938014, 0.0091976974272905249466},
          {-0.9612568881669973349259, 0.0106335620326209829617},
          {-0.94991188893384270462, 0.01205362660337469846},
          {-0.9371556049113703413857, 0.0134557821945309719753},
          {-0.923006988792194317329, 0.0148379460277097880728},
          {-0.9074870615617567428171, 0.016198064832495504267},
          {-0.8906188814039109319404, 0.017534117997660981333},
          {-0.8724275095111236075653, 0.0188441206182599580775},
          {-0.852939972886976375388, 0.020126126466356761612},
          {-0.8321852242122526592572, 0.0213782308937135864126},
          {-0.8101940988417269965351, 0.0225985736675756687777},
          {-0.7869992689992690274815, 0.0237853417378422470913},
          {-0.7626351952412630680117, 0.0249367719327278913851},
          {-0.7371380752615205343041, 0.0260511535795304784864},
          {-0.7105457901143524979246, 0.027126831046943608378},
          {-0.6828978479360558628383, 0.028162206205320058757},
          {-0.65423532524864274764, 0.02915574080133635931},
          {-0.624600805933153053696, 0.030105958743592630314},
          {-0.5940383179633036648147, 0.03101144829578969271913},
          {-0.5625932679935252292089, 0.0318708641742484914301},
          {-0.5303123738986063958688, 0.0326829295466704419589},
          {-0.4972435953651966078884, 0.0334464379291787962112},
          {-0.4634360626383050203402, 0.0341602549788289658337},
          {-0.4289400035286689835948, 0.0348233201789289485126},
          {-0.3938066687894458096094, 0.0354346484146688930612},
          {-0.3580882559731017990023, 0.035993331436720906984},
          {-0.3218378318816287827461, 0.0364985392106360488321},
          {-0.2851092537253071316392, 0.03694952115003470743219},
          {-0.247957089107152048645, 0.03734560723175893418004},
          {-0.2104365349519240295831, 0.0376862089913304649078},
          {-0.172603335500151994801, 0.037970820397235856656},
          {-0.134513699489006381243, 0.0381990186027400898088},
          {-0.0962242166430673443827, 0.0383704645741118679338},
          {-0.057791773599058335377, 0.0384849035943274076926},
          {-0.0192734693894561516166, 0.038542165641504470864},
          {0.0192734693894561516166, 0.03854216564150447086427},
          {0.0577917735990583353773, 0.0384849035943274076926},
          {0.096224216643067344383, 0.0383704645741118679338},
          {0.134513699489006381243, 0.0381990186027400898088},
          {0.172603335500151994801, 0.0379708203972358566558},
          {0.210436534951924029583, 0.0376862089913304649078},
          {0.247957089107152048645, 0.03734560723175893418},
          {0.2851092537253071316392, 0.0369495211500347074322},
          {0.3218378318816287827461, 0.0364985392106360488321},
          {0.358088255973101799002, 0.035993331436720906984},
          {0.3938066687894458096094, 0.0354346484146688930612},
          {0.4289400035286689835948, 0.0348233201789289485126},
          {0.46343606263830502034, 0.034160254978828965834},
          {0.4972435953651966078884, 0.0334464379291787962112},
          {0.5303123738986063958688, 0.032682929546670441959},
          {0.562593267993525229209, 0.03187086417424849143},
          {0.5940383179633036648147, 0.0310114482957896927191},
          {0.6246008059331530536957, 0.030105958743592630314},
          {0.6542353252486427476402, 0.0291557408013363593096},
          {0.6828978479360558628383, 0.028162206205320058757},
          {0.7105457901143524979246, 0.027126831046943608378},
          {0.7371380752615205343041, 0.026051153579530478486},
          {0.7626351952412630680117, 0.024936771932727891385},
          {0.7869992689992690274815, 0.0237853417378422470913},
          {0.8101940988417269965351, 0.0225985736675756687777},
          {0.8321852242122526592572, 0.021378230893713586413},
          {0.852939972886976375388, 0.020126126466356761612},
          {0.8724275095111236075653, 0.01884412061825995807754},
          {0.8906188814039109319404, 0.0175341179976609813328},
          {0.9074870615617567428171, 0.016198064832495504267},
          {0.923006988792194317329, 0.014837946027709788073},
          {0.9371556049113703413857, 0.0134557821945309719753},
          {0.9499118889338427046196, 0.01205362660337469846},
          {0.9612568881669973349259, 0.010633562032620982962},
          {0.9711737460709832938014, 0.00919769742729052494662},
          {0.979647726580751824186, 0.0077481640834258757996},
          {0.9866662339977507410703, 0.0062871102732310841534},
          {0.9922188249970555509312, 0.004816689134073012919},
          {0.9962971942500437998657, 0.003339004913675408061},
          {0.9988949663946966988156, 0.001855580315744599797},
          {1, 3.011141222523336344475E-4}};
}


} // namespace internal
} // namespace Data
} // namespace XT
} // namespace Dune
