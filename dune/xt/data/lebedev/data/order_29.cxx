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
void LebedevData<29>::get(std::vector<std::pair<std::array<double, 3>, double>>& quad_rule)
{
  quad_rule = {{{-1, 1.22464679914735e-16, 6.12323399573677e-17}, 0.0107391093975581},
               {{1, -2.44929359829471e-16, 6.12323399573677e-17}, 0.0107391093975581},
               {{-1.83697019872103e-16, -1, 6.12323399573677e-17}, 0.0107391093975581},
               {{6.12323399573677e-17, 1, 6.12323399573677e-17}, 0.0107391093975581},
               {{-0, -0, 1}, 0.0107391093975581},
               {{-2.24963967399279e-32, -1.22464679914735e-16, -1}, 0.0107391093975581},
               {{-0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0452278668209241},
               {{-0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0452278668209241},
               {{-0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0452278668209241},
               {{-0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0452278668209241},
               {{0.577350269189626, -0.577350269189626, 0.577350269189626}, 0.0452278668209241},
               {{0.577350269189626, -0.577350269189626, -0.577350269189626}, 0.0452278668209241},
               {{0.577350269189626, 0.577350269189626, 0.577350269189626}, 0.0452278668209241},
               {{0.577350269189626, 0.577350269189626, -0.577350269189626}, 0.0452278668209241},
               {{-0.351564034557011, -0.351564034557011, 0.867643624544083}, 0.0433513198809553},
               {{-0.35156403455701, -0.35156403455701, -0.867643624544084}, 0.0433513198809553},
               {{-0.351564034557011, 0.351564034557011, 0.867643624544083}, 0.0433513198809553},
               {{-0.35156403455701, 0.35156403455701, -0.867643624544084}, 0.0433513198809553},
               {{0.35156403455701, -0.351564034557011, 0.867643624544083}, 0.0433513198809553},
               {{0.35156403455701, -0.35156403455701, -0.867643624544084}, 0.0433513198809553},
               {{0.351564034557011, 0.351564034557011, 0.867643624544083}, 0.0433513198809553},
               {{0.35156403455701, 0.35156403455701, -0.867643624544084}, 0.0433513198809553},
               {{-0.351564034557011, -0.867643624544083, 0.351564034557011}, 0.0433513198809553},
               {{-0.35156403455701, 0.867643624544083, 0.351564034557011}, 0.0433513198809553},
               {{-0.351564034557011, -0.867643624544083, -0.35156403455701}, 0.0433513198809553},
               {{-0.35156403455701, 0.867643624544084, -0.35156403455701}, 0.0433513198809553},
               {{0.35156403455701, -0.867643624544083, 0.351564034557011}, 0.0433513198809553},
               {{0.35156403455701, 0.867643624544083, 0.351564034557011}, 0.0433513198809553},
               {{0.351564034557011, -0.867643624544084, -0.35156403455701}, 0.0433513198809553},
               {{0.351564034557011, 0.867643624544083, -0.35156403455701}, 0.0433513198809553},
               {{-0.867643624544083, -0.351564034557011, 0.351564034557011}, 0.0433513198809553},
               {{0.867643624544083, -0.351564034557011, 0.351564034557011}, 0.0433513198809553},
               {{-0.867643624544083, -0.351564034557011, -0.35156403455701}, 0.0433513198809553},
               {{0.867643624544083, -0.351564034557011, -0.35156403455701}, 0.0433513198809553},
               {{-0.867643624544083, 0.351564034557011, 0.351564034557011}, 0.0433513198809553},
               {{0.867643624544083, 0.351564034557011, 0.351564034557011}, 0.0433513198809553},
               {{-0.867643624544083, 0.351564034557011, -0.35156403455701}, 0.0433513198809553},
               {{0.867643624544083, 0.351564034557011, -0.35156403455701}, 0.0433513198809553},
               {{-0.656632941021961, -0.656632941021961, 0.371034178384821}, 0.0452995368084621},
               {{-0.656632941021961, -0.656632941021961, -0.371034178384821}, 0.0452995368084621},
               {{-0.656632941021961, 0.656632941021961, 0.371034178384821}, 0.0452995368084621},
               {{-0.656632941021961, 0.656632941021961, -0.371034178384821}, 0.0452995368084621},
               {{0.656632941021961, -0.656632941021961, 0.371034178384821}, 0.0452995368084621},
               {{0.656632941021961, -0.656632941021961, -0.371034178384821}, 0.0452995368084621},
               {{0.656632941021961, 0.656632941021961, 0.371034178384821}, 0.0452995368084621},
               {{0.656632941021961, 0.656632941021961, -0.371034178384821}, 0.0452995368084621},
               {{-0.656632941021961, -0.371034178384821, 0.656632941021961}, 0.0452995368084621},
               {{-0.656632941021961, 0.371034178384821, 0.656632941021961}, 0.0452995368084621},
               {{-0.656632941021961, -0.371034178384821, -0.656632941021961}, 0.0452995368084621},
               {{-0.656632941021961, 0.371034178384821, -0.656632941021961}, 0.0452995368084621},
               {{0.656632941021961, -0.371034178384821, 0.656632941021961}, 0.0452995368084621},
               {{0.656632941021962, 0.371034178384821, 0.656632941021961}, 0.0452995368084621},
               {{0.656632941021961, -0.371034178384821, -0.656632941021961}, 0.0452995368084621},
               {{0.656632941021961, 0.371034178384821, -0.656632941021961}, 0.0452995368084621},
               {{-0.371034178384821, -0.656632941021961, 0.656632941021961}, 0.0452995368084621},
               {{0.371034178384821, -0.656632941021961, 0.656632941021961}, 0.0452995368084621},
               {{-0.371034178384821, -0.656632941021961, -0.656632941021961}, 0.0452995368084621},
               {{0.371034178384821, -0.656632941021961, -0.656632941021961}, 0.0452995368084621},
               {{-0.371034178384821, 0.656632941021961, 0.656632941021961}, 0.0452995368084621},
               {{0.371034178384821, 0.656632941021961, 0.656632941021961}, 0.0452995368084621},
               {{-0.371034178384821, 0.656632941021961, -0.656632941021961}, 0.0452995368084621},
               {{0.371034178384821, 0.656632941021961, -0.656632941021961}, 0.0452995368084621},
               {{-0.472905413258101, -0.4729054132581, 0.743452042987556}, 0.0449465105168341},
               {{-0.472905413258101, -0.4729054132581, -0.743452042987556}, 0.0449465105168341},
               {{-0.4729054132581, 0.4729054132581, 0.743452042987556}, 0.0449465105168341},
               {{-0.4729054132581, 0.4729054132581, -0.743452042987556}, 0.0449465105168341},
               {{0.4729054132581, -0.472905413258101, 0.743452042987556}, 0.0449465105168341},
               {{0.4729054132581, -0.472905413258101, -0.743452042987556}, 0.0449465105168341},
               {{0.4729054132581, 0.4729054132581, 0.743452042987556}, 0.0449465105168341},
               {{0.4729054132581, 0.4729054132581, -0.743452042987556}, 0.0449465105168341},
               {{-0.4729054132581, -0.743452042987556, 0.4729054132581}, 0.0449465105168341},
               {{-0.4729054132581, 0.743452042987556, 0.4729054132581}, 0.0449465105168341},
               {{-0.4729054132581, -0.743452042987556, -0.472905413258101}, 0.0449465105168341},
               {{-0.4729054132581, 0.743452042987556, -0.472905413258101}, 0.0449465105168341},
               {{0.472905413258101, -0.743452042987556, 0.4729054132581}, 0.0449465105168341},
               {{0.472905413258101, 0.743452042987556, 0.4729054132581}, 0.0449465105168341},
               {{0.472905413258101, -0.743452042987555, -0.472905413258101}, 0.0449465105168341},
               {{0.472905413258101, 0.743452042987556, -0.472905413258101}, 0.0449465105168341},
               {{-0.743452042987556, -0.472905413258101, 0.4729054132581}, 0.0449465105168341},
               {{0.743452042987556, -0.4729054132581, 0.4729054132581}, 0.0449465105168341},
               {{-0.743452042987556, -0.472905413258101, -0.472905413258101}, 0.0449465105168341},
               {{0.743452042987556, -0.4729054132581, -0.472905413258101}, 0.0449465105168341},
               {{-0.743452042987556, 0.472905413258101, 0.4729054132581}, 0.0449465105168341},
               {{0.743452042987556, 0.4729054132581, 0.4729054132581}, 0.0449465105168341},
               {{-0.743452042987556, 0.472905413258101, -0.472905413258101}, 0.0449465105168341},
               {{0.743452042987556, 0.4729054132581, -0.472905413258101}, 0.0449465105168341},
               {{-0.096183085226148, -0.096183085226148, 0.990705621379408}, 0.0295573780869741},
               {{-0.0961830852261479, -0.0961830852261479, -0.990705621379408}, 0.0295573780869741},
               {{-0.096183085226148, 0.096183085226148, 0.990705621379408}, 0.0295573780869741},
               {{-0.0961830852261479, 0.0961830852261479, -0.990705621379408}, 0.0295573780869741},
               {{0.096183085226148, -0.096183085226148, 0.990705621379408}, 0.0295573780869741},
               {{0.0961830852261479, -0.0961830852261479, -0.990705621379408}, 0.0295573780869741},
               {{0.096183085226148, 0.096183085226148, 0.990705621379408}, 0.0295573780869741},
               {{0.0961830852261479, 0.0961830852261479, -0.990705621379408}, 0.0295573780869741},
               {{-0.0961830852261477, -0.990705621379408, 0.0961830852261479}, 0.0295573780869741},
               {{-0.0961830852261477, 0.990705621379408, 0.0961830852261479}, 0.0295573780869741},
               {{-0.0961830852261477, -0.990705621379408, -0.096183085226148}, 0.0295573780869741},
               {{-0.0961830852261477, 0.990705621379408, -0.096183085226148}, 0.0295573780869741},
               {{0.0961830852261483, -0.990705621379408, 0.0961830852261479}, 0.0295573780869741},
               {{0.096183085226148, 0.990705621379408, 0.0961830852261479}, 0.0295573780869741},
               {{0.0961830852261483, -0.990705621379408, -0.096183085226148}, 0.0295573780869741},
               {{0.096183085226148, 0.990705621379408, -0.096183085226148}, 0.0295573780869741},
               {{-0.990705621379408, -0.0961830852261474, 0.0961830852261479}, 0.0295573780869741},
               {{0.990705621379408, -0.0961830852261469, 0.0961830852261479}, 0.0295573780869741},
               {{-0.990705621379408, -0.0961830852261474, -0.096183085226148}, 0.0295573780869741},
               {{0.990705621379408, -0.0961830852261469, -0.096183085226148}, 0.0295573780869741},
               {{-0.990705621379408, 0.0961830852261477, 0.0961830852261479}, 0.0295573780869741},
               {{0.990705621379408, 0.0961830852261471, 0.0961830852261479}, 0.0295573780869741},
               {{-0.990705621379408, 0.0961830852261477, -0.096183085226148}, 0.0295573780869741},
               {{0.990705621379408, 0.0961830852261471, -0.096183085226148}, 0.0295573780869741},
               {{-0.221964523629418, -0.221964523629418, 0.949454317226443}, 0.0390682571589235},
               {{-0.221964523629417, -0.221964523629417, -0.949454317226443}, 0.0390682571589235},
               {{-0.221964523629418, 0.221964523629418, 0.949454317226443}, 0.0390682571589235},
               {{-0.221964523629417, 0.221964523629417, -0.949454317226443}, 0.0390682571589235},
               {{0.221964523629418, -0.221964523629418, 0.949454317226443}, 0.0390682571589235},
               {{0.221964523629417, -0.221964523629417, -0.949454317226443}, 0.0390682571589235},
               {{0.221964523629418, 0.221964523629418, 0.949454317226443}, 0.0390682571589235},
               {{0.221964523629417, 0.221964523629417, -0.949454317226443}, 0.0390682571589235},
               {{-0.221964523629418, -0.949454317226443, 0.221964523629418}, 0.0390682571589235},
               {{-0.221964523629418, 0.949454317226443, 0.221964523629418}, 0.0390682571589235},
               {{-0.221964523629418, -0.949454317226443, -0.221964523629418}, 0.0390682571589235},
               {{-0.221964523629418, 0.949454317226443, -0.221964523629418}, 0.0390682571589235},
               {{0.221964523629418, -0.949454317226443, 0.221964523629418}, 0.0390682571589235},
               {{0.221964523629418, 0.949454317226443, 0.221964523629418}, 0.0390682571589235},
               {{0.221964523629418, -0.949454317226443, -0.221964523629418}, 0.0390682571589235},
               {{0.221964523629418, 0.949454317226443, -0.221964523629418}, 0.0390682571589235},
               {{-0.949454317226443, -0.221964523629418, 0.221964523629418}, 0.0390682571589235},
               {{0.949454317226443, -0.221964523629418, 0.221964523629418}, 0.0390682571589235},
               {{-0.949454317226443, -0.221964523629418, -0.221964523629418}, 0.0390682571589235},
               {{0.949454317226443, -0.221964523629418, -0.221964523629418}, 0.0390682571589235},
               {{-0.949454317226443, 0.221964523629418, 0.221964523629418}, 0.0390682571589235},
               {{0.949454317226443, 0.221964523629418, 0.221964523629418}, 0.0390682571589235},
               {{-0.949454317226443, 0.221964523629418, -0.221964523629418}, 0.0390682571589235},
               {{0.949454317226443, 0.221964523629418, -0.221964523629418}, 0.0390682571589235},
               {{-0.701176641608955, -0.701176641608954, 0.129238672710515}, 0.0458678283786571},
               {{-0.701176641608955, -0.701176641608954, -0.129238672710514}, 0.0458678283786571},
               {{-0.701176641608954, 0.701176641608955, 0.129238672710515}, 0.0458678283786571},
               {{-0.701176641608954, 0.701176641608955, -0.129238672710514}, 0.0458678283786571},
               {{0.701176641608954, -0.701176641608955, 0.129238672710515}, 0.0458678283786571},
               {{0.701176641608954, -0.701176641608955, -0.129238672710514}, 0.0458678283786571},
               {{0.701176641608955, 0.701176641608954, 0.129238672710515}, 0.0458678283786571},
               {{0.701176641608955, 0.701176641608954, -0.129238672710514}, 0.0458678283786571},
               {{-0.701176641608955, -0.129238672710514, 0.701176641608955}, 0.0458678283786571},
               {{-0.701176641608955, 0.129238672710514, 0.701176641608955}, 0.0458678283786571},
               {{-0.701176641608955, -0.129238672710514, -0.701176641608955}, 0.0458678283786571},
               {{-0.701176641608955, 0.129238672710514, -0.701176641608955}, 0.0458678283786571},
               {{0.701176641608954, -0.129238672710515, 0.701176641608955}, 0.0458678283786571},
               {{0.701176641608955, 0.129238672710514, 0.701176641608955}, 0.0458678283786571},
               {{0.701176641608955, -0.129238672710515, -0.701176641608955}, 0.0458678283786571},
               {{0.701176641608955, 0.129238672710514, -0.701176641608955}, 0.0458678283786571},
               {{-0.129238672710515, -0.701176641608954, 0.701176641608955}, 0.0458678283786571},
               {{0.129238672710514, -0.701176641608955, 0.701176641608955}, 0.0458678283786571},
               {{-0.129238672710515, -0.701176641608955, -0.701176641608955}, 0.0458678283786571},
               {{0.129238672710514, -0.701176641608955, -0.701176641608955}, 0.0458678283786571},
               {{-0.129238672710514, 0.701176641608955, 0.701176641608955}, 0.0458678283786571},
               {{0.129238672710514, 0.701176641608955, 0.701176641608955}, 0.0458678283786571},
               {{-0.129238672710514, 0.701176641608955, -0.701176641608955}, 0.0458678283786571},
               {{0.129238672710514, 0.701176641608955, -0.701176641608955}, 0.0458678283786571},
               {{-0.264415288706067, -0.964408914879206, 6.12323399573677e-17}, 0.0374772521070867},
               {{-0.264415288706066, 0.964408914879206, 6.12323399573677e-17}, 0.0374772521070867},
               {{0.264415288706066, -0.964408914879206, 6.12323399573677e-17}, 0.0374772521070867},
               {{0.264415288706066, 0.964408914879206, 6.12323399573677e-17}, 0.0374772521070867},
               {{-0.964408914879206, -0.264415288706066, 6.12323399573677e-17}, 0.0374772521070867},
               {{-0.964408914879206, 0.264415288706067, 6.12323399573677e-17}, 0.0374772521070867},
               {{0.964408914879206, -0.264415288706067, 6.12323399573677e-17}, 0.0374772521070867},
               {{0.964408914879206, 0.264415288706066, 6.12323399573677e-17}, 0.0374772521070867},
               {{-0.264415288706066, 3.23815336959507e-17, 0.964408914879206}, 0.0374772521070867},
               {{-0.264415288706067, 3.23815336959508e-17, -0.964408914879206}, 0.0374772521070867},
               {{0.264415288706066, -6.47630673919015e-17, 0.964408914879206}, 0.0374772521070867},
               {{0.264415288706067, -6.47630673919015e-17, -0.964408914879206}, 0.0374772521070867},
               {{-0.964408914879206, 1.18106029067599e-16, 0.264415288706066}, 0.0374772521070867},
               {{-0.964408914879206, 1.18106029067599e-16, -0.264415288706066}, 0.0374772521070867},
               {{0.964408914879206, -2.36212058135198e-16, 0.264415288706066}, 0.0374772521070867},
               {{0.964408914879206, -2.36212058135198e-16, -0.264415288706066}, 0.0374772521070867},
               {{-4.85723005439261e-17, -0.264415288706066, 0.964408914879206}, 0.0374772521070867},
               {{-4.85723005439261e-17, -0.264415288706067, -0.964408914879206}, 0.0374772521070867},
               {{1.61907668479754e-17, 0.264415288706066, 0.964408914879206}, 0.0374772521070867},
               {{1.61907668479754e-17, 0.264415288706067, -0.964408914879206}, 0.0374772521070867},
               {{-1.77159043601399e-16, -0.964408914879206, 0.264415288706066}, 0.0374772521070867},
               {{-1.77159043601399e-16, -0.964408914879206, -0.264415288706066}, 0.0374772521070867},
               {{5.90530145337996e-17, 0.964408914879206, 0.264415288706066}, 0.0374772521070867},
               {{5.90530145337996e-17, 0.964408914879206, -0.264415288706066}, 0.0374772521070867},
               {{-0.571895589187896, -0.820326419827759, 6.12323399573677e-17}, 0.0452492503501685},
               {{-0.571895589187896, 0.820326419827759, 6.12323399573677e-17}, 0.0452492503501685},
               {{0.571895589187896, -0.820326419827759, 6.12323399573677e-17}, 0.0452492503501685},
               {{0.571895589187896, 0.820326419827759, 6.12323399573677e-17}, 0.0452492503501685},
               {{-0.820326419827759, -0.571895589187896, 6.12323399573677e-17}, 0.0452492503501685},
               {{-0.820326419827759, 0.571895589187896, 6.12323399573677e-17}, 0.0452492503501685},
               {{0.820326419827759, -0.571895589187896, 6.12323399573677e-17}, 0.0452492503501685},
               {{0.820326419827759, 0.571895589187896, 6.12323399573677e-17}, 0.0452492503501685},
               {{-0.571895589187896, 7.00370102745446e-17, 0.820326419827759}, 0.0452492503501685},
               {{-0.571895589187896, 7.00370102745447e-17, -0.820326419827759}, 0.0452492503501685},
               {{0.571895589187896, -1.40074020549089e-16, 0.820326419827759}, 0.0452492503501685},
               {{0.571895589187896, -1.40074020549089e-16, -0.820326419827759}, 0.0452492503501685},
               {{-0.820326419827759, 1.00461012429807e-16, 0.571895589187896}, 0.0452492503501685},
               {{-0.820326419827759, 1.00461012429807e-16, -0.571895589187896}, 0.0452492503501685},
               {{0.820326419827759, -2.00922024859615e-16, 0.571895589187896}, 0.0452492503501685},
               {{0.820326419827759, -2.00922024859615e-16, -0.571895589187896}, 0.0452492503501685},
               {{-1.05055515411817e-16, -0.571895589187896, 0.820326419827759}, 0.0452492503501685},
               {{-1.05055515411817e-16, -0.571895589187896, -0.820326419827759}, 0.0452492503501685},
               {{3.50185051372723e-17, 0.571895589187896, 0.820326419827759}, 0.0452492503501685},
               {{3.50185051372723e-17, 0.571895589187896, -0.820326419827759}, 0.0452492503501685},
               {{-1.50691518644711e-16, -0.820326419827759, 0.571895589187896}, 0.0452492503501685},
               {{-1.50691518644711e-16, -0.820326419827759, -0.571895589187896}, 0.0452492503501685},
               {{5.02305062149037e-17, 0.820326419827759, 0.571895589187896}, 0.0452492503501685},
               {{5.02305062149037e-17, 0.820326419827759, -0.571895589187896}, 0.0452492503501685},
               {{-0.251003475177047, -0.800072749407395, 0.544867737258077}, 0.0448813022692083},
               {{-0.251003475177047, -0.800072749407395, -0.544867737258077}, 0.0448813022692083},
               {{-0.251003475177046, 0.800072749407395, 0.544867737258077}, 0.0448813022692083},
               {{-0.251003475177046, 0.800072749407395, -0.544867737258077}, 0.0448813022692083},
               {{0.251003475177047, -0.800072749407395, 0.544867737258077}, 0.0448813022692083},
               {{0.251003475177047, -0.800072749407395, -0.544867737258077}, 0.0448813022692083},
               {{0.251003475177047, 0.800072749407395, 0.544867737258077}, 0.0448813022692083},
               {{0.251003475177047, 0.800072749407395, -0.544867737258077}, 0.0448813022692083},
               {{-0.251003475177046, -0.544867737258078, 0.800072749407395}, 0.0448813022692083},
               {{-0.251003475177046, -0.544867737258077, -0.800072749407395}, 0.0448813022692083},
               {{-0.251003475177046, 0.544867737258078, 0.800072749407395}, 0.0448813022692083},
               {{-0.251003475177046, 0.544867737258077, -0.800072749407395}, 0.0448813022692083},
               {{0.251003475177047, -0.544867737258077, 0.800072749407395}, 0.0448813022692083},
               {{0.251003475177046, -0.544867737258077, -0.800072749407395}, 0.0448813022692083},
               {{0.251003475177047, 0.544867737258077, 0.800072749407395}, 0.0448813022692083},
               {{0.251003475177047, 0.544867737258077, -0.800072749407395}, 0.0448813022692083},
               {{-0.800072749407395, -0.251003475177046, 0.544867737258077}, 0.0448813022692083},
               {{-0.800072749407395, -0.251003475177046, -0.544867737258077}, 0.0448813022692083},
               {{-0.800072749407395, 0.251003475177046, 0.544867737258077}, 0.0448813022692083},
               {{-0.800072749407395, 0.251003475177046, -0.544867737258077}, 0.0448813022692083},
               {{0.800072749407395, -0.251003475177047, 0.544867737258077}, 0.0448813022692083},
               {{0.800072749407395, -0.251003475177047, -0.544867737258077}, 0.0448813022692083},
               {{0.800072749407395, 0.251003475177047, 0.544867737258077}, 0.0448813022692083},
               {{0.800072749407395, 0.251003475177047, -0.544867737258077}, 0.0448813022692083},
               {{-0.800072749407395, -0.544867737258077, 0.251003475177046}, 0.0448813022692083},
               {{-0.800072749407395, -0.544867737258077, -0.251003475177046}, 0.0448813022692083},
               {{-0.800072749407395, 0.544867737258077, 0.251003475177046}, 0.0448813022692083},
               {{-0.800072749407395, 0.544867737258077, -0.251003475177046}, 0.0448813022692083},
               {{0.800072749407395, -0.544867737258078, 0.251003475177046}, 0.0448813022692083},
               {{0.800072749407395, -0.544867737258078, -0.251003475177046}, 0.0448813022692083},
               {{0.800072749407395, 0.544867737258077, 0.251003475177046}, 0.0448813022692083},
               {{0.800072749407395, 0.544867737258077, -0.251003475177046}, 0.0448813022692083},
               {{-0.544867737258077, -0.251003475177047, 0.800072749407395}, 0.0448813022692083},
               {{-0.544867737258077, -0.251003475177046, -0.800072749407395}, 0.0448813022692083},
               {{-0.544867737258077, 0.251003475177047, 0.800072749407395}, 0.0448813022692083},
               {{-0.544867737258077, 0.251003475177047, -0.800072749407395}, 0.0448813022692083},
               {{0.544867737258078, -0.251003475177046, 0.800072749407395}, 0.0448813022692083},
               {{0.544867737258077, -0.251003475177046, -0.800072749407395}, 0.0448813022692083},
               {{0.544867737258078, 0.251003475177046, 0.800072749407395}, 0.0448813022692083},
               {{0.544867737258077, 0.251003475177046, -0.800072749407395}, 0.0448813022692083},
               {{-0.544867737258078, -0.800072749407395, 0.251003475177046}, 0.0448813022692083},
               {{-0.544867737258078, -0.800072749407395, -0.251003475177046}, 0.0448813022692083},
               {{-0.544867737258077, 0.800072749407395, 0.251003475177046}, 0.0448813022692083},
               {{-0.544867737258077, 0.800072749407395, -0.251003475177046}, 0.0448813022692083},
               {{0.544867737258077, -0.800072749407395, 0.251003475177046}, 0.0448813022692083},
               {{0.544867737258077, -0.800072749407395, -0.251003475177046}, 0.0448813022692083},
               {{0.544867737258077, 0.800072749407395, 0.251003475177046}, 0.0448813022692083},
               {{0.544867737258077, 0.800072749407395, -0.251003475177046}, 0.0448813022692083},
               {{-0.123354853258333, -0.412772408316853, 0.902442529533}, 0.0426290524077194},
               {{-0.123354853258333, -0.412772408316853, -0.902442529533}, 0.0426290524077194},
               {{-0.123354853258333, 0.412772408316853, 0.902442529533}, 0.0426290524077194},
               {{-0.123354853258333, 0.412772408316853, -0.902442529533}, 0.0426290524077194},
               {{0.123354853258333, -0.412772408316853, 0.902442529533}, 0.0426290524077194},
               {{0.123354853258333, -0.412772408316853, -0.902442529533}, 0.0426290524077194},
               {{0.123354853258333, 0.412772408316853, 0.902442529533}, 0.0426290524077194},
               {{0.123354853258333, 0.412772408316853, -0.902442529533}, 0.0426290524077194},
               {{-0.123354853258333, -0.902442529533, 0.412772408316853}, 0.0426290524077194},
               {{-0.123354853258333, -0.902442529533001, -0.412772408316853}, 0.0426290524077194},
               {{-0.123354853258333, 0.902442529533, 0.412772408316853}, 0.0426290524077194},
               {{-0.123354853258333, 0.902442529533001, -0.412772408316853}, 0.0426290524077194},
               {{0.123354853258332, -0.902442529533, 0.412772408316853}, 0.0426290524077194},
               {{0.123354853258332, -0.902442529533001, -0.412772408316853}, 0.0426290524077194},
               {{0.123354853258333, 0.902442529533, 0.412772408316853}, 0.0426290524077194},
               {{0.123354853258333, 0.902442529533001, -0.412772408316853}, 0.0426290524077194},
               {{-0.412772408316853, -0.123354853258333, 0.902442529533}, 0.0426290524077194},
               {{-0.412772408316853, -0.123354853258333, -0.902442529533}, 0.0426290524077194},
               {{-0.412772408316853, 0.123354853258333, 0.902442529533}, 0.0426290524077194},
               {{-0.412772408316853, 0.123354853258333, -0.902442529533}, 0.0426290524077194},
               {{0.412772408316853, -0.123354853258333, 0.902442529533}, 0.0426290524077194},
               {{0.412772408316853, -0.123354853258333, -0.902442529533}, 0.0426290524077194},
               {{0.412772408316853, 0.123354853258333, 0.902442529533}, 0.0426290524077194},
               {{0.412772408316853, 0.123354853258333, -0.902442529533}, 0.0426290524077194},
               {{-0.412772408316853, -0.902442529533, 0.123354853258333}, 0.0426290524077194},
               {{-0.412772408316853, -0.902442529533, -0.123354853258333}, 0.0426290524077194},
               {{-0.412772408316853, 0.902442529533, 0.123354853258333}, 0.0426290524077194},
               {{-0.412772408316853, 0.902442529533, -0.123354853258333}, 0.0426290524077194},
               {{0.412772408316853, -0.902442529533001, 0.123354853258333}, 0.0426290524077194},
               {{0.412772408316853, -0.902442529533001, -0.123354853258333}, 0.0426290524077194},
               {{0.412772408316853, 0.902442529533001, 0.123354853258333}, 0.0426290524077194},
               {{0.412772408316853, 0.902442529533, -0.123354853258333}, 0.0426290524077194},
               {{-0.902442529533, -0.123354853258332, 0.412772408316853}, 0.0426290524077194},
               {{-0.902442529533001, -0.123354853258332, -0.412772408316853}, 0.0426290524077194},
               {{-0.902442529533, 0.123354853258333, 0.412772408316853}, 0.0426290524077194},
               {{-0.902442529533001, 0.123354853258333, -0.412772408316853}, 0.0426290524077194},
               {{0.902442529533, -0.123354853258333, 0.412772408316853}, 0.0426290524077194},
               {{0.902442529533001, -0.123354853258333, -0.412772408316853}, 0.0426290524077194},
               {{0.902442529533, 0.123354853258332, 0.412772408316853}, 0.0426290524077194},
               {{0.902442529533001, 0.123354853258333, -0.412772408316853}, 0.0426290524077194},
               {{-0.902442529533, -0.412772408316853, 0.123354853258333}, 0.0426290524077194},
               {{-0.902442529533, -0.412772408316853, -0.123354853258333}, 0.0426290524077194},
               {{-0.902442529533, 0.412772408316853, 0.123354853258333}, 0.0426290524077194},
               {{-0.902442529533, 0.412772408316853, -0.123354853258333}, 0.0426290524077194},
               {{0.902442529533, -0.412772408316853, 0.123354853258333}, 0.0426290524077194},
               {{0.902442529533, -0.412772408316853, -0.123354853258333}, 0.0426290524077194},
               {{0.902442529533001, 0.412772408316853, 0.123354853258333}, 0.0426290524077194},
               {{0.902442529533, 0.412772408316853, -0.123354853258333}, 0.0426290524077194}};
}


} // namespace internal
} // namespace GDT
} // namespace Dune
