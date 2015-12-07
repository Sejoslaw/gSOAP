/* soapStub.h
   Generated by gSOAP 2.8.27 from calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20827
# error "GSOAP VERSION 20827 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs, and Unions                                               *
 *                                                                            *
\******************************************************************************/

struct ns__addResponse;	/* calc.h:97 */
struct ns__add;	/* calc.h:97 */
struct ns__subResponse;	/* calc.h:100 */
struct ns__sub;	/* calc.h:100 */
struct ns__mulResponse;	/* calc.h:103 */
struct ns__mul;	/* calc.h:103 */
struct ns__divResponse;	/* calc.h:106 */
struct ns__div;	/* calc.h:106 */
struct ns__powResponse;	/* calc.h:109 */
struct ns__pow;	/* calc.h:109 */

/* calc.h:97 */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (10)
/* ns:addResponse complex type: */
struct ns__addResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of XSD type xsd:double */
public:
	int soap_type() const { return 10; } /* = unique type id SOAP_TYPE_ns__addResponse */
	         ns__addResponse();
	virtual ~ns__addResponse() { }
	friend ns__addResponse *soap_instantiate_ns__addResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:97 */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (11)
/* ns:add complex type: */
struct ns__add
{
public:
	double a;	/* required element of XSD type xsd:double */
	double b;	/* required element of XSD type xsd:double */
public:
	int soap_type() const { return 11; } /* = unique type id SOAP_TYPE_ns__add */
	         ns__add();
	virtual ~ns__add() { }
	friend ns__add *soap_instantiate_ns__add(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (13)
/* ns:subResponse complex type: */
struct ns__subResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of XSD type xsd:double */
public:
	int soap_type() const { return 13; } /* = unique type id SOAP_TYPE_ns__subResponse */
	         ns__subResponse();
	virtual ~ns__subResponse() { }
	friend ns__subResponse *soap_instantiate_ns__subResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (14)
/* ns:sub complex type: */
struct ns__sub
{
public:
	double a;	/* required element of XSD type xsd:double */
	double b;	/* required element of XSD type xsd:double */
public:
	int soap_type() const { return 14; } /* = unique type id SOAP_TYPE_ns__sub */
	         ns__sub();
	virtual ~ns__sub() { }
	friend ns__sub *soap_instantiate_ns__sub(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__mulResponse
#define SOAP_TYPE_ns__mulResponse (16)
/* ns:mulResponse complex type: */
struct ns__mulResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of XSD type xsd:double */
public:
	int soap_type() const { return 16; } /* = unique type id SOAP_TYPE_ns__mulResponse */
	         ns__mulResponse();
	virtual ~ns__mulResponse() { }
	friend ns__mulResponse *soap_instantiate_ns__mulResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__mul
#define SOAP_TYPE_ns__mul (17)
/* ns:mul complex type: */
struct ns__mul
{
public:
	double a;	/* required element of XSD type xsd:double */
	double b;	/* required element of XSD type xsd:double */
public:
	int soap_type() const { return 17; } /* = unique type id SOAP_TYPE_ns__mul */
	         ns__mul();
	virtual ~ns__mul() { }
	friend ns__mul *soap_instantiate_ns__mul(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__divResponse
#define SOAP_TYPE_ns__divResponse (19)
/* ns:divResponse complex type: */
struct ns__divResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of XSD type xsd:double */
public:
	int soap_type() const { return 19; } /* = unique type id SOAP_TYPE_ns__divResponse */
	         ns__divResponse();
	virtual ~ns__divResponse() { }
	friend ns__divResponse *soap_instantiate_ns__divResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__div
#define SOAP_TYPE_ns__div (20)
/* ns:div complex type: */
struct ns__div
{
public:
	double a;	/* required element of XSD type xsd:double */
	double b;	/* required element of XSD type xsd:double */
public:
	int soap_type() const { return 20; } /* = unique type id SOAP_TYPE_ns__div */
	         ns__div();
	virtual ~ns__div() { }
	friend ns__div *soap_instantiate_ns__div(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__powResponse
#define SOAP_TYPE_ns__powResponse (22)
/* ns:powResponse complex type: */
struct ns__powResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of XSD type xsd:double */
public:
	int soap_type() const { return 22; } /* = unique type id SOAP_TYPE_ns__powResponse */
	         ns__powResponse();
	virtual ~ns__powResponse() { }
	friend ns__powResponse *soap_instantiate_ns__powResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__pow
#define SOAP_TYPE_ns__pow (23)
/* ns:pow complex type: */
struct ns__pow
{
public:
	double a;	/* required element of XSD type xsd:double */
	double b;	/* required element of XSD type xsd:double */
public:
	int soap_type() const { return 23; } /* = unique type id SOAP_TYPE_ns__pow */
	         ns__pow();
	virtual ~ns__pow() { }
	friend ns__pow *soap_instantiate_ns__pow(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:110 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (24)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 24; } /* = unique type id SOAP_TYPE_SOAP_ENV__Header */
	         SOAP_ENV__Header();
	virtual ~SOAP_ENV__Header() { }
	friend SOAP_ENV__Header *soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:110 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (25)
/* Type SOAP_ENV__Code is a recursive data type (in)directly referencing itself through its (base) class members */
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of XSD type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of XSD type SOAP-ENV:Code */
public:
	int soap_type() const { return 25; } /* = unique type id SOAP_TYPE_SOAP_ENV__Code */
	         SOAP_ENV__Code();
	virtual ~SOAP_ENV__Code() { }
	friend SOAP_ENV__Code *soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:110 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (27)
/* SOAP-ENV:Detail complex type: */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below)
	   WARNING: do not create a cyclic data structure graph throught this element unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
	void *fault;	/* transient (not serialized) */
public:
	int soap_type() const { return 27; } /* = unique type id SOAP_TYPE_SOAP_ENV__Detail */
	         SOAP_ENV__Detail();
	virtual ~SOAP_ENV__Detail() { }
	friend SOAP_ENV__Detail *soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:110 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (30)
/* SOAP-ENV:Reason complex type: */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of XSD type xsd:string */
public:
	int soap_type() const { return 30; } /* = unique type id SOAP_TYPE_SOAP_ENV__Reason */
	         SOAP_ENV__Reason();
	virtual ~SOAP_ENV__Reason() { }
	friend SOAP_ENV__Reason *soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:110 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (31)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of XSD type xsd:QName */
	char *faultstring;	/* optional element of XSD type xsd:string */
	char *faultactor;	/* optional element of XSD type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of XSD type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of XSD type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of XSD type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of XSD type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of XSD type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of XSD type SOAP-ENV:Detail */
public:
	int soap_type() const { return 31; } /* = unique type id SOAP_TYPE_SOAP_ENV__Fault */
	         SOAP_ENV__Fault();
	virtual ~SOAP_ENV__Fault() { }
	friend SOAP_ENV__Fault *soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* calc.h:97 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* calc.h:97 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
