// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "IIOPC.h"

#if !defined (__ACE_INLINE__)
#include "IIOPC.i"
#endif /* !defined INLINE */

static const CORBA::Long _oc_IIOP_ListenPoint[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  33, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f4c6973), ACE_NTOHL (0x74656e50), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/ListenPoint:1.0
  12, ACE_NTOHL (0x4c697374), ACE_NTOHL (0x656e506f), ACE_NTOHL (0x696e7400),  // name = ListenPoint
  2, // member count
  5, ACE_NTOHL (0x686f7374), ACE_NTOHL (0x0),  // name = host
  CORBA::tk_string, 
  0U, // string length
  5, ACE_NTOHL (0x706f7274), ACE_NTOHL (0x0),  // name = port
  CORBA::tk_ushort,

};
static CORBA::TypeCode _tc_TAO_tc_IIOP_ListenPoint (CORBA::tk_struct, sizeof (_oc_IIOP_ListenPoint), (char *) &_oc_IIOP_ListenPoint, 0, sizeof (IIOP::ListenPoint));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IIOP)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_ListenPoint, &_tc_TAO_tc_IIOP_ListenPoint)
TAO_NAMESPACE_END
void IIOP::ListenPoint::_tao_any_destructor (void *x)
{
  ListenPoint *tmp = ACE_static_cast (ListenPoint*,x);
  delete tmp;
}


#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  
#if !defined (__TAO_UNBOUNDED_SEQUENCE_IIOP_LISTENPOINTLIST_CS_)
#define __TAO_UNBOUNDED_SEQUENCE_IIOP_LISTENPOINTLIST_CS_

  void
  IIOP::_TAO_Unbounded_Sequence_IIOP_ListenPointList::_allocate_buffer (CORBA::ULong length)
  {
    IIOP::ListenPoint* tmp = 0;
    tmp = _TAO_Unbounded_Sequence_IIOP_ListenPointList::allocbuf (length);
    
    if (this->buffer_ != 0)
    {
      IIOP::ListenPoint *old = ACE_reinterpret_cast (IIOP::ListenPoint *,this->buffer_);
      
      for (CORBA::ULong i = 0; i < this->length_; ++i)
        tmp[i] = old[i];
      
      if (this->release_)
        _TAO_Unbounded_Sequence_IIOP_ListenPointList::freebuf (old);
      
    }
    this->buffer_ = tmp;
  }
  
  void
  IIOP::_TAO_Unbounded_Sequence_IIOP_ListenPointList::_deallocate_buffer (void)
  {
    if (this->buffer_ == 0 || this->release_ == 0)
      return;
    
    IIOP::ListenPoint *tmp = ACE_reinterpret_cast (IIOP::ListenPoint *,this->buffer_);
    
    _TAO_Unbounded_Sequence_IIOP_ListenPointList::freebuf (tmp);
    this->buffer_ = 0;
  } 
  
  IIOP::_TAO_Unbounded_Sequence_IIOP_ListenPointList::~_TAO_Unbounded_Sequence_IIOP_ListenPointList (void) // Dtor.
  {
    this->_deallocate_buffer ();
  }
  
  
#endif /* end #if !defined */


#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 

#if !defined (_IIOP_LISTENPOINTLIST_CS_)
#define _IIOP_LISTENPOINTLIST_CS_

// *************************************************************
// IIOP::ListenPointList
// *************************************************************

IIOP::ListenPointList::ListenPointList (void)
{}
IIOP::ListenPointList::ListenPointList (CORBA::ULong max) // uses max size
  : 
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_IIOP_ListenPointList
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<IIOP::ListenPoint>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
 (max)
{}
IIOP::ListenPointList::ListenPointList (CORBA::ULong max, CORBA::ULong length, IIOP::ListenPoint *buffer, CORBA::Boolean release)
  : 
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_IIOP_ListenPointList
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<IIOP::ListenPoint>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
 (max, length, buffer, release)
{}
IIOP::ListenPointList::ListenPointList (const ListenPointList &seq) // copy ctor
  : 
#if !defined (TAO_USE_SEQUENCE_TEMPLATES)
  _TAO_Unbounded_Sequence_IIOP_ListenPointList
#else /* TAO_USE_SEQUENCE_TEMPLATES */
  TAO_Unbounded_Sequence<IIOP::ListenPoint>
