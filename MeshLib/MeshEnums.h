/**
 * \file
 * \author  Karsten Rink
 * \date    2012-05-02
 * \brief   Definition of mesh-related Enumerations.
 *
 * \copyright
 * Copyright (c) 2012-2014, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef MESHENUMS_H
#define MESHENUMS_H

#include <string>

/**
 * \brief Types of mesh elements supported by OpenGeoSys.
 * Values are from VTKCellType enum
 */
enum class MeshElemType
{
	INVALID = 0,
	LINE = 3,
	QUAD = 9,
	HEXAHEDRON = 12,
	TRIANGLE = 5,
	TETRAHEDRON = 10,
	PRISM = 16,
	PYRAMID = 14
};

/**
 * \brief Types of mesh elements supported by OpenGeoSys.
 */
enum class CellType
{
	INVALID,
	LINE2,
	LINE3,
	TRI3,
	TRI6,
	QUAD4,
	QUAD8,
	QUAD9,
	TET4,
	TET10,
	HEX8,
	HEX20,
	HEX27,
	PRISM6,
	PRISM15,
	PRISM18,
	PYRAMID5
};

/**
 * \brief Describes a mesh quality metric.
 */
enum class MeshQualityType
{
    INVALID = 0,
    AREA,
    VOLUME,
    EDGERATIO,
    EQUIANGLESKEW,
    RADIUSEDGERATIO
};

/// Given a MeshElemType this returns the appropriate string.
const std::string MeshElemType2String(const MeshElemType t);

/// Given a string of the shortened name of the element type, this returns the corresponding MeshElemType.
MeshElemType String2MeshElemType(const std::string &s);

const std::string MeshQualityType2String(const MeshQualityType t);

#endif //MESHENUMS_H
