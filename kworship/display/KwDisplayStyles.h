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

#ifndef _KwDisplayStyles_h_
#define _KwDisplayStyles_h_

/**
 * @file KwDisplayStyles.h
 * @brief Display styles interface.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwCssStandardise.h"

#include <QString>
#include <QBrush>
#include <QFont>
#include <QPen>

namespace KwDisplayStyles
{
  // Display background
  KWCSS_ROOT_NAMESPACE(background)
    // Brush to fill the background
    KWCSS_DEFINE_PROPERTY(QBrush, brush)
    // Image backgrounds
    KWCSS_START_NAMESPACE(background, image)
      // Pixmap to display
      KWCSS_DEFINE_PROPERTY(QPixmap, pixmap)
    KWCSS_END_NAMESPACE()
    // Video backgrounds
    KWCSS_START_NAMESPACE(background, video)
      // Path of video file
      KWCSS_DEFINE_PROPERTY(QString, path)
      // Whether to loop the video
      KWCSS_DEFINE_PROPERTY(bool, loop)
    KWCSS_END_NAMESPACE()
  KWCSS_END_NAMESPACE()

  // Text
  KWCSS_ROOT_NAMESPACE(text)
    // Font display settings
    KWCSS_START_NAMESPACE(text, font)
      KWCSS_DEFINE_PROPERTY(QFont, font)
      KWCSS_DEFINE_PROPERTY(QBrush, brush)
      KWCSS_START_NAMESPACE(text.font, outline)
        KWCSS_DEFINE_PROPERTY(bool, enabled)
        KWCSS_DEFINE_PROPERTY(QPen, pen)
      KWCSS_END_NAMESPACE()
      KWCSS_START_NAMESPACE(text.font, shadow)
        KWCSS_DEFINE_PROPERTY(bool, enabled)
      KWCSS_END_NAMESPACE()
    KWCSS_END_NAMESPACE()
    // Text layout settings
  KWCSS_END_NAMESPACE()
}

#endif // _KwDisplayStyles_h_

