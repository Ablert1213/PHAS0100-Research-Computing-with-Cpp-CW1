/*=============================================================================

  PHAS0100ASSIGNMENT1: PHAS0100 Assignment 1 Game of Life Simulation.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include "catch.hpp"
#include "golCatchMain.h"
#include "golMyFunctions.h"
#include "golImplementGol.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <fstream>

using std::string;
using std::vector;
using std::cout;

TEST_CASE( "Test_instantiation_of_DataStructureClass", "[GridDataStructure]" ) {
  gol::GridDataStructure row_col_input = gol::GridDataStructure(8,9);
  gol::GridDataStructure row_col_aliveCells_input = gol::GridDataStructure(8,9,4);
  // string file_path = "glider.txt";
  // gol::GridDataStructure filePath_aliveCells_input = gol::GridDataStructure(file_path);
  
  // cout<< row_col_input.GetVectorSize()[0] << "\n"
  //     << row_col_aliveCells_input.GetVectorSize()[0] << "\n"
  //     << filePath_aliveCells_input.GetVectorSize()[0] << "\n"
  //     << row_col_input.GetVectorSize()[1] << "\n"
  //     << row_col_aliveCells_input.GetVectorSize()[1] << "\n"
  //     << filePath_aliveCells_input.GetVectorSize()[1] << std::endl;

  int error = 0;
  if (row_col_input.GetVectorSize()[0] != 8){ ++error;}
  if (row_col_input.GetVectorSize()[1] != 9){ ++error;}
  if (row_col_aliveCells_input.GetVectorSize()[0] != 8){ ++error;}
  if (row_col_aliveCells_input.GetVectorSize()[1] != 9){ ++error;}

  REQUIRE( error == 0);
}