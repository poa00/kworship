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

#ifndef _UpManager_h_
#define _UpManager_h_

/**
 * @file UpManager.h
 * @brief Overall unipresent manager.
 * @author James Hogan <james@albanarts.com>
 */

#include <QObject>
#include <QUrl>

class UpBackend;
class UpPresentation;

/// Overall unipresent manager.
class UpManager : public QObject
{
  Q_OBJECT
  public:

    /*
     * Constructors + destructor
     */

    /// Primary constructor.
    UpManager(QObject* parent = 0);

    /// Destructor.
    virtual ~UpManager();

    /*
     * Presentation management
     */

    /// Get a list of presentations.
    QList<UpPresentation*> presentations();

    /// Open a new presentation.
    UpPresentation* openPresentation(const QUrl& url);

    /*
     * Backend management
     */

    /// Get a list of backends.
    QList<UpBackend*> backends();

  private:

    /*
     * Variables
     */

    /// Backends.
    QList<UpBackend*> m_backends;

};

#endif // _UpManager_h_

