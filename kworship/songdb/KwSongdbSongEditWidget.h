/***************************************************************************
 *   This file is part of KWorship.                                        *
 *   Copyright 2008 James Hogan <james@albanarts.com>                      *
 *                                                                         *
 *   KWorship is free software: you can redistribute it and/or modify      *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   KWorship is distributed in the hope that it will be useful,           *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with KWorship.  If not, write to the Free Software Foundation,  *
 *   Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.   *
 ***************************************************************************/

#ifndef _KwSongdbSongEditWidget_h_
#define _KwSongdbSongEditWidget_h_

/**
 * @file KwSongdbSongEditWidget.h
 * @brief Widget for editing a song.
 * @author James Hogan <james@albanarts.com>
 */

#include "ui_KwSongdbSongEditWidget_base.h"

#include <QWidget>

/** Widget for editing a song.
 * Allows editing of song information, song versions and lyrics.
 */
class KwSongdbSongEditWidget : public QWidget, public Ui::KwSongdbSongEditWidget_base
{
    Q_OBJECT

  public:

    /*
     * Constructors + destructor
     */

    /// Default constructor.
    KwSongdbSongEditWidget();

    /// Destructor.
    virtual ~KwSongdbSongEditWidget();

};

#endif // _KwSongdbSongEditWidget_h_
