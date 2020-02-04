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
   ogata::RETURN_VALUE tidyup(const RTC::Pose2D& path);

};



#endif // TIDYUPMANAGERSVC_IMPL_H


