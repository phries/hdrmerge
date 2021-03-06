/*
 *  HDRMerge - HDR exposure merging software.
 *  Copyright 2012 Javier Celaya
 *  jcelaya@gmail.com
 *
 *  This file is part of HDRMerge.
 *
 *  HDRMerge is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  HDRMerge is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with HDRMerge. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _LOADSAVEOPTIONS_H_
#define _LOADSAVEOPTIONS_H_

#include <vector>
#include <string>

namespace hdrmerge {

struct LoadOptions {
    std::vector<std::string> fileNames;
    bool align;
    bool crop;
    bool batch;
    double batchGap;
    LoadOptions() : align(true), crop(true), batch(false), batchGap(2.0) {}
};


struct SaveOptions {
    int bps;
    int previewSize;
    std::string fileName;
    bool saveMask;
    std::string maskFileName;
    int featherRadius;
    SaveOptions() : bps(16), previewSize(0), saveMask(false), featherRadius(3) {}
};

} // namespace hdrmerge

#endif // _LOADSAVEOPTIONS_H_
