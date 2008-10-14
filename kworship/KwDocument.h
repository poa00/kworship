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

#ifndef _KwDocument_h_
#define _KwDocument_h_

/**
 * @file KwDocument.h
 * @brief A KWorship document (anything saved in a KWorship data file).
 * @author James Hogan <james@albanarts.com>
 */

#include <KUrl>

#include <QObject>

class KwPlaylistList;
class KwArchive;

/// A KWorship document (anything saved in a KWorship data file).
class KwDocument : public QObject
{
    Q_OBJECT

  public:

    /*
     * Constructors + destructor
     */

    /// Primary constructor.
    KwDocument(KUrl url, QObject* parent = 0);

    /// Destructor.
    virtual ~KwDocument();

    /*
     * Accessors
     */

    /// Find whether the document has been modified.
    bool isModified() const;

    /// Find whether the document has ever been saved.
    bool isSaved() const;

    /// Get the URL the document is saved at.
    KUrl url() const;

    /// Get the main playlist.
    KwPlaylistList* playlist();

  public slots:

    /*
     * Saving and loading actions
     */

    /// Load the file.
    void reload();

    /// Save the file.
    void save();

    /// Save the file to a different URL.
    void saveAs(const KUrl& url);

    /*
     * Other slots
     */

    /// Set whether the file is modified.
    void setModified(bool modified);

  signals:

    /*
     * Signals
     */

    /// Emitted when the playlist is reset.
    void playlistReset();

    /// Emitted when the document modified status changes.
    void modifiedChanged(bool modified);

  protected:

    /*
     * Archive interface.
     */

    /// Load from an archive.
    void loadFromArchive(KwArchive* archive);

    /// Save to an archive.
    void saveToArchive(KwArchive* archive) const;

  private:

    /*
     * Variables
     */

    /// The URL of the saved file.
    KUrl m_url;

    /// Whether the document has been modified.
    bool m_modified;

    /// The main playlist item.
    KwPlaylistList* m_playlist;

};

#endif // _KwDocument_h_

