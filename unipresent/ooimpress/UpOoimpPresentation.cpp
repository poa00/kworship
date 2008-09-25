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
 * @file UpOoimpPresentation.cpp
 * @brief OpenOffice.org Impress presentation.
 * @author James Hogan <james@albanarts.com>
 */

#include "UpOoimpPresentation.h"

#include <com/sun/star/frame/XModel.hpp>

#include <cassert>

using namespace com::sun::star::frame;
using namespace com::sun::star::uno;

/*
 * Constructors + destructor
 */

/// Primary constructor.
UpOoimpPresentation::UpOoimpPresentation(uno::XInterface* interface, QObject* parent)
: UpPresentation(parent)
, m_interface(interface)
, m_url()
{
  /// Get the url
  Reference<XModel> model(interface, UNO_QUERY);
  assert(0 != model.get());
  m_url = QString::fromUtf16((const sal_Unicode*)model->getURL());
}

/// Destructor.
UpOoimpPresentation::~UpOoimpPresentation()
{
}

/*
 * Main interface
 */

void UpOoimpPresentation::close()
{
}

/*
 * Slides
 */

int UpOoimpPresentation::numSlides()
{
  return 0;
}

UpSlide* UpOoimpPresentation::getSlide(int)
{
  return 0;
}

#include "UpOoimpPresentation.moc"

