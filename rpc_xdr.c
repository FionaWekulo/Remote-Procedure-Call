/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "rpc.h"

bool_t
xdr_number (XDR *xdrs, number *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->i))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_inputs (XDR *xdrs, inputs *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->i))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->j, ~0))
		 return FALSE;
	return TRUE;
}