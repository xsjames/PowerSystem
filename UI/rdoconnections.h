// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class C_rdoConnection;

/////////////////////////////////////////////////////////////////////////////
// CrdoConnections wrapper class

class CrdoConnections : public COleDispatchDriver
{
public:
	CrdoConnections() {}		// Calls COleDispatchDriver default constructor
	CrdoConnections(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoConnections(const CrdoConnections& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	void Remove(const VARIANT& ItemToRemove);
	void Add(LPDISPATCH prdoConnection);
	C_rdoConnection GetItem(const VARIANT& Index);
};
