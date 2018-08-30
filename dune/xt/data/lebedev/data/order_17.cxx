// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../lebedev_data.hh"

namespace Dune {
namespace GDT {
namespace internal {


template <>
void LebedevData<17>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.0481074658513946},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.0481074658513946},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.0481074658513946},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.0481074658513946},
               {{-0, -0, 1}, 0.0481074658513946},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.0481074658513946},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.123071735281676},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.123071735281676},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.123071735281676},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.123071735281676},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.123071735281676},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.123071735281676},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.123071735281676},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.123071735281676},
               {{-0.185115635344736, -0.185115635344736, 0.965124035086594}, 0.103191734088329},
               {{-0.185115635344736, -0.185115635344736, -0.965124035086594}, 0.103191734088329},
               {{-0.185115635344736, 0.185115635344736, 0.965124035086594}, 0.103191734088329},
               {{-0.185115635344736, 0.185115635344736, -0.965124035086594}, 0.103191734088329},
               {{0.185115635344736, -0.185115635344736, 0.965124035086594}, 0.103191734088329},
               {{0.185115635344736, -0.185115635344736, -0.965124035086594}, 0.103191734088329},
               {{0.185115635344736, 0.185115635344736, 0.965124035086594}, 0.103191734088329},
               {{0.185115635344736, 0.185115635344736, -0.965124035086594}, 0.103191734088329},
               {{-0.185115635344737, -0.965124035086594, 0.185115635344736}, 0.103191734088329},
               {{-0.185115635344736, 0.965124035086594, 0.185115635344736}, 0.103191734088329},
               {{-0.185115635344737, -0.965124035086594, -0.185115635344736}, 0.103191734088329},
               {{-0.185115635344736, 0.965124035086594, -0.185115635344736}, 0.103191734088329},
               {{0.185115635344736, -0.965124035086594, 0.185115635344736}, 0.103191734088329},
               {{0.185115635344736, 0.965124035086594, 0.185115635344736}, 0.103191734088329},
               {{0.185115635344736, -0.965124035086594, -0.185115635344736}, 0.103191734088329},
               {{0.185115635344736, 0.965124035086594, -0.185115635344736}, 0.103191734088329},
               {{-0.965124035086594, -0.185115635344736, 0.185115635344736}, 0.103191734088329},
               {{0.965124035086594, -0.185115635344737, 0.185115635344736}, 0.103191734088329},
               {{-0.965124035086594, -0.185115635344736, -0.185115635344736}, 0.103191734088329},
               {{0.965124035086594, -0.185115635344737, -0.185115635344736}, 0.103191734088329},
               {{-0.965124035086594, 0.185115635344736, 0.185115635344736}, 0.103191734088329},
               {{0.965124035086594, 0.185115635344737, 0.185115635344736}, 0.103191734088329},
               {{-0.965124035086594, 0.185115635344736, -0.185115635344736}, 0.103191734088329},
               {{0.965124035086594, 0.185115635344737, -0.185115635344736}, 0.103191734088329},
               {{-0.690421048382292, -0.690421048382292, 0.215957291845848}, 0.124945096872512},
               {{-0.690421048382292, -0.690421048382292, -0.215957291845849}, 0.124945096872512},
               {{-0.690421048382292, 0.690421048382292, 0.215957291845848}, 0.124945096872512},
               {{-0.690421048382292, 0.690421048382292, -0.215957291845849}, 0.124945096872512},
               {{0.690421048382292, -0.690421048382292, 0.215957291845848}, 0.124945096872512},
               {{0.690421048382292, -0.690421048382292, -0.215957291845849}, 0.124945096872512},
               {{0.690421048382292, 0.690421048382292, 0.215957291845848}, 0.124945096872512},
               {{0.690421048382292, 0.690421048382292, -0.215957291845849}, 0.124945096872512},
               {{-0.690421048382292, -0.215957291845849, 0.690421048382292}, 0.124945096872512},
               {{-0.690421048382292, 0.215957291845849, 0.690421048382292}, 0.124945096872512},
               {{-0.690421048382292, -0.215957291845849, -0.690421048382292}, 0.124945096872512},
               {{-0.690421048382292, 0.215957291845849, -0.690421048382292}, 0.124945096872512},
               {{0.690421048382292, -0.215957291845849, 0.690421048382292}, 0.124945096872512},
               {{0.690421048382292, 0.215957291845849, 0.690421048382292}, 0.124945096872512},
               {{0.690421048382292, -0.215957291845849, -0.690421048382292}, 0.124945096872512},
               {{0.690421048382292, 0.215957291845849, -0.690421048382292}, 0.124945096872512},
               {{-0.215957291845849, -0.690421048382292, 0.690421048382292}, 0.124945096872512},
               {{0.215957291845849, -0.690421048382292, 0.690421048382292}, 0.124945096872512},
               {{-0.215957291845849, -0.690421048382292, -0.690421048382292}, 0.124945096872512},
               {{0.215957291845849, -0.690421048382292, -0.690421048382292}, 0.124945096872512},
               {{-0.215957291845848, 0.690421048382292, 0.690421048382292}, 0.124945096872512},
               {{0.215957291845849, 0.690421048382292, 0.690421048382292}, 0.124945096872512},
               {{-0.215957291845848, 0.690421048382292, -0.690421048382292}, 0.124945096872512},
               {{0.215957291845849, 0.690421048382292, -0.690421048382292}, 0.124945096872512},
               {{-0.395689473055942, -0.395689473055942, 0.828769981252592}, 0.120580249028528},
               {{-0.395689473055942, -0.395689473055942, -0.828769981252592}, 0.120580249028528},
               {{-0.395689473055942, 0.395689473055942, 0.828769981252592}, 0.120580249028528},
               {{-0.395689473055942, 0.395689473055942, -0.828769981252592}, 0.120580249028528},
               {{0.395689473055942, -0.395689473055942, 0.828769981252592}, 0.120580249028528},
               {{0.395689473055942, -0.395689473055942, -0.828769981252592}, 0.120580249028528},
               {{0.395689473055942, 0.395689473055942, 0.828769981252592}, 0.120580249028528},
               {{0.395689473055942, 0.395689473055942, -0.828769981252592}, 0.120580249028528},
               {{-0.395689473055942, -0.828769981252592, 0.395689473055942}, 0.120580249028528},
               {{-0.395689473055941, 0.828769981252593, 0.395689473055942}, 0.120580249028528},
               {{-0.395689473055942, -0.828769981252592, -0.395689473055942}, 0.120580249028528},
               {{-0.395689473055941, 0.828769981252593, -0.395689473055942}, 0.120580249028528},
               {{0.395689473055942, -0.828769981252592, 0.395689473055942}, 0.120580249028528},
               {{0.395689473055942, 0.828769981252592, 0.395689473055942}, 0.120580249028528},
               {{0.395689473055942, -0.828769981252592, -0.395689473055942}, 0.120580249028528},
               {{0.395689473055942, 0.828769981252592, -0.395689473055942}, 0.120580249028528},
               {{-0.828769981252592, -0.395689473055942, 0.395689473055942}, 0.120580249028528},
               {{0.828769981252592, -0.395689473055942, 0.395689473055942}, 0.120580249028528},
               {{-0.828769981252592, -0.395689473055942, -0.395689473055942}, 0.120580249028528},
               {{0.828769981252592, -0.395689473055942, -0.395689473055942}, 0.120580249028528},
               {{-0.828769981252592, 0.395689473055942, 0.395689473055942}, 0.120580249028528},
               {{0.828769981252592, 0.395689473055942, 0.395689473055942}, 0.120580249028528},
               {{-0.828769981252592, 0.395689473055942, -0.395689473055942}, 0.120580249028528},
               {{0.828769981252592, 0.395689473055942, -0.395689473055942}, 0.120580249028528},
               {{-0.478369028812151, -0.878158910604066, 6.12323399573677e-17}, 0.121830917385521},
               {{-0.47836902881215, 0.878158910604066, 6.12323399573677e-17}, 0.121830917385521},
               {{0.47836902881215, -0.878158910604066, 6.12323399573677e-17}, 0.121830917385521},
               {{0.47836902881215, 0.878158910604066, 6.12323399573677e-17}, 0.121830917385521},
               {{-0.878158910604066, -0.47836902881215, 6.12323399573677e-17}, 0.121830917385521},
               {{-0.878158910604066, 0.47836902881215, 6.12323399573677e-17}, 0.121830917385521},
               {{0.878158910604066, -0.478369028812151, 6.12323399573677e-17}, 0.121830917385521},
               {{0.878158910604066, 0.47836902881215, 6.12323399573677e-17}, 0.121830917385521},
               {{-0.47836902881215, 5.85833099946028e-17, 0.878158910604066}, 0.121830917385521},
               {{-0.47836902881215, 5.85833099946028e-17, -0.878158910604066}, 0.121830917385521},
               {{0.47836902881215, -1.17166619989206e-16, 0.878158910604066}, 0.121830917385521},
               {{0.47836902881215, -1.17166619989206e-16, -0.878158910604066}, 0.121830917385521},
               {{-0.878158910604066, 1.075434499014e-16, 0.47836902881215}, 0.121830917385521},
               {{-0.878158910604066, 1.075434499014e-16, -0.47836902881215}, 0.121830917385521},
               {{0.878158910604066, -2.15086899802799e-16, 0.47836902881215}, 0.121830917385521},
               {{0.878158910604066, -2.15086899802799e-16, -0.47836902881215}, 0.121830917385521},
               {{-8.78749649919041e-17, -0.47836902881215, 0.878158910604066}, 0.121830917385521},
               {{-8.78749649919042e-17, -0.47836902881215, -0.878158910604066}, 0.121830917385521},
               {{2.92916549973014e-17, 0.47836902881215, 0.878158910604066}, 0.121830917385521},
               {{2.92916549973014e-17, 0.47836902881215, -0.878158910604066}, 0.121830917385521},
               {{-1.61315174852099e-16, -0.878158910604066, 0.47836902881215}, 0.121830917385521},
               {{-1.61315174852099e-16, -0.878158910604066, -0.47836902881215}, 0.121830917385521},
               {{5.37717249506998e-17, 0.878158910604066, 0.47836902881215}, 0.121830917385521},
               {{5.37717249506998e-17, 0.878158910604066, -0.47836902881215}, 0.121830917385521}};
}


} // namespace internal
} // namespace GDT
} // namespace Dune
