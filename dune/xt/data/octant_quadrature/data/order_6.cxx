// This file is part of the dune-gdt project:
//   https://github.com/dune-community/dune-gdt
// Copyright 2010-2017, dune-gdt developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner  (2017)

#include "../octant_quadrature_data.hh"

namespace Dune {
namespace GDT {
namespace internal {


template<>
std::vector<std::vector<std::vector<double>>> OctantQuadratureData<6>::get()
{
    return
{{{0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225},
{0.041562,0.041562,0.041562,0.041562,0.041562,0.20854,0.20854,0.20854,0.20854,0.20854,0.47216,0.47216,0.47216,0.47216,0.47216,0.7854,0.7854,0.7854,0.7854,0.7854,1.0986,1.0986,1.0986,1.0986,1.0986,1.3623,1.3623,1.3623,1.3623,1.3623,1.5292,1.5292,1.5292,1.5292,1.5292},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225},
{1.6124,1.6124,1.6124,1.6124,1.6124,1.7793,1.7793,1.7793,1.7793,1.7793,2.043,2.043,2.043,2.043,2.043,2.3562,2.3562,2.3562,2.3562,2.3562,2.6694,2.6694,2.6694,2.6694,2.6694,2.9331,2.9331,2.9331,2.9331,2.9331,3.1,3.1,3.1,3.1,3.1},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225},
{3.1832,3.1832,3.1832,3.1832,3.1832,3.3501,3.3501,3.3501,3.3501,3.3501,3.6138,3.6138,3.6138,3.6138,3.6138,3.927,3.927,3.927,3.927,3.927,4.2402,4.2402,4.2402,4.2402,4.2402,4.5038,4.5038,4.5038,4.5038,4.5038,4.6708,4.6708,4.6708,4.6708,4.6708},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225,0.99877,0.96951,0.84773,0.58971,0.21225},
{4.754,4.754,4.754,4.754,4.754,4.9209,4.9209,4.9209,4.9209,4.9209,5.1846,5.1846,5.1846,5.1846,5.1846,5.4978,5.4978,5.4978,5.4978,5.4978,5.811,5.811,5.811,5.811,5.811,6.0746,6.0746,6.0746,6.0746,6.0746,6.2416,6.2416,6.2416,6.2416,6.2416},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225},
{0.041562,0.041562,0.041562,0.041562,0.041562,0.20854,0.20854,0.20854,0.20854,0.20854,0.47216,0.47216,0.47216,0.47216,0.47216,0.7854,0.7854,0.7854,0.7854,0.7854,1.0986,1.0986,1.0986,1.0986,1.0986,1.3623,1.3623,1.3623,1.3623,1.3623,1.5292,1.5292,1.5292,1.5292,1.5292},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225},
{1.6124,1.6124,1.6124,1.6124,1.6124,1.7793,1.7793,1.7793,1.7793,1.7793,2.043,2.043,2.043,2.043,2.043,2.3562,2.3562,2.3562,2.3562,2.3562,2.6694,2.6694,2.6694,2.6694,2.6694,2.9331,2.9331,2.9331,2.9331,2.9331,3.1,3.1,3.1,3.1,3.1},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225},
{3.1832,3.1832,3.1832,3.1832,3.1832,3.3501,3.3501,3.3501,3.3501,3.3501,3.6138,3.6138,3.6138,3.6138,3.6138,3.927,3.927,3.927,3.927,3.927,4.2402,4.2402,4.2402,4.2402,4.2402,4.5038,4.5038,4.5038,4.5038,4.5038,4.6708,4.6708,4.6708,4.6708,4.6708},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}},
{{-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225,-0.99877,-0.96951,-0.84773,-0.58971,-0.21225},
{4.754,4.754,4.754,4.754,4.754,4.9209,4.9209,4.9209,4.9209,4.9209,5.1846,5.1846,5.1846,5.1846,5.1846,5.4978,5.4978,5.4978,5.4978,5.4978,5.811,5.811,5.811,5.811,5.811,6.0746,6.0746,6.0746,6.0746,6.0746,6.2416,6.2416,6.2416,6.2416,6.2416},
{0.00065823,0.0067841,0.019726,0.034358,0.043877,0.0013899,0.014326,0.041655,0.072551,0.092652,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0020079,0.020694,0.060174,0.10481,0.13384,0.0018526,0.019094,0.05552,0.096701,0.12349,0.0013899,0.014326,0.041655,0.072551,0.092652,0.00065823,0.0067841,0.019726,0.034358,0.043877}}}
            ;
}


} // namespace internal
} // namespace GDT
} // namespace Dune
