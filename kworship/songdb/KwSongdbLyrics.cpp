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

/**
 * @file KwSongdbLyrics.cpp
 * @brief A verse of lyrics from the database.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwSongdbLyrics.h"

/*
 * Constructors + destructor
 */

/// Primary constructor.
KwSongdbLyrics::KwSongdbLyrics(int id, const QString& lyrics)
: m_id(id)
, m_lyrics(lyrics)
{
}

/// Destructor.
KwSongdbLyrics::~KwSongdbLyrics()
{
}

/*
 * Accessors
 */

/// Get lyrics id.
int KwSongdbLyrics::getId() const
{
  return m_id;
}

/// Get the lyrics.
QString KwSongdbLyrics::getLyrics() const
{
  return m_lyrics;
}

