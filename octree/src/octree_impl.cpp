
/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2011, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Julius Kammerl (julius@kammerl.de)
 */

#include "pcl/impl/instantiate.hpp"
#include "pcl/point_types.h"
#include "pcl/octree/octree_impl.h"

#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/repetition/repeat_from_to.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/for_each_product.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/expand.hpp>

#include "pcl/octree/octree.h"
#include "pcl/octree/octree_impl.h"



// Instantiations of specific point types


template class pcl::octree::OctreeBase<int> ;
template class pcl::octree::Octree2BufBase<int> ;

template class pcl::octree::OctreeBase<int, pcl::octree::OctreeLeafDataTVector<int> > ;
template class pcl::octree::Octree2BufBase<int, pcl::octree::OctreeLeafDataTVector<int> > ;

PCL_INSTANTIATE(OctreePointCloudSingleBuffer, PCL_XYZ_POINT_TYPES);
PCL_INSTANTIATE(OctreePointCloudDoubleBuffer, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudDensity, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudOccupancy, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudSinglePoint, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudPointVector, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudChangeDetector, PCL_XYZ_POINT_TYPES);

PCL_INSTANTIATE(OctreePointCloudVoxelCentroid, PCL_XYZ_POINT_TYPES);


