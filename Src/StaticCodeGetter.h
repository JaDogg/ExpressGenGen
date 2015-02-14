#ifndef _STATIC_CODE_GETTER_H_
#define _STATIC_CODE_GETTER_H_
//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
#include <string>
//--------------------------------------------

// Struct should be completely declared here
// because 'StaticCodeGetter' interface should work same
// across all it's implementations

/*!
 * \brief This structure holds static code
 */
struct StaticCode {
    // Static code for template
    const std::string BeforePreheader;
    const std::string AfterPreheader;
    const std::string AfterHeader;
    const std::string BeforeFooter;
    const std::string AfterFooter;
    const std::string AfterPostFooter;
    // Static code used for inline mode
    const std::string EchoCmdStart;
    const std::string EchoCmdEnd;
};

// It is not wise to use the Impl Idiom for this scenario, cause
// Static code for each language differes from each other greatly
// And It can be a bit lengthy, and if I used a switch+enum
// For an Impl that class will be too big making
// It harder to maintain, So seperate implementations
// For each language would do the trick.

/*!
 * \brief The StaticCodeGetter class
 * This class is an abstract (or can also be called an interface)
 * static code getter
 */
class StaticCodeGetter {
public:
    const StaticCode GetStaticCode() const;
    virtual ~StaticCodeGetter() {}

private:
};

//-------------------------------------------

#endif // _STATIC_CODE_GETTER_H_
