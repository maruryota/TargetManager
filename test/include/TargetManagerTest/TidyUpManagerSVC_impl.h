// -*-C++-*-
/*!
 * @file  TidyUpManagerSVC_impl.h
 * @brief Service implementation header of TidyUpManager.idl
 *
 */

#include "BasicDataTypeSkel.h"
#include "ExtendedDataTypesSkel.h"

#include "TidyUpManagerSkel.h"

#ifndef TIDYUPMANAGERSVC_IMPL_H
#define TIDYUPMANAGERSVC_IMPL_H
 
/*!
 * @class ogata_TidyUpManagerSVC_impl
 * Example class implementing IDL interface ogata::TidyUpManager
 */
class ogata_TidyUpManagerSVC_impl
 : public virtual POA_ogata::TidyUpManager,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~ogata_TidyUpManagerSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   ogata_TidyUpManagerSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~ogata_TidyUpManagerSVC_impl();

   // attributes and operations
   ogata::RETURN_VALUE tidyup(const RTC::Pose2D& path, const RTC::TimedString& kind);

};

/*!
 * @class ogata_StringNavigationCommanderServiceSVC_impl
 * Example class implementing IDL interface ogata::StringNavigationCommanderService
 */
class ogata_StringNavigationCommanderServiceSVC_impl
 : public virtual POA_ogata::StringNavigationCommanderService,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~ogata_StringNavigationCommanderServiceSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   ogata_StringNavigationCommanderServiceSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~ogata_StringNavigationCommanderServiceSVC_impl();

   // attributes and operations
   ogata::RETURN_VALUE move(const RTC::Pose2D& path);

};

/*!
 * @class ogata_PickerSVC_impl
 * Example class implementing IDL interface ogata::Picker
 */
class ogata_PickerSVC_impl
 : public virtual POA_ogata::Picker,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~ogata_PickerSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   ogata_PickerSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~ogata_PickerSVC_impl();

   // attributes and operations
   ogata::RETURN_VALUE pick();

};

/*!
 * @class ogata_DroperSVC_impl
 * Example class implementing IDL interface ogata::Droper
 */
class ogata_DroperSVC_impl
 : public virtual POA_ogata::Droper,
   public virtual PortableServer::RefCountServantBase
{
 private:
   // Make sure all instances are built on the heap by making the
   // destructor non-public
   //virtual ~ogata_DroperSVC_impl();

 public:
  /*!
   * @brief standard constructor
   */
   ogata_DroperSVC_impl();
  /*!
   * @brief destructor
   */
   virtual ~ogata_DroperSVC_impl();

   // attributes and operations
   ogata::RETURN_VALUE drop(const RTC::TimedString& kind);

};



#endif // TIDYUPMANAGERSVC_IMPL_H


