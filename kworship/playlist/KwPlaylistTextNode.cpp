/**
 * @file KwPlaylistTextNode.cpp
 * @brief A playlist node for a text.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwPlaylistTextNode.h"
#include "KwPlaylistText.h"

#include <KIcon>

/*
 * Constructors + destructor.
 */

/// Primary constructor.
KwPlaylistTextNode::KwPlaylistTextNode(KwPlaylistNode* parent, KwPlaylistText* item)
: KwPlaylistPagedNode(parent, item)
, m_item(item)
{
}

/// Destructor.
KwPlaylistTextNode::~KwPlaylistTextNode()
{
}

/*
 * Main interface
 */

QVariant KwPlaylistTextNode::getData(int role, int column)
{
  if (role == Qt::DisplayRole)
  {
    if (column == 0)
    {
      return m_item->getLabel();
    }
  }
  else if (role == Qt::DecorationRole)
  {
    if (column == 0)
    {
      return KIcon("kwrite");
    }
  }
  return QVariant();
}

