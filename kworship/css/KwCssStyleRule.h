#ifndef _KwCssStyleRule_h_
#define _KwCssStyleRule_h_

/**
 * @file KwCssStyleRule.h
 * @brief Rule for apply cascading styles.
 * @author James Hogan <james@albanarts.com>
 */

#include "KwCssScopeKey.h"
#include "KwCssStyles.h"

#include "CountedReference.h"

#include <QString>
#include <QStringList>
#include <QSet>
#include <QList>

/// Rule for apply cascading styles.
class KwCssStyleRule
{
  public:

    /*
     * Types
     */

    /// List of keys.
    typedef QList<KwCssScopeKey> KeyList;

    /// Set of strings.
    typedef QSet<QString> StringSet;

    /*
     * Constructors + destructors
     */

    /// Default constructor.
    KwCssStyleRule();

    /// Destructor.
    virtual ~KwCssStyleRule();

    /*
     * Main interface.
     */

    /// Set the set of required classes.
    void setCriteriaClasses(const StringSet& classes);

    /// Set a style.
    void setRawStyle(QString name, KwCssAbstractStyle* style);

    /// Set a style of a particular type.
    template <typename T>
    void setStyle(QString name, const T& value)
    {
      m_styles->setStyle<T>(name, value);
    }

    /*
     * Accessors
     */

    /// Get the list of criteria keys.
    KeyList& getCriteriaKeys();

    /// Get the set of criteria classes.
    StringSet& getCriteriaClasses();

    /// Get the list of included styles.
    const StringSet& getIncludedStyles() const;

    /// Get the styles.
    const ReferenceCountedExtension<KwCssStyles>* getStyles() const;

  private:

    /*
     * Matching criteria
     */

    /// List of (sequences of scope keys to match in order).
    KeyList m_criteriaKeys;

    /// Classes required to match.
    StringSet m_criteriaClasses;

    /*
     * Variables
     */

    /// Names of included classes.
    StringSet m_includedStyles;

    /// The styles.
    Reference<ReferenceCountedExtension<KwCssStyles> > m_styles;
};

#endif // _KwCssStyleRule_h_
