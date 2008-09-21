/***************************************************************************
 *   Copyright 2008 James Hogan <james@albanarts.com>                      *
 *                                                                         *
 *   This file is part of KWorship.                                        *
 *                                                                         *
 *   KWorship is free software: you can redistribute it and/or modify      *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   KWorship is distributed in the hope that it will be useful,           *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with KWorship.  If not, see <http://www.gnu.org/licenses/>.     *
 ***************************************************************************/

#ifndef _KwRemoteDisplayController_h_
#define _KwRemoteDisplayController_h_

/**
 * @file KwRemoteDisplayController.h
 * @brief Display server class that passes control from the remote controller.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwAbstractDisplay.h"

/// Display server class that passes control from the remote controller.
class KwRemoteDisplayController : public KwAbstractDisplay
{
  public:

    /*
     * Constructors + destructors
     */

    /// Default constructor.
    KwRemoteDisplayController();

    /// Destructor.
    virtual ~KwRemoteDisplayController();
};

#endif // _KwRemoteDisplayController_h_

