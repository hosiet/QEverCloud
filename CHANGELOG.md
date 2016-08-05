# Changelog

## 3.0.0
  * The build system was changed from qmake to CMake; qmake .pro file was left within the package for backward compatibility
  * Build shared library by default instead of static one
  * Add unit test for Optional template class
  * Rearrange the location of installed library's headers, now it is dependent on Qt version used to build the library

## 2.2.1
  * Fix a bug with incompatible signal/slot connection signatures for Qt4

## 2.2
  * The support for Qt 4 was returned back
  * Added the option to use classes from QWebEngine component instead of the ones from QtWebKit for OAuth

## 2.1
  * == and != operators for Evernote structs are available now
  * Asynchronous thumbnail download is added
  * Special exception types for AUTH_EXPIRED and RATE_LIMIT_REACHED errors
  * Move semantics for Optional is implemented. As a result moving is working for Evernote structs under a conforming compiler (and it's NOT VS2012).

## 2.0
  * Qt 4 is no longer supported.
  * Asynchronous API is introdused.
  * Various non-critical fixes and improvements.

## 1.2
  * Fixed reported issues when compiling under Qt 4, should be no problems now
  * This is the last version then will try to be compatible with Qt 4
  * Some optimizations

## 1.1
  * EvernoteOAuthDialog::open() now works as expected
  * qsrand() is no longer called by the library
  * Default algorithm for nonce generation can be replaced, see setNonceGenerator

## 1.0
  * Initial release
 