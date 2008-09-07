#ifndef _KwCssStyleSheet_h_
#define _KwCssStyleSheet_h_

/**
 * @file KwCssStyleSheet.h
 * @brief Cascading style sheet.
 * @author James Hogan <james@albanarts.com>
 */

#include <QList>

class KwCssStyleRule;

/// Cascading style sheet.
/**
 * Represents a set of style definitions.
 * These definitions may be backed up by a CSS-like file.
 */
class KwCssStyleSheet
{
  public:

    /*
     * Types
     */

    /// List of rules.
    typedef QList<KwCssStyleRule> RuleList;

    /// Constant iterator.
    typedef RuleList::const_iterator ConstIterator;

    /// Iterator.
    typedef RuleList::iterator Iterator;

    /*
     * Constructors + destructors
     */

    /// Default constructor.
    KwCssStyleSheet();

    /// Copy constructor.
    /**
     * This copies all except the actual styles in each rule which are aliased.
     */
    KwCssStyleSheet(const KwCssStyleSheet& copy);

    /// Destructor.
    virtual ~KwCssStyleSheet();

    /*
     * Main interface
     */

    /// Clear the rules.
    void clear();

    /// Append a rule.
    void addRule(const KwCssStyleRule& rule);

    /// Import another stylesheet.
    void importStyleSheet(const KwCssStyleSheet* styleSheet);

    /*
     * Accessors
     */

    /// Get the rules.
    RuleList& getRules();

    /// Get the constant rules.
    const RuleList& getRules() const;

  private:

    /*
     * Variables
     */

    /// List of style rules.
    RuleList m_rules;
};

#endif // _KwCssStyleSheet_h_

