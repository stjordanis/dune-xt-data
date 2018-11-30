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
std::vector<std::vector<double>> GaussLobattoData<34>::get()
{
  return {{-1, 0.001782531194295900178253},
          {-0.9934643625875162022546, 0.0109647408183065514015},
          {-0.9781466888799379489452, 0.019646278160713431288},
          {-0.9542306489128075284072, 0.02815053686224350340075},
          {-0.9219282956774489227428, 0.0364067709507825523508},
          {-0.8815238365122732643985, 0.04434290206024434230027},
          {-0.8333724428031426149123, 0.051889291830927120776},
          {-0.777897306431867410882, 0.0589796540267452266954},
          {-0.7155859607202190059973, 0.0655516901082651204304},
          {-0.6469860079360146243772, 0.0715476498770728220356},
          {-0.5727003112749228447909, 0.0769148430635909821051},
          {-0.4933816986732709574365, 0.0816061038504223831621},
          {-0.4097272265595927448574, 0.0855802059719775865901},
          {-0.3224720545114889935775, 0.0888022252835840321182},
          {-0.2323829848691168430634, 0.0912438468069144870224},
          {-0.1402517241761938583713, 0.0928836136296106461437},
          {-0.0468879257129706800868, 0.0937071155043033120016},
          {0.04688792571297068008684, 0.0937071155043033120016},
          {0.1402517241761938583713, 0.0928836136296106461437},
          {0.232382984869116843063, 0.0912438468069144870224},
          {0.3224720545114889935775, 0.0888022252835840321182},
          {0.4097272265595927448574, 0.0855802059719775865901},
          {0.4933816986732709574365, 0.081606103850422383162},
          {0.5727003112749228447909, 0.076914843063590982105},
          {0.6469860079360146243772, 0.071547649877072822036},
          {0.7155859607202190059973, 0.0655516901082651204304},
          {0.777897306431867410882, 0.058979654026745226695},
          {0.8333724428031426149123, 0.051889291830927120776},
          {0.8815238365122732643985, 0.0443429020602443423003},
          {0.9219282956774489227428, 0.036406770950782552351},
          {0.9542306489128075284072, 0.0281505368622435034008},
          {0.9781466888799379489452, 0.01964627816071343128795},
          {0.9934643625875162022546, 0.0109647408183065514015},
          {1, 0.001782531194295900178253}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune
