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
std::vector<std::vector<double>> GaussLobattoData<79>::get()
{
  return {{-1, 3.245699448231093800714E-4},
          {-0.9988089049183996006049, 0.0020000666556938119509},
          {-0.9960089495767781475599, 0.0035987562764348132021},
          {-0.9916135449985239399773, 0.005190842429146995581},
          {-0.985630070805993305209, 0.0067745006436565190023},
          {-0.9780681692020276504285, 0.00834728145462846096452},
          {-0.9689399670718203010929, 0.0099066851131419571907},
          {-0.9582600887864848134087, 0.011450220086306295908},
          {-0.9460456400129010270795, 0.0129754166620373997743},
          {-0.932316182478450533123, 0.0144798332847605458854},
          {-0.9170937034227591404364, 0.015961061200966027767},
          {-0.9004025807084791719764, 0.017416728582840545158},
          {-0.8822695439294558207268, 0.0188445044350876384663},
          {-0.8627236316787176285422, 0.02024210237640473064},
          {-0.8417961450844888622413, 0.021607284324378811583},
          {-0.8195205977059061952216, 0.022937864091628290521},
          {-0.7959326618767531592239, 0.024231710893311147029},
          {-0.7710701115871520020839, 0.0254867527630790232547},
          {-0.7449727619967840682282, 0.02670097987331781736825},
          {-0.7176824056776529958035, 0.02787244775502757347},
          {-0.6892427456891466256879, 0.0289992804125427618363},
          {-0.6596993255929571149411, 0.0300796733283031193137},
          {-0.629099456520167753981, 0.031111896352976735452},
          {-0.5974921414074476040061, 0.0320942964763741775293},
          {-0.5649279965237758204852, 0.0330253004747569703434},
          {-0.5314591704134241850964, 0.0339034174303262912803},
          {-0.4971392603850437053345, 0.0347272411188732111485},
          {-0.4620232266806178203445, 0.035495452261777285813},
          {-0.4261673044617517286348, 0.0362068206387539980505},
          {-0.389628913754257032986, 0.0368602070579722872881},
          {-0.3524665674952566776724, 0.0374545651803903447126},
          {-0.3147397778300711710192, 0.0379889431953903363998},
          {-0.2765089608089480790435, 0.0384624853450301963822},
          {-0.237835339636257998913, 0.0388744332944726132828},
          {-0.1987808466270974027903, 0.0392241273463973602336},
          {-0.1594080240283080597952, 0.039511007497452748895},
          {-0.119779923862740806559, 0.0397346143350547950183},
          {-0.0799600069571552822529, 0.0398945897730982405812},
          {-0.0400120413154543323989, 0.0399906776254014634655},
          {0, 0.040022724015967097757},
          {0.0400120413154543323989, 0.0399906776254014634655},
          {0.0799600069571552822529, 0.0398945897730982405812},
          {0.119779923862740806559, 0.0397346143350547950183},
          {0.159408024028308059795, 0.039511007497452748895},
          {0.1987808466270974027903, 0.0392241273463973602336},
          {0.2378353396362579989126, 0.0388744332944726132828},
          {0.2765089608089480790435, 0.0384624853450301963822},
          {0.314739777830071171019, 0.0379889431953903363998},
          {0.3524665674952566776724, 0.037454565180390344713},
          {0.3896289137542570329858, 0.036860207057972287288},
          {0.4261673044617517286348, 0.03620682063875399805},
          {0.462023226680617820344, 0.035495452261777285813},
          {0.497139260385043705334, 0.0347272411188732111485},
          {0.531459170413424185096, 0.03390341743032629128},
          {0.5649279965237758204852, 0.033025300474756970343},
          {0.5974921414074476040061, 0.032094296476374177529},
          {0.629099456520167753981, 0.031111896352976735452},
          {0.6596993255929571149411, 0.0300796733283031193137},
          {0.6892427456891466256879, 0.028999280412542761836},
          {0.7176824056776529958035, 0.02787244775502757346977},
          {0.7449727619967840682282, 0.026700979873317817368},
          {0.7710701115871520020839, 0.0254867527630790232547},
          {0.7959326618767531592239, 0.024231710893311147029},
          {0.8195205977059061952216, 0.0229378640916282905211},
          {0.8417961450844888622413, 0.0216072843243788115828},
          {0.8627236316787176285422, 0.0202421023764047306395},
          {0.8822695439294558207268, 0.018844504435087638466},
          {0.9004025807084791719764, 0.017416728582840545158},
          {0.9170937034227591404364, 0.015961061200966027767},
          {0.932316182478450533123, 0.014479833284760545885},
          {0.9460456400129010270795, 0.0129754166620373997743},
          {0.9582600887864848134087, 0.011450220086306295908},
          {0.9689399670718203010929, 0.009906685113141957191},
          {0.9780681692020276504285, 0.00834728145462846096452},
          {0.985630070805993305209, 0.006774500643656519002},
          {0.9916135449985239399773, 0.0051908424291469955809},
          {0.9960089495767781475599, 0.003598756276434813202},
          {0.9988089049183996006049, 0.002000066655693811951},
          {1, 3.245699448231093800714E-4}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
