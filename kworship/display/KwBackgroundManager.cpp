/**
 * @file KwBackgroundManager.cpp
 * @brief Background manager.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwBackgroundManager.h"
#include "KwDisplayStyles.h"

#include "KwImageLayer.h"
#include "KwVideoLayer.h"

#include <phonon/mediaobject.h>
#include <phonon/audiooutput.h>

/*
 * Constructors + destructors
 */

/// Default constructor.
KwBackgroundManager::KwBackgroundManager(KwMediaManager* mediaManager)
: KwAbstractDisplayManager()
, m_mediaManager(mediaManager)
, m_imageLayer(0)
, m_videoLayer(0)
{
}

/// Destructor.
KwBackgroundManager::~KwBackgroundManager()
{
  clear();
}

/*
 * Main interface
 */

/// Apply the styles in a scope.
void KwBackgroundManager::applyStyles(KwCssScope* scope)
{
  QPixmap image = KwDisplayStyles::background::image::pixmap(scope);
  if (image.isNull())
  {
    // Set background if applicable
    setPlain(KwDisplayStyles::background::brush(scope));
  }
  else
  {
    setImage(image);
  }
}

/// Clear the background.
void KwBackgroundManager::clear()
{
  m_display.clearLayers();
  delete m_imageLayer;
  delete m_videoLayer;
  m_imageLayer = 0;
  m_videoLayer = 0;
}

/// Set background to a brush.
void KwBackgroundManager::setPlain(QBrush brush)
{
  clear();
  m_imageLayer = new KwImageLayer(brush);
  m_display.setLayer(0, m_imageLayer, true);
}

/// Set the background to an image.
void KwBackgroundManager::setImage(const QPixmap& pixmap)
{
  clear();
  m_imageLayer = new KwImageLayer(pixmap);
  m_display.setLayer(0, m_imageLayer, true);
}

/// Set the background up for video.
void KwBackgroundManager::setVideo()
{
  // Make sure the background video layer is set up
  if (0 == m_videoLayer)
  {
    clear();
    m_videoLayer = new KwVideoLayer(m_mediaManager);
    m_display.setLayer(0, m_videoLayer, true);
  }
}
