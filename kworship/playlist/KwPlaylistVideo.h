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

#ifndef _KwPlaylistVideo_h_
#define _KwPlaylistVideo_h_

/**
 * @file KwPlaylistVideo.h
 * @brief A media playlist item.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwPlaylistFile.h"

#include "KwMediaItem.h"

/// A media playlist item.
class KwPlaylistVideo : public KwPlaylistFile
{
  public:
    
    /*
     * Constructors + destructor.
     */

    /// Primary constructor.
    KwPlaylistVideo(const QUrl& url);

    /// Destructor.
    virtual ~KwPlaylistVideo();

    /*
     * Main interface.
     */

    virtual void activate(KwDisplayManager* manager);

  private:

    /*
     * Variables
     */

    /// Video item
    KwMediaItem m_mediaItem;
};

#endif // _KwPlaylistVideo_h_

