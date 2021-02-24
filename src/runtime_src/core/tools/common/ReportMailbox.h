/**
 * Copyright (C) 2021 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef __ReportMailbox_h_
#define __ReportMailbox_h_

// Please keep external include file dependencies to a minimum
#include <map>
#include "Report.h"

class ReportMailbox : public Report {
 public:
  ReportMailbox() : Report("mailbox", "Mailbox metrics of the device", true /*deviceRequired*/) { /*empty*/ };

 // Child methods that need to be implemented
 public:
  virtual void getPropertyTreeInternal(const xrt_core::device * device, boost::property_tree::ptree &pt) const;
  virtual void getPropertyTree20202(const xrt_core::device * devicee, boost::property_tree::ptree &pt) const;
  virtual void writeReport(const xrt_core::device * device, const std::vector<std::string> & elementsFilter, std::iostream & output) const;
};

#endif

