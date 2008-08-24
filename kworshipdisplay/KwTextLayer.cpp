/**
 * @file KwTextLayer.cpp
 * @brief Layer of pretty text.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwTextLayer.h"

#include <QStackedLayout>
#include <QTextBrowser>

/*
 * Constructors + destructors
 */

/// Default constructor.
KwTextLayer::KwTextLayer()
: KwAbstractLayer()
, m_style()
, m_text()
{
}

/// Primaryt constructor.
KwTextLayer::KwTextLayer(QString text)
: KwAbstractLayer()
, m_style()
, m_text(text)
{
}

/// Destructor.
KwTextLayer::~KwTextLayer()
{
}

/*
 * Private structures
 */

struct KwTextLayerData
{
  QTextBrowser* textBrowser;
};

/*
 * Methods
 */

void* KwTextLayer::addWidgets(QWidget* master) const
{
  KwTextLayerData* data = new KwTextLayerData;

  data->textBrowser = new QTextBrowser();
  data->textBrowser->setFrameShape(QFrame::NoFrame);
  data->textBrowser->setFrameShadow(QFrame::Plain);
  data->textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  data->textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  data->textBrowser->viewport()->setAutoFillBackground(false);
  {
    QTextCursor cursor = data->textBrowser->textCursor();
    QTextCharFormat fmt;
    fmt.setFontPointSize(64);

#if 0
    QLinearGradient gradient(0, 0, 500, 500);
    gradient.setColorAt(0, Qt::red);
    gradient.setColorAt(1, Qt::green);
#endif

    fmt.setForeground(QBrush(Qt::yellow));
    fmt.setTextOutline(QPen(Qt::blue, 3));

    cursor.insertText(m_text, fmt);
  }

  QStackedLayout* layout = new QStackedLayout();
  layout->setStackingMode(QStackedLayout::StackAll);
  layout->addWidget(data->textBrowser);
  master->setLayout(layout);


  return (void*)data;
}

void KwTextLayer::removeWidgets(QWidget* master, void* rawData) const
{
  Q_UNUSED(master)

  KwTextLayerData* data = reinterpret_cast<KwTextLayerData*>(rawData);

  delete data;
}

