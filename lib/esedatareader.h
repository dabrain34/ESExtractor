/* ESExtractor
 * Copyright (C) 2022 Igalia, S.L.
 *     Author: Stephane Cerveau <scerveau@igalia.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License.  You
 * may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.  See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include "esereader.h"
#include "eseutils.h"
#include "esextractor.h"

class ESEDataReader : public ESEReader {
  public:
  ESEDataReader (ese_read_buffer_func read_func, void *pointer);
  ~ESEDataReader ();

  bool              prepare ();
  virtual ESEBuffer getBuffer (uint32_t size);

  private:
  ese_read_buffer_func m_readFunc;
  void                *m_dataPointer;
};