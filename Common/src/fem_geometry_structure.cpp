/*!
 * \file fem_geometry_structure.cpp
 * \brief Main subroutines for creating the primal grid for the FEM solver.
 * \author E. van der Weide
 * \version 4.1.0 "Cardinal"
 *
 * SU2 Lead Developers: Dr. Francisco Palacios (Francisco.D.Palacios@boeing.com).
 *                      Dr. Thomas D. Economon (economon@stanford.edu).
 *
 * SU2 Developers: Prof. Juan J. Alonso's group at Stanford University.
 *                 Prof. Piero Colonna's group at Delft University of Technology.
 *                 Prof. Nicolas R. Gauger's group at Kaiserslautern University of Technology.
 *                 Prof. Alberto Guardone's group at Polytechnic University of Milan.
 *                 Prof. Rafael Palacios' group at Imperial College London.
 *
 * Copyright (C) 2012-2015 SU2, the open-source CFD code.
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#include "../include/fem_geometry_structure.hpp"

CMeshFEM::CMeshFEM(CGeometry *geometry, CConfig *config) {

  cout << "CMeshFEM::CMeshFEM: Not implemented yet." << endl;

#ifndef HAVE_MPI
  exit(EXIT_FAILURE);
#else
  MPI_Abort(MPI_COMM_WORLD,1);
  MPI_Finalize();
#endif

}

CMeshFEM_DG::CMeshFEM_DG(CGeometry *geometry, CConfig *config) : CMeshFEM(geometry, config) {

}