#endif /* !TAO_USE_SEQUENCE_TEMPLATES */ 
 (seq)
{}
IIOP::ListenPointList::~ListenPointList (void) // dtor
{}
void IIOP::ListenPointList::_tao_any_destructor (void *x)
{
  ListenPointList *tmp = ACE_static_cast (ListenPointList*,x);
  delete tmp;
}


#endif /* end #if !defined */

static const CORBA::Long _oc_IIOP_ListenPointList[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  37, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f4c6973), ACE_NTOHL (0x74656e50), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x4c697374), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/ListenPointList:1.0
  16, ACE_NTOHL (0x4c697374), ACE_NTOHL (0x656e506f), ACE_NTOHL (0x696e744c), ACE_NTOHL (0x69737400),  // name = ListenPointList
  CORBA::tk_sequence, // typecode kind
  116, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_struct, // typecode kind
    100, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      33, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f4c6973), ACE_NTOHL (0x74656e50), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/ListenPoint:1.0
      12, ACE_NTOHL (0x4c697374), ACE_NTOHL (0x656e506f), ACE_NTOHL (0x696e7400),  // name = ListenPoint
      2, // member count
      5, ACE_NTOHL (0x686f7374), ACE_NTOHL (0x0),  // name = host
      CORBA::tk_string, 
      0U, // string length
      5, ACE_NTOHL (0x706f7274), ACE_NTOHL (0x0),  // name = port
      CORBA::tk_ushort,


    0U,

};
static CORBA::TypeCode _tc_TAO_tc_IIOP_ListenPointList (CORBA::tk_alias, sizeof (_oc_IIOP_ListenPointList), (char *) &_oc_IIOP_ListenPointList, 0, sizeof (IIOP::ListenPointList));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IIOP)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_ListenPointList, &_tc_TAO_tc_IIOP_ListenPointList)
TAO_NAMESPACE_END
static const CORBA::Long _oc_IIOP_BiDirIIOPServiceContext[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  45, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f426944), ACE_NTOHL (0x69724949), ACE_NTOHL (0x4f505365), ACE_NTOHL (0x72766963), ACE_NTOHL (0x65436f6e), ACE_NTOHL (0x74657874), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/BiDirIIOPServiceContext:1.0
  24, ACE_NTOHL (0x42694469), ACE_NTOHL (0x7249494f), ACE_NTOHL (0x50536572), ACE_NTOHL (0x76696365), ACE_NTOHL (0x436f6e74), ACE_NTOHL (0x65787400),  // name = BiDirIIOPServiceContext
  1, // member count
  14, ACE_NTOHL (0x6c697374), ACE_NTOHL (0x656e5f70), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x73000000),  // name = listen_points
  CORBA::tk_alias, // typecode kind for typedefs
  192, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f4c6973), ACE_NTOHL (0x74656e50), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x4c697374), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/ListenPointList:1.0
    16, ACE_NTOHL (0x4c697374), ACE_NTOHL (0x656e506f), ACE_NTOHL (0x696e744c), ACE_NTOHL (0x69737400),  // name = ListenPointList
    CORBA::tk_sequence, // typecode kind
    116, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_struct, // typecode kind
      100, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        33, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x49494f50), ACE_NTOHL (0x2f4c6973), ACE_NTOHL (0x74656e50), ACE_NTOHL (0x6f696e74), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/IIOP/ListenPoint:1.0
        12, ACE_NTOHL (0x4c697374), ACE_NTOHL (0x656e506f), ACE_NTOHL (0x696e7400),  // name = ListenPoint
        2, // member count
        5, ACE_NTOHL (0x686f7374), ACE_NTOHL (0x0),  // name = host
        CORBA::tk_string, 
        0U, // string length
        5, ACE_NTOHL (0x706f7274), ACE_NTOHL (0x0),  // name = port
        CORBA::tk_ushort,


      0U,


};
static CORBA::TypeCode _tc_TAO_tc_IIOP_BiDirIIOPServiceContext (CORBA::tk_struct, sizeof (_oc_IIOP_BiDirIIOPServiceContext), (char *) &_oc_IIOP_BiDirIIOPServiceContext, 0, sizeof (IIOP::BiDirIIOPServiceContext));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (IIOP)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BiDirIIOPServiceContext, &_tc_TAO_tc_IIOP_BiDirIIOPServiceContext)
TAO_NAMESPACE_END
void IIOP::BiDirIIOPServiceContext::_tao_any_destructor (void *x)
{
  BiDirIIOPServiceContext *tmp = ACE_static_cast (BiDirIIOPServiceContext*,x);
  delete tmp;
}

