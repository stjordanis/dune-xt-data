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
std::vector<std::vector<double>> GaussLobattoData<37>::get()
{
  return {{-1, 0.001501501501501501501502},
          {-0.9944938094532618479785, 0.0092392432428419296555},
          {-0.9815814149869770840465, 0.016568023462080861143},
          {-0.9613997340068480861054, 0.0237702445815514586944},
          {-0.9340997654697049941293, 0.0307959434086980844112},
          {-0.899883908976607050629, 0.0375935062039168280197},
          {-0.859005567046514524498, 0.044112694216875663982},
          {-0.8117674185836550836616, 0.0503052683150415569499},
          {-0.7585192115735683755891, 0.0561253907738756298871},
          {-0.6996551837323294321503, 0.0615299757164856086336},
          {-0.6356111473464340479732, 0.0664790115346973363994},
          {-0.5668612641786996769424, 0.0709358583644536437571},
          {-0.4939145356334208327143, 0.0748675198627182373963},
          {-0.4173110346338307713513, 0.0782448877288513821639},
          {-0.337617907295764718093, 0.0810429573225037171132},
          {-0.2554251740807967521403, 0.0832410128457917439415},
          {-0.1713413615537253984006, 0.084822780746207937208},
          {-0.085988997104455259539, 0.0857765502170993864},
          {0, 0.0860952599096149854858},
          {0.0859889971044552595389, 0.0857765502170993864},
          {0.1713413615537253984006, 0.084822780746207937208},
          {0.2554251740807967521403, 0.0832410128457917439415},
          {0.337617907295764718093, 0.0810429573225037171132},
          {0.4173110346338307713513, 0.078244887728851382164},
          {0.4939145356334208327143, 0.074867519862718237396},
          {0.5668612641786996769424, 0.0709358583644536437571},
          {0.6356111473464340479732, 0.0664790115346973363994},
          {0.6996551837323294321503, 0.061529975716485608634},
          {0.7585192115735683755891, 0.056125390773875629887},
          {0.8117674185836550836616, 0.0503052683150415569499},
          {0.8590055670465145244985, 0.044112694216875663982},
          {0.899883908976607050629, 0.0375935062039168280197},
          {0.9340997654697049941293, 0.0307959434086980844112},
          {0.9613997340068480861054, 0.0237702445815514586944},
          {0.9815814149869770840465, 0.0165680234620808611434},
          {0.9944938094532618479785, 0.0092392432428419296555},
          {1, 0.001501501501501501501502}};
}


} // namespace internal
} // Data
} // namespace XT
} // namespace Dune