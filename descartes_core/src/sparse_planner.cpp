/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2014, Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * sparse_planner.cpp
 *
 *  Created on: Dec 17, 2014
 *      Author: ros developer 
 */

#include <descartes_core/sparse_planner.h>

namespace descartes_core
{

SparsePlanner::SparsePlanner(RobotModelConstPtr &model):
    PlanningGraph(model)
{

}

SparsePlanner::~SparsePlanner()
{

}

bool SparsePlanner::setTrajectory(const std::vector<TrajectoryPt>& traj, double target_sampling)
{
  return true;
}

} /* namespace descartes_core */