void operator<<= (CORBA::Any &_tao_any, const IIOP::ListenPoint &_tao_elem) // copying
{
  TAO_OutputCDR stream;
  stream << _tao_elem;
  _tao_any._tao_replace (
      IIOP::_tc_ListenPoint,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin ()
    );
}

void operator<<= (CORBA::Any &_tao_any, IIOP::ListenPoint *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      IIOP::_tc_ListenPoint,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      IIOP::ListenPoint::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, IIOP::ListenPoint *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(const IIOP::ListenPoint*&,_tao_elem);
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const IIOP::ListenPoint *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (IIOP::_tc_ListenPoint, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = ACE_static_cast(
          const IIOP::ListenPoint*,
          _tao_any.value ()
        );
      return 1;
    }
    else
    {
      IIOP::ListenPoint *tmp;
      ACE_NEW_RETURN (tmp, IIOP::ListenPoint, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            IIOP::_tc_ListenPoint,
            1,
            ACE_static_cast (void *, tmp),
            IIOP::ListenPoint::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

void operator<<= (
    CORBA::Any &_tao_any,
    const IIOP::ListenPointList &_tao_elem
  ) // copying
{
  TAO_OutputCDR stream;
  if (stream << _tao_elem)
  {
    _tao_any._tao_replace (
        IIOP::_tc_ListenPointList,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin ()
      );
  }
}

void operator<<= (CORBA::Any &_tao_any, IIOP::ListenPointList *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      IIOP::_tc_ListenPointList,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      IIOP::ListenPointList::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, IIOP::ListenPointList *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(
      const IIOP::ListenPointList*&,
      _tao_elem
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const IIOP::ListenPointList *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (IIOP::_tc_ListenPointList, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = ACE_static_cast(
          const IIOP::ListenPointList*,
          _tao_any.value ()
        );
      return 1;
    }
    else
    {
      IIOP::ListenPointList *tmp;
      ACE_NEW_RETURN (tmp, IIOP::ListenPointList, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            IIOP::_tc_ListenPointList,
            1,
            ACE_static_cast (void *, tmp),
            IIOP::ListenPointList::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

void operator<<= (CORBA::Any &_tao_any, const IIOP::BiDirIIOPServiceContext &_tao_elem) // copying
{
  TAO_OutputCDR stream;
  stream << _tao_elem;
  _tao_any._tao_replace (
      IIOP::_tc_BiDirIIOPServiceContext,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin ()
    );
}

void operator<<= (CORBA::Any &_tao_any, IIOP::BiDirIIOPServiceContext *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      IIOP::_tc_BiDirIIOPServiceContext,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      IIOP::BiDirIIOPServiceContext::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, IIOP::BiDirIIOPServiceContext *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(const IIOP::BiDirIIOPServiceContext*&,_tao_elem);
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const IIOP::BiDirIIOPServiceContext *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (IIOP::_tc_BiDirIIOPServiceContext, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = ACE_static_cast(
          const IIOP::BiDirIIOPServiceContext*,
          _tao_any.value ()
        );
      return 1;
    }
    else
    {
      IIOP::BiDirIIOPServiceContext *tmp;
      ACE_NEW_RETURN (tmp, IIOP::BiDirIIOPServiceContext, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            IIOP::_tc_BiDirIIOPServiceContext,
            1,
            ACE_static_cast (void *, tmp),
            IIOP::BiDirIIOPServiceContext::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IIOP::ListenPointList &_tao_sequence
  )
{
  if (strm << _tao_sequence.length ())
  {
    // encode all elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
    {
      _tao_marshal_flag = (strm << _tao_sequence[i]);
    }
    return _tao_marshal_flag;
  }
  return 0; // error
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IIOP::ListenPointList &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  if (strm >> _tao_seq_len)
  {
    // set the length of the sequence
    _tao_sequence.length (_tao_seq_len);
    // If length is 0 we return true.
    if (0 >= _tao_seq_len) 
      return 1;
    // retrieve all the elements
    CORBA::Boolean _tao_marshal_flag = 1;
    for (CORBA::ULong i = 0; i < _tao_sequence.length () && _tao_marshal_flag; i++)
    {
      _tao_marshal_flag = (strm >> _tao_sequence[i]);
    }
    return _tao_marshal_flag;
  }
  return 0; // error
}

