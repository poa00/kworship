#ifndef _KwLocalDisplay_h_
#define _KwLocalDisplay_h_

/**
 * @file KwLocalDisplay.h
 * @brief Local controller of displays.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwAbstractDisplay.h"
#include "KwLayerData.h"

#include <QWidget>
#include <QStackedLayout>

/// Local controller of displays.
class KwLocalDisplay : public QWidget, public KwAbstractDisplay
{
    Q_OBJECT
  public:

    /*
     * Constructors + destructors
     */

    /// Primary constructor.
    KwLocalDisplay(QWidget* parent = 0);

    /// Destructor.
    virtual ~KwLocalDisplay();

    /*
     * Public methods
     */

    /// Set whether this display is the primary display.
    /**
     * This makes the size of the display match the size of this widget.
     */
    void setPrimary(bool newIsPrimary = true);

  signals:

    /// Triggered by closeEvent.
    void closed();

  protected:

    /*
     * Main interface events for extension
     */

    /// @copydoc KwAbstractDisplay::setDisplayResolutionEvent(QSize)
    virtual void setDisplayResolutionEvent(QSize size);

    /// @copydoc KwAbstractDisplay::clearLayersEvent()
    virtual void clearLayersEvent();

    /// @copydoc KwAbstractDisplay::setLayerEvent(unsigned int, const KwAbstractLayer*, bool)
    virtual void setLayerEvent(unsigned int index, const KwAbstractLayer* layer, bool insert);

    /// @copydoc KwAbstractDisplay::removeLayerEvent(unsigned int)
    virtual void removeLayerEvent(unsigned int index);

    /*
     * QT Events
     */

    /// @copydoc QWidget::paintEvent(QPaintEvent*)
    void paintEvent(QPaintEvent *);

    /// @copydoc QWidget::resizeEvent(QResizeEvent*)
    void resizeEvent(QResizeEvent*);

    /// @copydoc QWidget::closeEvent(QCloseEvent*)
    void closeEvent(QCloseEvent*);

  private:

    /*
     * Types
     */

    /// Data per layer.
    typedef KwLayerData<void*> LayerData;

    /*
     * Variables
     */

    /// Is this preview the primary display?
    bool m_isPrimary;

    /// To store the result of KwAbstractLayer::addWidgets.
    LayerData m_layerWidgetData;

    /// Layout.
    QStackedLayout* m_layout;
};

#endif // _KwLocalDisplay_h_
