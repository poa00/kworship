/***************************************************************************
 *   This file is part of KWorship.                                        *
 *   Copyright 2008 James Hogan <james@albanarts.com>                      *
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

#ifndef _KwTextManager_h_
#define _KwTextManager_h_

/**
 * @file KwTextManager.h
 * @brief Text manager.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwAbstractDisplayManager.h"

#include <QString>

class KwCssScope;

/// Text manager.
/**
 * High level interface for controlling text on screen.
 */
class KwTextManager : public KwAbstractDisplayManager
{
  public:

    /*
     * Constructors + destructors
     */

    /// Default constructor.
    KwTextManager();

    /// Destructor.
    virtual ~KwTextManager();

    /*
     * Main interface
     */

    /// Apply the styles in a scope.
    void applyStyles(KwCssScope* scope);

    /// Clear all text.
    void clear();

    /// Set the text.
    void setText(QString text);
};

#endif // _KwTextManager_h_

