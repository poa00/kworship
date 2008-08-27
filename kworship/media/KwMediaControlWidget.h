#ifndef _KwMediaControlWidget_h_
#define _KwMediaControlWidget_h_

/**
 * @file KwMediaControlWidget.h
 * @brief Controls the preferences of the currently playing media items.
 * @author James Hogan <james@albanarts.com>
 */

#include <QWidget>

class KwMediaManager;
class KwMediaControlWidgetSequence;
class KwMediaControlWidgetAudio;
class KwMediaControlWidgetVisual;

/// Controls the preferences of the currently playing media items.
class KwMediaControlWidget : public QWidget
{
  public:

    /*
     * Constructors + destructors
     */

    /// Primary constructor.
    KwMediaControlWidget(KwMediaManager* manager, QWidget* parent);

    /// Destructor.
    virtual ~KwMediaControlWidget();

  private:

    /*
     * Variables
     */

    /// Manager to control.
    KwMediaManager* m_manager;

    /// Audio sequencer.
    KwMediaControlWidgetSequence* m_audioSequencer;

    /// Video sequencer.
    KwMediaControlWidgetSequence* m_videoSequencer;

    /// Audio control.
    KwMediaControlWidgetAudio* m_audio;

    /// Visual control.
    KwMediaControlWidgetVisual* m_visual;
};

#endif // _KwMediaControlWidget_h_

